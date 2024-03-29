/********************************************************************************
*					Tangram Library - version 10.0.0							*
*********************************************************************************
* Copyright (C) 2002-2019 by Tangram Team.   All Rights Reserved.				*
*
* THIS SOURCE FILE IS THE PROPERTY OF TANGRAM TEAM AND IS NOT TO
* BE RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED
* WRITTEN CONSENT OF TANGRAM TEAM.
*
* THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS
* OUTLINED IN THE GPL LICENSE AGREEMENT.TANGRAM TEAM
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:tangramteam@outlook.com
* https://www.tangramteam.com
*
********************************************************************************/

// TangramApp.cpp : Implementation of DLL Exports.

#include "stdafx.h"
#include "TangramApp.h" 
#include <VersionHelpers.h> 
#include <shellscalingapi.h>

#include "fm20.h"
#include "CloudUtilities\TangramDownLoad.h"
#include "VisualStudioPlus\VSAddin.h"
#include "EclipsePlus\EclipseAddin.h"

#include "OfficePlus\WordPlus\WordAddin.h"
#include "OfficePlus\ExcelPlus\ExcelAddin.h"
#include "OfficePlus\VisioPlus\VisioAddin.h"
#include "OfficePlus\AccessPlus\AccessAddin.h"
#include "OfficePlus\OutLookPlus\OutLookAddin.h"
#include "OfficePlus\ProjectPlus\ProjectAddin.h"
#include "OfficePlus\PowerPointPlus\PowerPointAddin.h"

#include "NodeWnd.h"
#include "WndNode.h"
#include "WndFrame.h"
#include "WPFView.h"
#include <io.h>
#include <stdio.h>

#include "TangramCategory.h"
#include "TangramListView.h"
#include "Psapi.h"

#include "chromium\BrowserWnd.h"
#include "chromium\HtmlWnd.h"
//#include "chromium\ChromeBrowserProxy.cpp"

using namespace ChromePlus;
using namespace OfficePlus;
using namespace OfficePlus::WordPlus;
using namespace OfficePlus::ExcelPlus;

// Description  : the unique App object
CTangramApp theApp;
CTangram* g_pTangram = nullptr;
extern CTangramApplicationImpl* m_pTangramApplicationImpl;

void CHelperWnd::OnFinalMessage(HWND hWnd)
{
	CWindowImpl::OnFinalMessage(hWnd);
	if (m_strID != _T("chromeplus.tangram"))
	{
		auto it = g_pTangram->m_mapRemoteTangramCore.find(m_strID);
		if (it != g_pTangram->m_mapRemoteTangramCore.end())
		{
			ULONG dw = it->second->Release();
			while (dw)
				dw = it->second->Release();
			g_pTangram->m_mapRemoteTangramCore.erase(m_strID);
		}
		auto it2 = g_pTangram->m_mapAppDispDic.find(m_strID);
		if (it2 != g_pTangram->m_mapAppDispDic.end())
		{
			g_pTangram->m_mapAppDispDic.erase(it2);
		}
	}
	else
		::PostAppMessage(::GetCurrentThreadId(), WM_CHROMEHELPWND, 0, 0);

	delete this;
}

// Method used for Windows 8.1 and later.
// Since we support versions earlier than 8.1, we must dynamically load this
// function from user32.dll, so it won't fail to load in runtime. For earlier
// Windows versions GetProcAddress will return null and report failure so that
// callers can fall back on the deprecated SetProcessDPIAware.
bool SetProcessDpiAwarenessWrapper(PROCESS_DPI_AWARENESS value) {
	decltype(&::SetProcessDpiAwareness) set_process_dpi_awareness_func =
		reinterpret_cast<decltype(&::SetProcessDpiAwareness)>(GetProcAddress(
			GetModuleHandle(L"user32.dll"), "SetProcessDpiAwarenessInternal"));
	if (set_process_dpi_awareness_func) {
		HRESULT hr = set_process_dpi_awareness_func(value);
		if (SUCCEEDED(hr))
			return true;
		//DLOG_IF(ERROR, hr == E_ACCESSDENIED)
		//	<< "Access denied error from SetProcessDpiAwarenessInternal. Function "
		//	"called twice, or manifest was used.";
		//NOTREACHED()
		//	<< "SetProcessDpiAwarenessInternal failed with unexpected error: "
		//	<< hr;
		//return false;
	}
	return false;
}

CTangramApp::CTangramApp()
{
}

CTangramApp::~CTangramApp()
{
	if (g_pTangram)
	{
		delete g_pTangram;
	}
	OutputDebugString(_T("******************************Exit CTangramApp******************************\n"));
}

BOOL CTangramApp::InitInstance()
{
	TCHAR m_szBuffer[MAX_PATH];
	memset(m_szBuffer, 0, sizeof(m_szBuffer));
	::GetModuleFileName(NULL, m_szBuffer, MAX_PATH);
	CString path(m_szBuffer);
	int nPos = path.ReverseFind('\\');
	CString strName = path.Mid(nPos + 1);
	nPos = strName.Find(_T("."));
	CString strExeName = strName.Left(nPos);
	strExeName.MakeLower();
	if (strExeName == _T("regsvr32"))
		return true;

	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);
	::OleInitialize(NULL);
	BOOL bOfficeApp = false;

	CString strExes = _T("");
	HMODULE hModule = ::GetModuleHandle(_T("mso.dll"));
	if (hModule)
	{
		strExes = _T("winword,excel,powerpnt,outlook,msaccess,infopath,winproj,onenote,visio,");
		bOfficeApp = true;
	}
	if (bOfficeApp)
	{
	}
	else
	{
#ifndef _WIN64
		if (::GetModuleHandle(_T("TangramPackage.dll")))
		{
			CString strVer = theApp.GetFileVer();
			int nPos = strVer.Find(_T("."));
			int nVer = _wtoi(strVer.Left(nPos));
			if (nVer > 9)
			{
				new CComObject < VisualStudioPlus::CVSAddin >;
				g_pTangram->m_nAppID = 9;
			}
		}
		else
		{
			new CComObject < CTangram >;
			g_pTangram->m_strExeName = strExeName;
			g_pTangram->m_dwThreadID = ::GetCurrentThreadId();
			if (g_pTangram->m_hCBTHook == nullptr)
				g_pTangram->m_hCBTHook = SetWindowsHookEx(WH_CBT, CTangramApp::CBTProc, NULL, g_pTangram->m_dwThreadID);
			theApp.SetHook(g_pTangram->m_dwThreadID);
		}
#else
		new CComObject < CTangram >;
		g_pTangram->m_strExeName = strExeName;
		g_pTangram->m_dwThreadID = ::GetCurrentThreadId();
		if (g_pTangram->m_hCBTHook == nullptr)
			g_pTangram->m_hCBTHook = SetWindowsHookEx(WH_CBT, CTangramApp::CBTProc, NULL, g_pTangram->m_dwThreadID);
		g_pTangram->m_bEnableProcessFormTabKey = true;
		theApp.SetHook(g_pTangram->m_dwThreadID);
		if (g_pTangram->m_hForegroundIdleHook == NULL)
			g_pTangram->m_hForegroundIdleHook = SetWindowsHookEx(WH_FOREGROUNDIDLE, CTangramApp::ForegroundIdleProc, NULL, ::GetCurrentThreadId());
#endif	
	}
	if (g_pTangram)
	{
		g_pTangram->m_strExeName = strExeName;
		g_pTangram->Init();
	}

	return true;
}

int CTangramApp::ExitInstance()
{
	ATLTRACE(_T("Begin Tangram ExitInstance :%p\n"), this);
	if (g_pTangram)
	{
		g_pTangram->ExitInstance();
	}
	AfxOleTerm(FALSE);
	ATLTRACE(_T("End Tangram ExitInstance :%p\n"), this);
	return CWinApp::ExitInstance();
}

LRESULT CALLBACK CTangramApp::TangramWndProc(_In_ HWND hWnd, UINT msg, _In_ WPARAM wParam, _In_ LPARAM lParam)
{
	switch (msg)
	{
	case WM_CREATE:
	{
	}
	break;
	case WM_CLOSE:
	{
		::ShowWindow(g_pTangram->m_hHostWnd, SW_HIDE);
	}
	return 0;
	case WM_CHROMEHELPWND:
	{
		CString strID = _T("chromeplus.tangram");
		{
			auto it = g_pTangram->m_mapRemoteTangramCore.find(strID);
			if (it != g_pTangram->m_mapRemoteTangramCore.end())
			{
				ULONG dw = it->second->Release();
				while (dw)
					dw = it->second->Release();
				g_pTangram->m_mapRemoteTangramCore.erase(strID);
			}
		}
	}
	return 0;
	case WM_DESTROY:
	{
		if (hWnd == g_pTangram->m_hHostWnd)
		{
			if (::IsWindow(g_pTangram->m_hHostBrowserWnd))
			{
				::ShowWindow(g_pTangram->m_hHostBrowserWnd, SW_HIDE);
				::SetParent(g_pTangram->m_hHostBrowserWnd, NULL);
				::SendMessage(g_pTangram->m_hHostBrowserWnd, WM_CLOSE, 0, 0);
			}
			if (g_pTangram->m_hForegroundIdleHook)
				UnhookWindowsHookEx(g_pTangram->m_hForegroundIdleHook);

			g_pTangram->m_pDesignerFrame = nullptr;
			g_pTangram->m_pDesignerWndPage = nullptr;

			if (g_pTangram->m_strCreatorIDs != _T(""))
			{
				int nPos = g_pTangram->m_strCreatorIDs.Find(_T(","));
				while (g_pTangram->m_strCreatorIDs != _T(""))
				{
					CString strID = g_pTangram->m_strCreatorIDs.Left(nPos);
					g_pTangram->m_strCreatorIDs = g_pTangram->m_strCreatorIDs.Mid(nPos + 1);
					nPos = g_pTangram->m_strCreatorIDs.Find(_T(","));
					auto it = g_pTangram->m_mapObjDic.find(strID);
					if (it != g_pTangram->m_mapObjDic.end())
					{
						g_pTangram->m_mapObjDic.erase(it);
					}
				}
			}
			if (g_pTangram->m_mapMDTFrame.size())
			{
				auto it = g_pTangram->m_mapMDTFrame.begin();
				while (it != g_pTangram->m_mapMDTFrame.end())
				{
					if (it->second)
					{
						it->second->DestroyWindow();
					}
					it = g_pTangram->m_mapMDTFrame.begin();
				}
			}
			g_pTangram->m_mapMDTFrame.clear();
			if (g_pTangram->m_mapTangramMDIChildWnd.size())
			{
				auto it = g_pTangram->m_mapTangramMDIChildWnd.begin();
				while (it != g_pTangram->m_mapTangramMDIChildWnd.end())
				{
					if (it->second)
					{
						it->second->DestroyWindow();
					}
					it = g_pTangram->m_mapTangramMDIChildWnd.begin();
				}
			}
			g_pTangram->m_mapTangramMDIChildWnd.clear();
		}
		break;
	}
	break;
	case WM_POWERBROADCAST:
	{
		if (wParam == PBT_APMRESUMEAUTOMATIC)
		{
			//for (auto it : g_pTangram->m_mapWindowPage)
			//{
			//	if (it.second)
			//	{
			//		for (auto it2 : it.second->m_mapFrame)
			//		{
			//			it2.second->HostPosChanged();
			//			for (auto it3 : it2.second->m_mapWPFView)
			//			{
			//				ATLTRACE(_T("HWND %x, WM_POWERBROADCAST\n"), it3.second->m_hWnd);
			//				::SetWindowLongPtr(it3.second->m_hWnd, GWLP_USERDATA, 1963);
			//			}
			//		}
			//	}
			//}
			for (auto it : g_pTangram->m_mapThreadInfo)
			{
				if (it.second)
				{
					for (auto it2 : it.second->m_mapTangramFrame)
					{
						it2.second->HostPosChanged();
						for (auto it3 : it2.second->m_mapWPFView)
						{
							ATLTRACE(_T("HWND %x, WM_POWERBROADCAST\n"), it3.second->m_hWnd);
							::SetWindowLongPtr(it3.second->m_hWnd, GWLP_USERDATA, 1963);
						}
					}
				}
			}
		}
	}
	break;
	case WM_WINDOWPOSCHANGED:
		if (hWnd == g_pTangram->m_hHostWnd)
		{
			RECT rc;
			::GetClientRect(g_pTangram->m_hHostWnd, &rc);
			::SetWindowPos(g_pTangram->m_hChildHostWnd, NULL, 0, 0, rc.right, rc.bottom, SWP_NOACTIVATE | SWP_NOREDRAW);
		}
		else if (hWnd == g_pTangram->m_hTemplateWnd)
		{
			RECT rc;
			::GetClientRect(g_pTangram->m_hTemplateWnd, &rc);
			::SetWindowPos(g_pTangram->m_hTemplateChildWnd, NULL, 0, 0, rc.right, rc.bottom, SWP_NOACTIVATE | SWP_NOREDRAW);
		}
		break;
	case WM_CHROMEMSG:
	{
		switch (wParam)
		{
		case 0:
			break;
		};
	}
	break;
	case WM_OPENDOCUMENT:
	{
		g_pTangram->OnOpenDoc(wParam);
	}
	break;
	case WM_INITOUTLOOK:
	{
		((OfficePlus::OutLookPlus::COutLookAddin*)g_pTangram)->InitOutLook();
	}
	break;
	case WM_OFFICEOBJECTCREATED:
	{
		HWND hWnd = (HWND)wParam;
		if (::IsWindow(hWnd))
			((OfficePlus::COfficeAddin*)g_pTangram)->ConnectOfficeObj(hWnd);
	}
	break;
	case WM_TANGRAMMSG:
		switch (lParam)
		{
		case 1222:
		{
			if (wParam == 1963)
			{
				OfficePlus::OutLookPlus::COutLookAddin* pAddin = (OfficePlus::OutLookPlus::COutLookAddin*)g_pTangram;
				if (pAddin->m_pActiveOutlookExplorer)
				{
					pAddin->m_pActiveOutlookExplorer->SetDesignState();
				}
			}
		}
		break;
		case 20190501:
		{
			g_pTangram->m_hMainWnd = g_pTangram->m_pTangramAppProxy->InitTangramApp();
		}
		break;
		}
		break;
	case WM_TABCHANGE:
	{
		HWND hwnd = (HWND)wParam;
		IWndFrame* pFrame = nullptr;
		g_pTangram->GetWndFrame((LONGLONG)hwnd, &pFrame);
		if (pFrame)
		{
			IWndNode* pNode = nullptr;
			pFrame->Extend(CComBSTR(L""), CComBSTR(L""), &pNode);
			LONGLONG h = 0;
			pNode->get_Handle(&h);
			HWND hWnd = (HWND)h;
			::InvalidateRect(hWnd, nullptr, true);
		}
	}
	break;
	case WM_TANGRAMNEWOUTLOOKOBJ:
	{
		using namespace OfficePlus::OutLookPlus;
		int nType = wParam;
		HWND hWnd = ::GetActiveWindow();
		if (nType)
		{
			COutLookExplorer* pOutLookPlusItemWindow = (COutLookExplorer*)lParam;
			COutLookAddin* pAddin = (COutLookAddin*)g_pTangram;
			pOutLookPlusItemWindow->m_strKey = pAddin->m_strCurrentKey;
			pAddin->m_mapOutLookPlusExplorerMap[hWnd] = pOutLookPlusItemWindow;
			pOutLookPlusItemWindow->m_hWnd = hWnd;
		}
	}
	break;
	case WM_TANGRAMACTIVEINSPECTORPAGE:
	{
		using namespace OfficePlus::OutLookPlus;
		COutLookInspector* pOutLookPlusItemWindow = (COutLookInspector*)wParam;
		pOutLookPlusItemWindow->ActivePage();
	}
	break;
	case WM_TANGRAMITEMLOAD:
	{
		using namespace OfficePlus::OutLookPlus;
		COutLookAddin* pAddin = (COutLookAddin*)g_pTangram;
		HWND hWnd = ::GetActiveWindow();
		auto it = pAddin->m_mapOutLookPlusExplorerMap.find(hWnd);
		if (it != pAddin->m_mapOutLookPlusExplorerMap.end())
		{
			COutLookExplorer* pExplorer = it->second;
			if (pExplorer->m_pInspectorContainerWnd == nullptr)
			{
				HWND _hWnd = ::FindWindowEx(hWnd, NULL, _T("rctrl_renwnd32"), NULL);
				if (_hWnd)
				{
					_hWnd = ::FindWindowEx(_hWnd, NULL, _T("AfxWndW"), NULL);
					if (_hWnd)
					{
						pExplorer->m_pInspectorContainerWnd = new CInspectorContainerWnd();
						pExplorer->m_pInspectorContainerWnd->SubclassWindow(_hWnd);
					}
				}
			}

			long nKey = wParam;
			auto it = pAddin->m_mapTangramInspectorItem.find(nKey);
			if (it != pAddin->m_mapTangramInspectorItem.end())
			{
				CInspectorItem* pItem = (CInspectorItem*)wParam;
				if (pExplorer->m_pInspectorContainerWnd)
				{
					pExplorer->m_pInspectorContainerWnd->m_strXml = pItem->m_strXml;
					::PostMessage(pExplorer->m_pInspectorContainerWnd->m_hWnd, WM_TANGRAMITEMLOAD, 0, 0);
				}
			}
		}
	}
	break;
	case WM_TANGRAMAPPINIT:
	{
		if (g_pTangram->m_bEclipse)
		{
			if (wParam == 1963 && lParam == 1222)
			{
				break;
			}

			if (g_pTangram->m_pActiveEclipseWnd)
			{
				IWndNode* pNode = nullptr;
				if (g_pTangram->m_strStartView == _T("TopView"))
				{
					g_pTangram->m_pActiveEclipseWnd->Extend(_T("Start"), g_pTangram->m_strStartXml.AllocSysString(), &pNode);
				}
				else if (g_pTangram->m_strStartView == _T("EclipseView"))
				{
					IEclipseCtrl* pCtrl = nullptr;
					g_pTangram->m_pActiveEclipseWnd->get_Ctrl(CComVariant((long)0), &pCtrl);
					if (pCtrl)
					{
						pCtrl->Extend(CComBSTR(L"EclipseView"), CComBSTR(L"Start"), g_pTangram->m_strStartXml.AllocSysString(), &pNode);
					}
				}
			}
		}
	}
	break;
	case WM_TANGRAMAPPQUIT:
	{
		::PostAppMessage(::GetCurrentThreadId(), WM_QUIT, 0, 0);
	}
	break;
	default:
		break;
	}
	return ::DefWindowProc(hWnd, msg, wParam, lParam);
}

LRESULT CTangramApp::ForegroundIdleProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	for (auto it : g_pTangram->m_mapTangramAppProxy)
		it.second->OnForegroundIdleProc();
	return CallNextHookEx(g_pTangram->m_hForegroundIdleHook, nCode, wParam, lParam);
}

LRESULT CALLBACK CTangramApp::TangramMsgWndProc(_In_ HWND hWnd, UINT msg, _In_ WPARAM wParam, _In_ LPARAM lParam)
{
	switch (msg)
	{
	case WM_CREATE:
	{
		if (g_pTangram->m_hTangramWnd == NULL)
		{
			g_pTangram->m_hTangramWnd = hWnd;
			::PostMessage(hWnd, WM_TANGRAMINIT, 0, 20002000);
		}
	}
	break;
	case WM_CHROMERENDERERFRAMEHOSTINIT:
	{
		//		auto it = g_pTangram->m_mapTangramRendererFrame.find((__int64)wParam);
		//		if (it != g_pTangram->m_mapTangramRendererFrame.end())
		//		{
		//			it->second->m_pHost->m_hostWnd = it->second->m_pHost->GetLegacyRenderWidgetHWnd();
		//#ifdef DEBUG
		//			if (::IsWindow(it->second->m_pHost->m_hostWnd))
		//			{
		//				ATLTRACE(_T("GetLegacyRenderWidgetHWnd:%x\n"), it->second->m_pHost->m_hostWnd);
		//			}
		//#endif
		//		}
	}
	break;
	case WM_WINFORMCREATED:
	{
		LRESULT l = ::SendMessage((HWND)wParam, WM_TANGRAMDATA, 0, 20190214);
		if (l == 0)
		{
			CTangramWinFormWnd* pWnd = new CTangramWinFormWnd();
			g_pTangram->m_hFormNodeWnd = (HWND)wParam;
			pWnd->SubclassWindow((HWND)wParam);
			::PostMessage(g_pTangram->m_hFormNodeWnd, WM_WINFORMCREATED, 0, 0);
		}
	}
	break;
	case WM_MDICLIENTCREATED:
	{
		if (g_pTangram->m_pMDIMainWnd)
		{
			IWndPage* pPage = nullptr;
			g_pTangram->CreateWndPage((__int64)g_pTangram->m_pMDIMainWnd->m_hWnd, &pPage);
			g_pTangram->m_pMDIMainWnd->m_pPage = (CWndPage*)pPage;
			IWndNode* pNode = nullptr;
			g_pTangram->m_pMDIMainWnd->m_pDocTemplate->m_strKey = _T("default");
			g_pTangram->m_pMDIMainWnd->m_pDocTemplate->m_strClientKey = _T("default");
			g_pTangram->m_pMDIMainWnd->m_pDocTemplate->InitXmlData();
			IWndFrame* pFrame = nullptr;
			g_pTangram->m_pMDIMainWnd->m_pPage->CreateFrame(CComVariant(0), CComVariant((LONGLONG)g_pTangram->m_pMDIMainWnd->m_hMDIClient), CComBSTR("mdiclient"), &pFrame);
			if (pFrame)
			{
				CWndFrame* _pFrame = (CWndFrame*)pFrame;
				_pFrame->m_pTangramDocTemplate = g_pTangram->m_pMDIMainWnd->m_pDocTemplate;
				pFrame->Extend(CComBSTR("mdiclient"), CComBSTR(""), &pNode);
				g_pTangram->m_pMDIMainWnd->m_pDocTemplate->m_mapMainPageNode[g_pTangram->m_pMDIMainWnd->m_hMDIClient] = (CWndNode*)pNode;
			}
			for (auto it : g_pTangram->m_pMDIMainWnd->m_mapDesignableWnd)
			{
				HWND h = ::GetParent(it.first);
				::GetWindowText(h, g_pTangram->m_szBuffer, MAX_PATH);
				CString str = CString(g_pTangram->m_szBuffer);
				str.Replace(_T(" "), _T("_"));
				g_pTangram->m_pMDIMainWnd->m_mapDesignableWnd[it.first] = str;
			}
		}
		return 0;
	}
	break;
	case WM_CONTROLBARCREATED:
	{
		HWND hwnd = (HWND)wParam;
		HWND hPWnd = (HWND)lParam;
		HWND hTop = ::GetAncestor(hPWnd, GA_ROOT);
		auto it = g_pTangram->m_mapTangramMDIChildWnd.find(hTop);
		if (it != g_pTangram->m_mapTangramMDIChildWnd.end() || (g_pTangram->m_nAppType == 1965 && g_pTangram->m_pActiveMDIChildWnd))
		{
			return 1;
		}

		if (lParam && ::IsWindow(hwnd))
		{
			HWND hClient = nullptr;
			auto it = g_pTangram->m_mapWorkBenchWnd.find(hPWnd);
			if (it != g_pTangram->m_mapWorkBenchWnd.end())
			{
				hClient = it->second->m_hClient;
				hPWnd = ::GetParent(hClient);
			}
			else
				hClient = ::GetDlgItem(hPWnd, AFX_IDW_PANE_FIRST);
			BOOL bMDIFrame = FALSE;
			if (::GetWindowLong(hClient, GWL_STYLE) & MDIS_ALLCHILDSTYLES)
			{
				bMDIFrame = TRUE;
			}
			CTangramAFXHelperWnd* pCtrlBar = new CTangramAFXHelperWnd();
			pCtrlBar->m_hParent = hPWnd;
			pCtrlBar->SubclassWindow(hwnd);
			g_pTangram->m_mapTangramAFXHelperWnd[hwnd] = pCtrlBar;
			HWND hFrame = ::GetDlgItem(hwnd, AFX_IDW_PANE_FIRST);
			if (::IsWindow(hFrame))
			{
				pCtrlBar->m_hFrame = hFrame;
				if (::IsWindow(hPWnd))
				{
					CWndPage* pPage = nullptr;
					auto it = g_pTangram->m_mapWindowPage.find(hPWnd);
					if (it == g_pTangram->m_mapWindowPage.end())
					{
						HWND hPWnd = (HWND)lParam;
						IWndNode* pNode = nullptr;
						pPage = new CComObject<CWndPage>;
						pPage->m_hWnd = hPWnd;
						g_pTangram->m_mapWindowPage[hPWnd] = pPage;
						pPage->put_ConfigName(CComBSTR(L""));
						for (auto it : g_pTangram->m_mapTangramAppProxy)
						{
							CTangramWndPageProxy* pTangramProxy = it.second->OnWndPageCreated(pPage);
							if (pTangramProxy)
								pPage->m_mapWndPageProxy[it.second] = pTangramProxy;
						}
					}
					else
					{
						pPage = it->second;
					}
					if (g_pTangram->m_pMDIMainWnd && g_pTangram->m_pMDIMainWnd->m_pDocTemplate)
						pPage->m_pTangramDocTemplate = g_pTangram->m_pMDIMainWnd->m_pDocTemplate;
					auto it2 = pPage->m_mapCtrlBarFrame.find(hFrame);
					if (it2 == pPage->m_mapCtrlBarFrame.end())
					{
						CString strCaption = _T("");
						::GetWindowText(hFrame, g_pTangram->m_szBuffer, MAX_PATH);
						strCaption = CString(g_pTangram->m_szBuffer);
						strCaption.Trim();
						if (strCaption == _T(""))
						{
							::GetWindowText(hwnd, g_pTangram->m_szBuffer, MAX_PATH);
							strCaption = CString(g_pTangram->m_szBuffer);
							strCaption.Trim();
						}
						strCaption.Replace(_T(" "), _T("_"));
						//strCaption += _T("_default");
						IWndNode* pNode = nullptr;
						bool bSavetocfg = (pPage->m_pTangramDocTemplate == nullptr);
						pPage->CreateFrameWithDefaultNode((LONGLONG)hFrame, CComBSTR(strCaption), CComBSTR(L""), CComBSTR(L""), bSavetocfg, &pNode);
						if (pNode)
						{
							if (pPage->m_pTangramDocTemplate)
							{
								pPage->m_pTangramDocTemplate->m_mapMainPageNode[hFrame] = (CWndNode*)pNode;
							}
							IWndFrame* pFrame = nullptr;
							pNode->get_Frame(&pFrame);
							((CWndFrame*)pFrame)->m_nWndFrameType = ControlBarFrame;
							pPage->m_mapCtrlBarFrame[hFrame] = (CWndFrame*)pFrame;
						}
					}
				}
			}
		}
		return 1;
	}
	break;
	case WM_TANGRAMMSG:
	{
		if (wParam)
		{
			switch (lParam)
			{
			case 19631963:
			{
				DocTemplateInfo* pDocTemplateInfo = (DocTemplateInfo*)wParam;
				CString strPath = g_pTangram->m_strAppCommonDocPath + _T("Tangramdoctemplate.xml");
				if (::PathFileExists(strPath))
				{
					CTangramXmlParse m_Parse;
					m_Parse.LoadFile(strPath);
					CString _strKey = pDocTemplateInfo->strProxyID + pDocTemplateInfo->strExt;
					if (m_Parse.GetChild(_strKey) == nullptr)
					{
						CTangramXmlParse* pParse = m_Parse.AddNode(_strKey);
						CString strVal = _T("");
						strVal += pDocTemplateInfo->strFileTypeID;
						strVal += _T("|");
						strVal += pDocTemplateInfo->strfilterName;
						strVal += _T("|");
						strVal += _T("*") + pDocTemplateInfo->strExt;
						strVal += _T("|");
						strVal += pDocTemplateInfo->strProxyName;
						strVal += _T("|");
						if (pDocTemplateInfo->nResID != -1)
						{
							CString strID = _T("");
							strID.Format(_T("%d"), pDocTemplateInfo->nResID);
							pParse->put_attr(_T("ResID"), strID);
						}
						pParse->put_text(strVal);
						m_Parse.SaveFile(strPath);
						if (pDocTemplateInfo->bDll)
						{
							TCHAR	m_szBuffer[MAX_PATH];
							HRESULT hr = SHGetFolderPath(NULL, CSIDL_COMMON_APPDATA, NULL, 0, m_szBuffer);
							CString strPath = CString(m_szBuffer);
							strPath += _T("\\TangramCommonDocTemplate\\TangramReg.xml");
							CTangramXmlParse m_Parse2;
							if (::PathFileExists(strPath) == FALSE)
							{
								m_Parse2.LoadXml(_T("<TangramDocReg />"));
								m_Parse2.SaveFile(strPath);
							}
							else
							{
								m_Parse2.LoadFile(strPath);
							}
							if (m_Parse2.GetChild(pDocTemplateInfo->strProxyID) == false)
							{
								m_Parse2.AddNode(pDocTemplateInfo->strProxyID);
								m_Parse2.SaveFile(strPath);
							}
						}
					}
				}
				//delete pDocTemplateInfo;
			}
			break;
			case 19651963:
			{
				if (g_pTangram->m_bEclipse == false &&
					::GetModuleHandle(_T("tangramclr.dll")) == nullptr &&
					g_pTangram->m_bOfficeApp == false &&
					g_pTangram->m_strStartupCLRObj != _T(""))
				{
					g_pTangram->LoadCLR();

					CComPtr<IDispatch> pFormDisp;
					g_pTangram->CreateCLRObj(g_pTangram->m_strStartupCLRObj.AllocSysString(), &pFormDisp);
					if (pFormDisp)
					{
						g_pTangram->m_bEnableProcessFormTabKey = true;
						g_pTangram->m_pMainFormDisp = pFormDisp.Detach();
						g_pTangram->m_strStartupCLRObj = _T("");
					}
				}
				else
				{
					if (g_pTangram->m_nAppID != 9 &&
						g_pTangram->m_nTangramObj == 0 &&
						::GetModuleHandle(_T("tangramclr.dll")) == nullptr &&
						g_pTangram->m_bEclipse == false &&
						g_pTangram->m_bOfficeApp == false &&
						g_pTangram->m_mapMDTFrame.size() == 0 &&
						g_pTangram->m_mapWindowPage.size() == 0)
					{
						if (g_pTangram->m_pActiveMDIChildWnd == nullptr)
						{
							CString strPath = g_pTangram->m_strAppDataPath + _T("default.tangramdoc");
							if (::PathFileExists(strPath))
							{
								ITangramDoc* pDoc = nullptr;
								BSTR bstrPath = strPath.AllocSysString();
								g_pTangram->OpenTangramDocFile(bstrPath, &pDoc);
								::SysFreeString(bstrPath);
							}
						}
					}
				}
			}
			break;
			case 20170907:
				if (::IsWindow(g_pTangram->m_pTangramPackageProxy->m_hPropertyWnd))
				{
					::SetWindowLongPtr(g_pTangram->m_pTangramPackageProxy->m_hPropertyWnd, GWL_STYLE, ::GetWindowLongPtr(g_pTangram->m_pTangramPackageProxy->m_hPropertyWnd, GWL_STYLE) | WS_VISIBLE);
				}

				return ::DefWindowProc(hWnd, msg, wParam, lParam);
				break;
			default:
			{
				if (g_pTangram->m_mapTangramDocTemplateInfo.size() == 0)
					g_pTangram->InitTangramDocManager();

				CString strFile = _T("");
				CFileDialog openFileDlg(true, _T(""), _T(""), OFN_HIDEREADONLY | OFN_FILEMUSTEXIST | OFN_OVERWRITEPROMPT, g_pTangram->m_strDocFilters, NULL);
				openFileDlg.m_ofn.nMaxCustFilter++;
				if (openFileDlg.DoModal() == IDOK)
				{
					CString filePath = openFileDlg.GetPathName();
					ITangramDoc* pDoc = nullptr;
					g_pTangram->OpenTangramDocFile(filePath.AllocSysString(), &pDoc);
					if (pDoc != nullptr)
					{
						CTangramDoc* _pDoc = (CTangramDoc*)pDoc;
						return (LRESULT)_pDoc;
					}
				}
			}
			break;
			}
			return 0;
		}
	}
	switch (lParam)
	{
	case 20190418:
	{
		if (g_pTangram->m_pTangramMainDllLoader)
			g_pTangram->m_pTangramMainDllLoader->LaunchEx();
	}
	break;
	case 19651963:
	{
		CString _strPathReg = g_pTangram->m_strAppCommonDocPath + _T("TangramReg.xml");
		CTangramXmlParse m_ParseReg;
		if (m_ParseReg.LoadFile(_strPathReg) == FALSE)
		{
			m_ParseReg.LoadXml(_T("<TangramDocReg />"));
			m_ParseReg.SaveFile(_strPathReg);
		}
		if (g_pTangram->m_strLibs != _T(""))
		{
			int nPos = g_pTangram->m_strLibs.Find(_T("|"));
			while (nPos != -1)
			{
				CString strLib = g_pTangram->m_strLibs.Left(nPos);
				g_pTangram->m_strLibs = g_pTangram->m_strLibs.Mid(nPos + 1);
				nPos = g_pTangram->m_strLibs.Find(_T("|"));
				::LoadLibrary(strLib);
			}
		}
	}
	break;
	case 10001000:
	{
		if (g_pTangram->m_nAppID != 9 && g_pTangram->m_bEclipse == false && g_pTangram->m_bOfficeApp == false)
		{
			int nCount = g_pTangram->m_mapMDTFrame.size();
			if (nCount == 0)
			{
				if (m_pTangramApplicationImpl)//&&m_pTangramApplicationImpl->m_bUsingDefaultUI)
				{
					::PostMessage(g_pTangram->m_hTangramWnd, WM_TANGRAMAPPQUIT, 0, 0);
				}
			}
		}
	}
	break;
	case 19921963:
		return ::DefWindowProc(hWnd, msg, wParam, lParam);
		break;
		//case 20002000:
		//	{
		//		g_pTangram->TangramInit();
		//		return 1;
		//	}
		//	break;
	case 20170907:
		if (g_pTangram->m_pTangramPackageProxy->m_hVSGridView)
		{
			::SetParent(g_pTangram->m_pTangramPackageProxy->m_hPropertyWnd, hWnd);
			::SetWindowPos(g_pTangram->m_pTangramPackageProxy->m_hPropertyWnd, HWND_TOP, -1000, -1000, 0, 0, SWP_NOACTIVATE);
			::PostMessage(hWnd, WM_TANGRAMMSG, 1, 20170907);
		}
		return ::DefWindowProc(hWnd, msg, wParam, lParam);
		break;
	default:
		break;
	}
	return 1;
	break;
	case WM_TANGRAMINIT:
		ATLTRACE(_T("Tangram Message Window WM_TANGRAMINIT :%p\n"), g_pTangram->m_hTangramWnd);
		if (lParam == 20002000)
		{
			g_pTangram->TangramInit();
		}
		break;
	case WM_TANGRAMAPPQUIT:
	{
		if (g_pTangram->m_bEclipse == false && g_pTangram->m_bOfficeApp == false)
		{
			if (g_pTangram->m_pMDIMainWnd == NULL && g_pTangram->m_mapMDTFrame.size() == 0)
			{
				::PostAppMessage(::GetCurrentThreadId(), WM_QUIT, 0, 0);
			}
		}
	}
	break;
	case WM_ECLIPSEWORKBENCHCREATED:
	{
		HWND hEclipseWorkBench = (HWND)lParam;
		if (wParam || ::IsMenu(::GetMenu(hEclipseWorkBench)))
		{
			auto it = g_pTangram->m_mapWorkBenchWnd.find(hEclipseWorkBench);
			if (it == g_pTangram->m_mapWorkBenchWnd.end())
			{
				CEclipseWnd* pEclipseWnd = new CComObject<CEclipseWnd>;
				if (g_pTangram->m_hEclipseHideWnd == nullptr)
				{
					for (auto it : g_pTangram->m_vecEclipseHideTopWnd)
					{
						::GetWindowText(it, g_pTangram->m_szBuffer, MAX_PATH);
						CString strText = CString(g_pTangram->m_szBuffer);
						if (strText.CompareNoCase(_T("PartRenderingEngine's limbo")) == 0)
						{
							g_pTangram->m_hEclipseHideWnd = it;
							break;
						}
					}
				}

				HWND hParent = GetWindow(hEclipseWorkBench, GW_CHILD);
				HWND hClient = GetWindow(hParent, GW_CHILD);
				pEclipseWnd->m_hClient = hClient;
				if (hClient)
					::SetWindowLongPtr(pEclipseWnd->m_hClient, GWLP_ID, AFX_IDW_PANE_FIRST);

				g_pTangram->m_mapWorkBenchWnd[hEclipseWorkBench] = pEclipseWnd;
				pEclipseWnd->SubclassWindow(hEclipseWorkBench);
				::PostMessage(hEclipseWorkBench, WM_TANGRAMMSG, 19820911, 0);
				pEclipseWnd->CreatePage(true);
			}
		}
	}

	break;
	}

	return ::DefWindowProc(hWnd, msg, wParam, lParam);
}

LRESULT CALLBACK CTangramApp::TangramExtendedWndProc(_In_ HWND hWnd, UINT msg, _In_ WPARAM wParam, _In_ LPARAM lParam)
{
	switch (msg)
	{
	case WM_WINDOWPOSCHANGED:
	{
		WINDOWPOS* lpwndpos = (WINDOWPOS*)lParam;
		LRESULT lRes = ::DefWindowProc(hWnd, msg, wParam, lParam);
		HWND m_hChildWnd = (HWND)::GetWindowLongPtr(hWnd, GWLP_USERDATA);
		if (::IsWindow(m_hChildWnd)) {
			::SetWindowPos(m_hChildWnd, HWND_BOTTOM, 0, 0, lpwndpos->cx, lpwndpos->cy, /*SWP_NOREDRAW |*/ SWP_NOACTIVATE);
		}
		return lRes;
	}
	break;
	}

	return ::DefWindowProc(hWnd, msg, wParam, lParam);
}

extern HWND    topWindow;

LRESULT CTangramApp::CBTProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	if (g_pTangram == nullptr)
		return 0;
	LRESULT hr = CallNextHookEx(g_pTangram->m_hCBTHook, nCode, wParam, lParam);
	//TangramCBT(nCode, wParam, lParam);
	HWND hWnd = (HWND)wParam;
	switch (nCode)
	{
	case HCBT_CREATEWND:
	{
		CBT_CREATEWND* pCreateWnd = (CBT_CREATEWND*)lParam;
		LPCTSTR lpszName = pCreateWnd->lpcs->lpszName;
		HWND hPWnd = pCreateWnd->lpcs->hwndParent;
		DWORD dwID = (DWORD)pCreateWnd->lpcs->hMenu;
		if (::GetWindowLongPtr(hPWnd, GWL_EXSTYLE) & WS_EX_MDICHILD && ::SendMessage(hPWnd, WM_TANGRAMMSG, 0, 19631222) == 0)
		{
			LRESULT lRes = ::SendMessage(hPWnd, WM_TANGRAMMSG, (WPARAM)pCreateWnd->lpcs->lpCreateParams, TANGRAM_CONST_PANE_FIRST);
			if (g_pTangram->m_nAppType == 0)
				g_pTangram->m_nAppType = lRes;
			if (lRes == 1992)
			{
				CTangramMDIChildWnd* pMDIChildWnd = new CTangramMDIChildWnd();
				pMDIChildWnd->m_hChild = hWnd;
				pMDIChildWnd->SubclassWindow(hPWnd);
				g_pTangram->m_pActiveMDIChildWnd = pMDIChildWnd;
				pMDIChildWnd->m_bNoDocView = (pCreateWnd->lpcs->lpCreateParams == 0);
				::PostMessage(hPWnd, WM_TANGRAMMSG, 0, 19922017);
			}
		}
		//if (g_pTangram->m_bCreatingForm)
		//{
		//	g_pTangram->m_bCreatingForm = false;
		//	::PostMessage(g_pTangram->m_hTangramWnd, WM_WINFORMCREATED, (WPARAM)hWnd, (LPARAM)hPWnd);
		//	break;
		//}
		if (dwID == AFX_IDW_PANE_FIRST)
		{
			TRACE(_T("\n"));
			LRESULT lRes = ::SendMessage(hPWnd, WM_TANGRAMMSG, (WPARAM)pCreateWnd->lpcs->lpCreateParams, TANGRAM_CONST_PANE_FIRST);
			if (g_pTangram->m_nAppType == 0)
				g_pTangram->m_nAppType = lRes;
			switch (lRes)
			{
			case 1992://for MDI Child
			case 1963://for MDT Child
			case 1965://for SDI Child
			{
				CTangramMDIChildWnd* pMDIChildWnd = new CTangramMDIChildWnd();
				pMDIChildWnd->m_hChild = hWnd;
				pMDIChildWnd->SubclassWindow(hPWnd);
				g_pTangram->m_pActiveMDIChildWnd = pMDIChildWnd;
				pMDIChildWnd->m_bNoDocView = (pCreateWnd->lpcs->lpCreateParams == 0);
				if (lRes == 1963)
					g_pTangram->m_mapTangramMDIChildWnd[hPWnd] = pMDIChildWnd;
				::PostMessage(hPWnd, WM_TANGRAMMSG, 0, 19922017);
			}
			break;
			default:
			{
				if (g_pTangram->m_pMDIMainWnd)
				{
					CString strClsName = CString(pCreateWnd->lpcs->lpszClass);
					if (strClsName.CompareNoCase(_T("Tangram Window Class")) && strClsName.CompareNoCase(_T("Tangram Splitter Class")))
						::SendMessage(g_pTangram->m_pMDIMainWnd->m_hWnd, WM_CONTROLBARCREATED, (WPARAM)hPWnd, (LPARAM)hWnd);
				}
				else
				{
					if (g_pTangram->m_pActiveMDIChildWnd && ::IsWindow(g_pTangram->m_pActiveMDIChildWnd->m_hWnd))
					{
						CString strClsName = CString(pCreateWnd->lpcs->lpszClass);
						if (strClsName.CompareNoCase(_T("Tangram Window Class")) && strClsName.CompareNoCase(_T("Tangram Splitter Class")))
							::PostMessage(g_pTangram->m_pActiveMDIChildWnd->m_hWnd, WM_CONTROLBARCREATED, (WPARAM)hPWnd, (LPARAM)hWnd);
					}
				}
			}
			break;
			}
		}
		::GetClassName(hWnd, g_pTangram->m_szBuffer, MAX_PATH);
		CString strClassName = CString(g_pTangram->m_szBuffer);
		
		////if (strClassName == _T("#32770"))
		//{
		//	ATLTRACE(L"==========%s\n", strClassName);
		//}
		//CAtlModuleT<CTangramApp>::WordCmpI(g_pTangram->m_szBuffer, _T("RegServerPerUser")) == 0
		if (strClassName.Find(_T("WindowsForms10."), 0) == 0) {
			::PostMessage(hWnd, WM_DOTNETCONTROLCREATED, (WPARAM)hWnd, (LPARAM)hPWnd);
		}

		if (strClassName == _T("MDIClient"))
		{
			if (::IsWindow(g_pTangram->m_hHostWnd) == false)
			{
				auto it = g_pTangram->m_mapValInfo.find(_T("designertoolcaption"));
				if (it != g_pTangram->m_mapValInfo.end())
					g_pTangram->m_strDesignerToolBarCaption = OLE2T(it->second.bstrVal);
				g_pTangram->m_hHostWnd = ::CreateWindowEx(WS_EX_WINDOWEDGE | WS_EX_TOOLWINDOW, _T("Tangram Window Class"), g_pTangram->m_strDesignerToolBarCaption, WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN | WS_CLIPSIBLINGS, 0, 0, 400, 400, NULL, 0, theApp.m_hInstance, NULL);
				g_pTangram->m_hChildHostWnd = ::CreateWindowEx(NULL, _T("Tangram Window Class"), _T(""), WS_VISIBLE | WS_CHILD, 0, 0, 0, 0, g_pTangram->m_hHostWnd, 0, theApp.m_hInstance, NULL);
			}
			if (::SendMessage(hPWnd, WM_QUERYAPPPROXY, (WPARAM)pCreateWnd->lpcs->lpCreateParams, TANGRAM_CONST_PANE_FIRST) == 1992)
			{
				if (g_pTangram->m_pMDIMainWnd == nullptr)
				{
					g_pTangram->m_pMDIMainWnd = new CTangramMDIMainWnd();
					g_pTangram->m_pMDIMainWnd->m_hMDIClient = hWnd;
					g_pTangram->m_pMDIMainWnd->SubclassWindow(hPWnd);
				}
			}
			::PostMessage(g_pTangram->m_hTangramWnd, WM_MDICLIENTCREATED, (WPARAM)hWnd, (LPARAM)hPWnd);
		}
		else if (strClassName.Find(_T("Afx:ControlBar:")) == 0)
		{
			HWND h = ::GetAncestor(hPWnd, GA_ROOT);
			if (::IsWindow(h))
			{
				::PostMessage(g_pTangram->m_hTangramWnd, WM_CONTROLBARCREATED, (WPARAM)hWnd, (LPARAM)h);
			}
		}
		else if (strClassName.Find(_T("Afx:MiniFrame:")) == 0)
		{
			::PostMessage(hWnd, WM_QUERYAPPPROXY, (WPARAM)hWnd, (LPARAM)19650601);
		}
		else if (strClassName.Find(_T("Afx:RibbonBar:")) == 0)
		{
			CTangramAFXHelperWnd* pRibbonBar = new CTangramAFXHelperWnd();
			pRibbonBar->SubclassWindow(hWnd);
		}
		else if (strClassName == _T("Chrome_RenderWidgetHostHWND"))
		{
			if ((::GetWindowLong(hPWnd, GWL_STYLE) & WS_POPUP) == 0)
			{
				auto it = g_pTangram->m_mapBrowserWnd.find(hPWnd);
				if (it == g_pTangram->m_mapBrowserWnd.end()) {
					ChromePlus::CBrowserWnd* pChromeBrowserWnd = new CComObject<ChromePlus::CBrowserWnd>();
					pChromeBrowserWnd->SubclassWindow(hPWnd);
					g_pTangram->m_mapBrowserWnd[hPWnd] = pChromeBrowserWnd;
					pChromeBrowserWnd->m_pBrowser = g_pTangram->m_pActiveBrowser;
					if (pChromeBrowserWnd->m_pBrowser)
						pChromeBrowserWnd->m_pBrowser->m_pProxy = pChromeBrowserWnd;
				}
				::PostMessage(hPWnd, WM_TANGRAMMSG, 0, (LPARAM)hWnd);
			}
		}
		else if (strClassName.Find(_T("SysTreeView32")) == 0 || strClassName.Find(_T("SysTabControl32")) == 0 || strClassName.Find(_T("SysListView32")) == 0)
		{
			g_pTangram->m_mapTangramCommonCtrl[hWnd] = nullptr;
			::PostMessage(hWnd, WM_TANGRAMMSG, 0, 19820911);
		}
		else if (strClassName.Find(_T("Afx:")) == 0 && (pCreateWnd->lpcs->style & WS_POPUP))
		{
			auto it = g_pTangram->m_mapMDTFrame.find(hPWnd);
			if (it != g_pTangram->m_mapMDTFrame.end())
			{
				ATLTRACE(_T("%x\n"), hWnd);
				::SendMessage(hPWnd, WM_CONTROLBARCREATED, (WPARAM)hWnd, 0);
			}
		}
		if (strClassName == _T("SWT_Window0"))
		{
			if (::IsMenu(::GetMenu(hPWnd)))
				::SendMessage(g_pTangram->m_hTangramWnd, WM_ECLIPSEWORKBENCHCREATED, 1, (LPARAM)hPWnd);
			else if (hPWnd == nullptr)
			{
				if (g_pTangram->m_hEclipseHideWnd == nullptr)
					g_pTangram->m_vecEclipseHideTopWnd.push_back(hWnd);
				::PostMessage(g_pTangram->m_hTangramWnd, WM_ECLIPSEWORKBENCHCREATED, 0, (LPARAM)hWnd);
			}
		}
		else if (HIWORD(pCreateWnd->lpcs->lpszClass))
		{
			g_pTangram->WindowCreated(strClassName, lpszName, hPWnd, hWnd);
			if (g_pTangram->m_pCLRProxy)
			{
				g_pTangram->m_pCLRProxy->WindowCreated(strClassName, lpszName, hPWnd, hWnd);
			}
		}
		if ((pCreateWnd->lpcs->style & WS_CHILD) == 0)
		{
			LRESULT lRes = ::SendMessage(hWnd, WM_QUERYAPPPROXY, 0, 0);
			if (lRes > 0)
			{
				g_pTangram->m_pActiveAppProxy = (CTangramAppProxy*)lRes;
			}
		}
	}
	break;
	case HCBT_DESTROYWND:
	{
		if (g_pTangram && g_pTangram->m_bOfficeApp)
			g_pTangram->WindowDestroy(hWnd);
		else if (/*g_pTangram->m_bChromeShutdown==false&&*/g_pTangram->m_pCLRProxy)
			g_pTangram->m_pCLRProxy->WindowDestroy(hWnd);

		auto it = g_pTangram->m_mapFramePage.find(hWnd);
		if (it != g_pTangram->m_mapFramePage.end())
			g_pTangram->m_mapFramePage.erase(it);
		auto it2 = g_pTangram->m_mapTangramAFXHelperWnd.find(hWnd);
		if (it2 != g_pTangram->m_mapTangramAFXHelperWnd.end())
		{
			g_pTangram->m_mapTangramAFXHelperWnd.erase(it2);
		}
		auto it3 = g_pTangram->m_mapTangramCommonCtrl.find(hWnd);
		if (it3 != g_pTangram->m_mapTangramCommonCtrl.end())
			g_pTangram->m_mapTangramCommonCtrl.erase(it3);
		if (g_pTangram->m_pTangramPackageProxy)
		{
			auto it = g_pTangram->m_pTangramPackageProxy->m_mapWinFormFrame.find(hWnd);
			if (it != g_pTangram->m_pTangramPackageProxy->m_mapWinFormFrame.end())
				g_pTangram->m_pTangramPackageProxy->m_mapWinFormFrame.erase(it);
		}
		if (hWnd == g_pTangram->m_hMainWnd)
		{
			while (g_pTangram->m_mapBrowserWnd.size())
			{
				auto it = g_pTangram->m_mapBrowserWnd.begin();
				it->second->DestroyWindow();
			}
			::DestroyWindow(g_pTangram->m_hHostWnd);
		}
	}
	break;
	case HCBT_MINMAX:
		switch (lParam)
		{
		case SW_MINIMIZE:
		{
			if (::GetWindowLong(hWnd, GWL_EXSTYLE) & WS_EX_MDICHILD)
				::PostMessage(hWnd, WM_MDICHILDMIN, 0, 0);
		}
		break;
		case SW_RESTORE:
		{
			::GetClassName(hWnd, g_pTangram->m_szBuffer, MAX_PATH);
			CString strClassName = CString(g_pTangram->m_szBuffer);// WS_VISIBLE | WS_POPUP, WS_EX_NOACTIVATE
			if (strClassName.Find(_T("Chrome_WidgetWin_1")) == 0)
			{
				::PostMessage(hWnd, WM_CHROMEDRAW, 1, 1);
			}
		}
		break;
		}
		break;
	case HCBT_SETFOCUS:
		if (g_pTangram->m_bOfficeApp && g_pTangram->m_nAppID != -1)
			((COfficeAddin*)g_pTangram)->SetFocus(hWnd);
		break;
	case HCBT_ACTIVATE:
	{
		//if(g_pTangram->m_bChromeShutdown)
		//{ 
		//	break;
		//}
		g_pTangram->m_hActiveWnd = hWnd;
		if (g_pTangram->m_pCLRProxy)
		{
			g_pTangram->m_bWinFormActived = g_pTangram->m_pCLRProxy->IsWinForm(hWnd);
			if (g_pTangram->m_bWinFormActived)
			{
				g_pTangram->m_pWndFrame = nullptr;
			}
		}
		LRESULT lRes = ::SendMessage(hWnd, WM_QUERYAPPPROXY, 0, 0);
		if (lRes > 0)
		{
			g_pTangram->m_pActiveAppProxy = (CTangramAppProxy*)lRes;
			auto it = g_pTangram->m_mapMDTFrame.find(hWnd);
			if (it != g_pTangram->m_mapMDTFrame.end())
			{
				g_pTangram->m_pActiveAppProxy->OnActiveMainFrame(hWnd);
			}
			else
			{
				auto it = g_pTangram->m_mapWorkBenchWnd.find(hWnd);
				if (it != g_pTangram->m_mapWorkBenchWnd.end())
				{
					CEclipseWnd* pWnd = it->second;
					g_pTangram->m_pActiveAppProxy->OnActiveMainFrame(::GetParent(pWnd->m_hClient));
				}
				else
				{
					auto it = g_pTangram->m_mapBrowserWnd.find(hWnd);
					if (it != g_pTangram->m_mapBrowserWnd.end())
					{
						CBrowserWnd* pWnd = it->second;
						//g_pTangram->m_pActiveAppProxy->OnActiveMainFrame(::GetParent(pWnd->m_hClient));
					}
				}
			}
		}
		else
			g_pTangram->m_pActiveAppProxy = nullptr;
	}
	break;
	}
	return hr;
}

LRESULT CALLBACK CTangramApp::GetMessageProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	LPMSG lpMsg = (LPMSG)lParam;
	DWORD dwID = ::GetCurrentThreadId();
	TangramThreadInfo* pThreadInfo = g_pTangram->GetThreadInfo(dwID);
	if (lpMsg->message == WM_TIMER)
		return CallNextHookEx(pThreadInfo->m_hGetMessageHook, nCode, wParam, lParam);
	if (nCode >= 0)
	{
		switch (wParam)
		{
		case PM_NOREMOVE:
		{
			switch (lpMsg->message)
			{
			case WM_QUIT:
			{
				if (::GetCurrentThreadId() == g_pTangram->m_dwThreadID)
				{
					if (::IsWindow(g_pTangram->m_hHostWnd))
						::DestroyWindow(g_pTangram->m_hHostWnd);
					if (::IsWindow(g_pTangram->m_hTangramWnd))
						::DestroyWindow(g_pTangram->m_hTangramWnd);
				}
				if (g_pTangram->m_pTangramCLRAppProxy)
					g_pTangram->m_pTangramCLRAppProxy->OnTangramClose();
			}
			break;
			default:
				break;
			}
		}
		break;
		case PM_REMOVE:
		{
			switch (lpMsg->message)
			{
			case WM_KEYDOWN:
			{
				CNodeWnd* pWnd = nullptr;
				CWPFView* pView = nullptr;
				if (g_pTangram->m_pActiveNode)
				{
					if (g_pTangram->m_pActiveNode->m_nViewType != Splitter)
					{
						if (g_pTangram->m_pActiveNode->m_nViewType == TangramWPFCtrl)
							pView = (CWPFView*)g_pTangram->m_pActiveNode->m_pHostWnd;
						else
							pWnd = (CNodeWnd*)g_pTangram->m_pActiveNode->m_pHostWnd;
						if (pWnd && ::IsChild(pWnd->m_hWnd, lpMsg->hwnd) == false)
						{
							g_pTangram->m_pActiveNode = nullptr;
							if (lpMsg->wParam != VK_TAB)
								break;
							else if (g_pTangram->m_bWinFormActived == false)
							{
								if (pWnd->m_bBKWnd)
								{
									if (pWnd->PreTranslateMessage(lpMsg))
									{
										lpMsg->hwnd = NULL;
										lpMsg->lParam = 0;
										lpMsg->wParam = 0;
										lpMsg->message = 0;
										break;
									}
								}
								else if (pView)
								{
									if (pView->PreTranslateMessage(lpMsg))
									{
										lpMsg->hwnd = NULL;
										lpMsg->lParam = 0;
										lpMsg->wParam = 0;
										lpMsg->message = 0;
										break;
									}
								}
								else
									g_pTangram->m_pWndFrame = nullptr;
							}
						}
					}
					else
						break;
				}

				switch (lpMsg->wParam)
				{
				case VK_TAB:
					if (g_pTangram->m_bWinFormActived && g_pTangram->m_bEnableProcessFormTabKey && g_pTangram->m_pCLRProxy->ProcessFormMsg(g_pTangram->m_hActiveWnd, lpMsg, 0))
					{
						break;
					}
					if (g_pTangram->m_pWndFrame && g_pTangram->m_pActiveNode && pWnd && pWnd->PreTranslateMessage(lpMsg))
					{
						lpMsg->hwnd = NULL;
						lpMsg->lParam = 0;
						lpMsg->wParam = 0;
						lpMsg->message = 0;
					}
					else
					{
						if (pView && pView->PreTranslateMessage(lpMsg))
						{
							::DispatchMessage(lpMsg);
							TranslateMessage(lpMsg);
							lpMsg->hwnd = NULL;
							lpMsg->lParam = 0;
							lpMsg->wParam = 0;
							lpMsg->message = 0;
						}
						else
						{
							if (::GetModuleHandle(_T("chrome.dll")))
							{
								TRACE(_T("======== CTangramApp=========:%x,MSG:%x\n"), lpMsg->hwnd, lpMsg->message);
								if (g_pTangram->m_pActiveHtmlWnd)
								{
									HWND hwnd = lpMsg->hwnd;
									HWND hWnd = ::GetParent(::GetParent(g_pTangram->m_pActiveHtmlWnd->m_hWnd));
									if (hWnd)
									{
										::DispatchMessage(lpMsg);
										TranslateMessage(lpMsg);
										lpMsg->hwnd = NULL;
										lpMsg->lParam = 0;
										lpMsg->wParam = 0;
										lpMsg->message = 0;
										return CallNextHookEx(pThreadInfo->m_hGetMessageHook, nCode, wParam, lParam);
									}
								}
							}
							//g_pTangram->ProcessMsg(lpMsg);
						}
						if (((__int64)g_pTangram->m_pActiveAppProxy) > 1)
							g_pTangram->m_pActiveAppProxy->TangramPreTranslateMessage(lpMsg);
					}
					break;
				case VK_PRIOR:
				case VK_NEXT:
				case VK_HOME:
				case VK_END:
				case VK_LEFT:
				case VK_UP:
				case VK_RIGHT:
				case VK_DOWN:
				case VK_BACK:
					if (lpMsg->wParam == VK_UP)
					{
						ATLTRACE(_T("\n"));
					}
					if (g_pTangram->m_pWndFrame && g_pTangram->m_pActiveNode && pWnd && pWnd->PreTranslateMessage(lpMsg))
					{
						lpMsg->hwnd = NULL;
						lpMsg->lParam = 0;
						lpMsg->wParam = 0;
						lpMsg->message = 0;
					}
					if (pView)
					{
						TranslateMessage(lpMsg);
						::DispatchMessage(lpMsg);
						lpMsg->hwnd = NULL;
						lpMsg->lParam = 0;
						lpMsg->wParam = 0;
						lpMsg->message = 0;
					}
					if (::GetModuleHandle(_T("chrome.dll")))
					{
						if (g_pTangram->m_pActiveHtmlWnd)
						{
							HWND hWnd = ::GetParent(::GetParent(g_pTangram->m_pActiveHtmlWnd->m_hWnd));
							if (hWnd)
							{
								::DispatchMessage(lpMsg);
								TranslateMessage(lpMsg);
								lpMsg->hwnd = NULL;
								lpMsg->lParam = 0;
								lpMsg->wParam = 0;
								lpMsg->message = 0;
								return CallNextHookEx(pThreadInfo->m_hGetMessageHook, nCode, wParam, lParam);
							}
						}
					}
					break;
				case VK_DELETE:
					if (g_pTangram->m_pActiveNode)
					{
						if (g_pTangram->m_pActiveNode->m_nViewType == ActiveX)
						{
							pWnd->PreTranslateMessage(lpMsg);
							lpMsg->hwnd = NULL;
							lpMsg->wParam = 0;
							break;
						}
						DispatchMessage(lpMsg);
						lpMsg->hwnd = NULL;
						lpMsg->wParam = 0;
					}

					break;
				case VK_RETURN:
				{
					if (g_pTangram->m_pWndFrame && g_pTangram->m_pActiveNode)
					{
						if (pWnd && ::IsChild(pWnd->m_hWnd, lpMsg->hwnd) == false)
						{
							g_pTangram->m_pActiveNode = nullptr;
							g_pTangram->m_pWndFrame = nullptr;
						}
						else if (pWnd)
						{
							TranslateMessage(lpMsg);
							lpMsg->hwnd = NULL;
							lpMsg->lParam = 0;
							lpMsg->wParam = 0;
							lpMsg->message = 0;
							break;
						}
					}
					if (g_pTangram->m_bOfficeApp)
						return CallNextHookEx(pThreadInfo->m_hGetMessageHook, nCode, wParam, lParam);
					TranslateMessage(lpMsg);
					if (g_pTangram->m_strExeName != _T("devenv"))
					{
						DispatchMessage(lpMsg);
						lpMsg->hwnd = NULL;
						lpMsg->lParam = 0;
						lpMsg->wParam = 0;
						lpMsg->message = 0;
						return CallNextHookEx(pThreadInfo->m_hGetMessageHook, nCode, wParam, lParam);
					}
				}
				break;
				case 0x41://Ctrl+A
				case 0x43://Ctrl+C
				case 0x56://Ctrl+V
				case 0x58://Ctrl+X
				case 0x5a://Ctrl+Z
					if (::GetKeyState(VK_CONTROL) < 0)  // control pressed
					{
						if (g_pTangram->m_pActiveNode && pWnd && !::IsWindow(pWnd->m_hWnd))
						{
							g_pTangram->m_pActiveNode = nullptr;
						}
						if (g_pTangram->m_pActiveNode)
						{
							HWND hWnd = nullptr;
							if (pWnd)
								hWnd = pWnd->m_hWnd;
							else if (pView)
								hWnd = pView->m_hWnd;
							if ((g_pTangram->m_pActiveNode->m_nViewType == ActiveX || g_pTangram->m_pActiveNode->m_strID.CompareNoCase(_T("hostview")) == 0))
							{
								if (pWnd)
									pWnd->PreTranslateMessage(lpMsg);
								lpMsg->hwnd = NULL;
								lpMsg->wParam = 0;
								break;
							}
							if (pView)
							{
								TranslateMessage(lpMsg);
								::DispatchMessage(lpMsg);
								lpMsg->hwnd = NULL;
								lpMsg->lParam = 0;
								lpMsg->wParam = 0;
								lpMsg->message = 0;
								break;
							}
							TranslateMessage(lpMsg);
							lpMsg->wParam = 0;
						}
					}
					break;
				}
			}
			break;
			case WM_MOUSEMOVE:
				//if (g_pTangram->m_bEclipse)
				{
					if (lpMsg->hwnd == topWindow || ::IsChild(topWindow, lpMsg->hwnd))
					{
						static CPoint PrePoint = CPoint(0, 0);
						if (MK_LBUTTON == lpMsg->wParam)
						{
							CPoint point = CPoint(GET_X_LPARAM(lpMsg->lParam), GET_Y_LPARAM(lpMsg->lParam));
							if (point != PrePoint)
							{
								CPoint ptTemp = point - PrePoint;
								CRect rcWindow;
								::GetWindowRect(topWindow, &rcWindow);
								rcWindow.OffsetRect(ptTemp.x, ptTemp.y);
								::MoveWindow(topWindow, rcWindow.left, rcWindow.top, rcWindow.Width(), rcWindow.Height(), true);
							}
							PrePoint = point;
						}
						break;
					}
					if ((long)(g_pTangram->m_pActiveAppProxy) > 1)
					{
						g_pTangram->m_pActiveAppProxy->MouseMoveProxy(lpMsg->hwnd);
					}
					else if (g_pTangram->m_pTangramAppProxy)
					{
						g_pTangram->m_pTangramAppProxy->MouseMoveProxy(lpMsg->hwnd);
					}
					if ((long)(g_pTangram->m_pActiveAppProxy) > 1)
						g_pTangram->m_pActiveAppProxy->TangramPreTranslateMessage(lpMsg);
					else if (g_pTangram->m_pTangramAppProxy)
						g_pTangram->m_pTangramAppProxy->TangramPreTranslateMessage(lpMsg);
				}
				break;
			case WM_NCLBUTTONDOWN:
			case WM_NCRBUTTONDOWN:
			case WM_LBUTTONDOWN:
			case WM_RBUTTONDOWN:
			case WM_LBUTTONUP:
				//case WM_POINTERDOWN:
				//case WM_POINTERUP:
			case WM_SETWNDFOCUSE:
			{
				g_pTangram->ProcessMsg(lpMsg);
				//for m_strStartupCLRObj support
				if (g_pTangram->m_pMainFormDisp && lpMsg->message == WM_LBUTTONUP)
				{
					lpMsg->hwnd = NULL;
					lpMsg->lParam = 0;
					lpMsg->wParam = 0;
					lpMsg->message = 0;
				}
				//end for m_strStartupCLRObj
				if ((long)(g_pTangram->m_pActiveAppProxy) > 1)
					g_pTangram->m_pActiveAppProxy->TangramPreTranslateMessage(lpMsg);
				else if (g_pTangram->m_pTangramAppProxy)
					g_pTangram->m_pTangramAppProxy->TangramPreTranslateMessage(lpMsg);
				return CallNextHookEx(pThreadInfo->m_hGetMessageHook, nCode, wParam, lParam);
			}
			break;
			case WM_MDICHILDMIN:
				::BringWindowToTop(lpMsg->hwnd);
				break;
			case WM_DOWNLOAD_MSG:
			{
				Utilities::CDownLoadObj* pObj = (Utilities::CDownLoadObj*)lpMsg->wParam;
				if (pObj)
					delete pObj;
			}
			break;
			case WM_NAVIXTML:
			{
				RECT rc;
				HWND hWnd = ::GetParent(lpMsg->hwnd);
				::GetClientRect(hWnd, &rc);
				::SetWindowPos(lpMsg->hwnd, HWND_BOTTOM, rc.left, rc.top, rc.right + 1, rc.bottom, SWP_NOZORDER | SWP_FRAMECHANGED);
				::SetWindowPos(lpMsg->hwnd, HWND_BOTTOM, rc.left, rc.top, rc.right, rc.bottom, SWP_NOZORDER | SWP_FRAMECHANGED);
			}
			break;
			case WM_TANGRAM_WEBNODEDOCCOMPLETE:
			{
				auto it = g_pTangram->m_mapWindowPage.find((HWND)lpMsg->wParam);
				if (it != g_pTangram->m_mapWindowPage.end())
					it->second->OnNodeDocComplete(lpMsg->wParam);
			}
			break;
			case WM_CHROMEHELPWND:
			{
				CString strID = _T("chromeplus.tangram");
				{
					auto it = g_pTangram->m_mapRemoteTangramCore.find(strID);
					if (it != g_pTangram->m_mapRemoteTangramCore.end())
					{
						ULONG dw = it->second->Release();
						while (dw)
							dw = it->second->Release();
						g_pTangram->m_mapRemoteTangramCore.erase(strID);
					}
				}
			}
			break;

			case WM_CHROMEDEVTOOLMSG:
			{
				switch (lpMsg->wParam)
				{
				case 1:
				{
					g_pTangram->m_bCreatingDevTool = true;
					auto it = g_pTangram->m_mapBrowserWnd.find(::GetActiveWindow());
					if (it != g_pTangram->m_mapBrowserWnd.end())
					{
						ATLTRACE(_T("\n"));
					}
				}
				break;
				}
			}
			break;
			case WM_TANGRAMMSG:
			{
				switch (lpMsg->lParam)
				{
				case 20190511:
				{
					if (lpMsg->wParam)
					{
						if(g_pTangram->m_bEclipse==false)
							::DestroyWindow(g_pTangram->m_hHostWnd);
					}
					else
					{ 
					}
				}
				break;
				case 20190418:
				{
					if (g_pTangram->m_pTangramMainDllLoader)
						g_pTangram->m_pTangramMainDllLoader->LaunchEx();
				}
				break;
				case 20190423:
				{
					g_pTangram->m_bInit = true;
				}
				break;
				case 20190416:
				{
					HMODULE hModule = ::LoadLibrary(L"tangramchromecore.dll");
					if (hModule) {
						typedef int(__stdcall * _InitApp)(bool bSupportCrashReporting);
						_InitApp _pInitAppFunction;
						_pInitAppFunction = (_InitApp)GetProcAddress(hModule, "InitApp");
						if (_pInitAppFunction != NULL) {
							_pInitAppFunction(false);
						}
					}
				}
				break;
				case 20190417:
				{
					if (g_pTangram->m_pCreatorImpl && ::IsWindow(g_pTangram->m_hChildHostWnd))
					{
						CString strURL = g_pTangram->m_strAppPath + g_pTangram->m_strExeName + _T(".htm");
						if (::PathFileExists(strURL) == false)
						{
							strURL = _T("http://www.tangram.dev");
						}
						CString str = _T("<host popup='true'><url></url></host>");
						CTangramXmlParse m_Parse;
						if (m_Parse.LoadXml(str))
						{
							CTangramXmlParse* pParse = nullptr;
							m_Parse[_T("url")].put_text(strURL);
						}
						g_pTangram->m_hHostBrowserWnd = g_pTangram->m_pCreatorImpl->CreateBrowser((HWND)g_pTangram->m_hChildHostWnd, m_Parse.xml());
					}
				}
				break;
				case 20190408:
				{
					g_pTangram->Init();
				}
				break;
				case 20181008:
				{
					ChromePlus::IPCMsg* pMsg = (ChromePlus::IPCMsg*)lpMsg->wParam;
					delete pMsg;
				}
				break;
				case 20190311:
				{
					if (m_pTangramApplicationImpl || lpMsg->wParam == 0)
						break;
					m_pTangramApplicationImpl = (TangramCommon::CTangramApplicationImpl*)lpMsg->wParam;
					if (g_pTangram->m_pTangramAppProxy == nullptr)
					{
						g_pTangram->m_pTangramAppProxy = m_pTangramApplicationImpl->m_pTangramAppProxy;
					}
					if (g_pTangram->m_pTangramAppProxy && g_pTangram->launchMode != -1)
					{
						g_pTangram->m_pTangramAppProxy->m_pvoid = nullptr;
						if (g_pTangram->m_hCBTHook == NULL)
							g_pTangram->m_hCBTHook = SetWindowsHookEx(WH_CBT, CTangramApp::CBTProc, NULL, ::GetCurrentThreadId());
						g_pTangram->m_bEnableProcessFormTabKey = true;
						g_pTangram->EclipseInit();
						if (g_pTangram->m_bCLRStart && g_pTangram->m_bEclipse)
						{
							while (g_pTangram->m_mapBrowserWnd.size())
							{
								auto it = g_pTangram->m_mapBrowserWnd.begin();
								it->second->DestroyWindow();
							}
							::DestroyWindow(g_pTangram->m_hHostWnd);
							if (g_pTangram->m_mapBrowserWnd.size() == 0)
							{
								if (g_pTangram->m_pCreatorImpl)
								{
									delete g_pTangram->m_pCreatorImpl;
									g_pTangram->m_pCreatorImpl = nullptr;
								}
								if (m_pTangramApplicationImpl->m_pJVMenv)
								{
									if (m_pTangramApplicationImpl->systemClass != nullptr && m_pTangramApplicationImpl->exitMethod != nullptr)
									{
										try
										{
											OutputDebugString(_T("Exit Eclipse\n"));
											m_pTangramApplicationImpl->m_pJVMenv->CallStaticVoidMethod(m_pTangramApplicationImpl->systemClass, m_pTangramApplicationImpl->exitMethod, 0);
										}
										catch (...)
										{
										}
										if (m_pTangramApplicationImpl->m_pJVMenv->ExceptionOccurred()) {
											m_pTangramApplicationImpl->m_pJVMenv->ExceptionDescribe();
											m_pTangramApplicationImpl->m_pJVMenv->ExceptionClear();
										}
									}
								}
							}
						}
					}
				}
				break;
				case 20190420:
				{
					m_pTangramApplicationImpl = (TangramCommon::CTangramApplicationImpl*)lpMsg->wParam;
					g_pTangram->m_pTangramAppProxy = m_pTangramApplicationImpl->m_pTangramAppProxy;
				}
				break;
				}
			}
			break;
			case WM_TANGRAMAPPQUIT:
			{
				TRACE(_T("======== WM_TANGRAMAPPQUIT=========\n"));
				if (/*::GetModuleHandle(L"chrome_elf.dll")&&*/g_pTangram->m_bEclipse == false && g_pTangram->m_bOfficeApp == false)
				{
					if (g_pTangram->m_pMDIMainWnd == NULL && g_pTangram->m_mapMDTFrame.size() == 0)
					{
						if (g_pTangram->m_mapBrowserWnd.size())
						{
							g_pTangram->m_bChromeNeedClosed = true;
							auto it = g_pTangram->m_mapBrowserWnd.begin();
							it->second->SendMessageW(WM_CLOSE, 0, 0);
						}
						//::PostAppMessage(::GetCurrentThreadId(), WM_QUIT, 0, 0);
						//if (/*m_bHostApp && */::GetModuleHandle(_T("comdlg32.dll")))
						//{
						//	BOOL bUnload = ::FreeLibrary(::GetModuleHandle(_T("TangramCore.dll")));
						//	//while (bUnload)
						//	//	bUnload = ::FreeLibrary(::GetModuleHandle(_T("TangramCore.dll")));
						//}
					}
				}
			}
			break;
			case WM_CHROMEOMNIBOXPOPUPVISIBLE:
			{
				g_pTangram->m_bOMNIBOXPOPUPVISIBLE = lpMsg->lParam ? true : false;
				auto it = g_pTangram->m_mapBrowserWnd.find((HWND)lpMsg->wParam);
				if (it != g_pTangram->m_mapBrowserWnd.end())
				{
					CBrowserWnd* pWnd = it->second;
					if (pWnd->m_pVisibleWebWnd)
					{
						if (pWnd->m_pVisibleWebWnd->m_hExtendWnd)
						{
							IWndNode* pNode = nullptr;
							IWndFrame* pFrame = nullptr;
							g_pTangram->GetWndFrame((__int64)pWnd->m_pVisibleWebWnd->m_hChildWnd, &pFrame);
							if (pFrame)
							{
								pFrame->Extend(CComBSTR(lpMsg->lParam ? _T("__default__key__for__chrome__") : pWnd->m_pVisibleWebWnd->m_strCurKey), CComBSTR(lpMsg->lParam ? g_pTangram->m_strDefaultXml : _T("")), &pNode);
								pWnd->ChromeDraw();
								pWnd->m_pBrowser->LayoutBrowser();
								::PostMessage(pWnd->m_hWnd, WM_CHROMEDRAW, 2, 1);
							}
						}
					}
				}
			}
			break;
			case WM_CHROMEBOOKMARKBARSTATECHANGED:
			{
				TRACE(_T("======== WM_CHROMEBOOKMARKBARSTATECHANGED=========\n"));
				CBrowserWnd* pWnd = (CBrowserWnd*)g_pTangram->m_pActiveBrowser->m_pProxy;
				if (pWnd->m_pVisibleWebWnd && pWnd->m_pVisibleWebWnd->m_hExtendWnd && pWnd->m_pVisibleWebWnd->m_pFrame)
				{
					pWnd->ChromeDraw();
					g_pTangram->m_pActiveBrowser->LayoutBrowser();
					pWnd->ChromeDraw();
					::PostMessage(pWnd->m_hWnd, WM_CHROMEDRAW, 2, 1);
					::PostMessage(pWnd->m_hWnd, WM_CHROMEDRAW, 0, 1);
				}
			}
			break;
			case WM_DOTNETCONTROLCREATED:
			{
				g_pTangram->DotNetControlCreated(lpMsg);
			}
			break;
			}

			if (lpMsg->message != WM_TIMER)
			{
				CTangramAppProxy* pProxy = g_pTangram->m_pActiveAppProxy;
				if (pProxy == nullptr)
					pProxy = g_pTangram->m_pTangramAppProxy;
				if (pProxy)
				{
					switch (lpMsg->message)
					{
					case WM_CHAR:
					case WM_KEYDOWN:
					{
						switch (lpMsg->wParam)
						{
						case VK_TAB:
						case VK_PRIOR:
						case VK_NEXT:
						case VK_HOME:
						case VK_END:
						case VK_LEFT:
						case VK_UP:
						case VK_RIGHT:
						case VK_DOWN:
						case VK_DELETE:
						case VK_BACK:
						case VK_RETURN:
						case 0x41://Ctrl+A
						case 0x43://Ctrl+C
						case 0x56://Ctrl+V
						case 0x58://Ctrl+X
						case 0x5a://Ctrl+Z
							break;
						}
					}
					case WM_LBUTTONDOWN:
					case WM_RBUTTONUP:
					case WM_LBUTTONUP:
					case WM_LBUTTONDBLCLK:
					{
						if (g_pTangram->m_pActiveNode && g_pTangram->m_pActiveNode->m_nViewType == TangramListView)
						{
							((CTangramListView*)g_pTangram->m_pActiveNode->m_pHostWnd)->PreTranslateMessage(lpMsg);
						}
					}
					break;
					default:
					{
						if (g_pTangram->m_bOfficeApp == false)
						{
							if (g_pTangram->m_pActiveNode && g_pTangram->m_pActiveNode->m_nViewType == TangramListView)
								((CTangramListView*)g_pTangram->m_pActiveNode->m_pHostWnd)->PreTranslateMessage(lpMsg);
							else if ((long)(g_pTangram->m_pActiveAppProxy) > 1)
								g_pTangram->m_pActiveAppProxy->TangramPreTranslateMessage(lpMsg);
						}
					}
					break;
					}
				}
			}
			//if (lpMsg->hwnd == 0)
			//{
			//	if (g_pTangram->m_pTangramMessageLoopImplProxy)
			//	{
			//		g_pTangram->m_pTangramMessageLoopImplProxy->ProcessMsg(lpMsg);
			//		return 0;// CallNextHookEx(pThreadInfo->m_hGetMessageHook, nCode, wParam, lParam);
			//	}
			//}
		}
		break;
		default:
			break;
		}
	}

	return CallNextHookEx(pThreadInfo->m_hGetMessageHook, nCode, wParam, lParam);
}

void CTangramApp::SetHook(DWORD ThreadID)
{
	TangramThreadInfo* pThreadInfo = g_pTangram->GetThreadInfo(ThreadID);
	if (pThreadInfo && pThreadInfo->m_hGetMessageHook == NULL)
	{
		pThreadInfo->m_hGetMessageHook = SetWindowsHookEx(WH_GETMESSAGE, GetMessageProc, NULL, ThreadID);
	}
}

CString CTangramApp::GetFileVer()
{
	DWORD dwHandle, InfoSize;
	CString strVersion;

	struct LANGANDCODEPAGE
	{
		WORD wLanguage;
		WORD wCodePage;
	}*lpTranslate;
	unsigned int cbTranslate = 0;

	TCHAR cPath[MAX_PATH] = { 0 };
	::GetModuleFileName(NULL, cPath, MAX_PATH);
	InfoSize = GetFileVersionInfoSize(cPath, &dwHandle);


	char* InfoBuf = new char[InfoSize];

	GetFileVersionInfo(cPath, 0, InfoSize, InfoBuf);
	VerQueryValue(InfoBuf, TEXT("\\VarFileInfo\\Translation"), (LPVOID*)& lpTranslate, &cbTranslate);

	TCHAR SubBlock[300] = { 0 };

	//ProductVersion
	//FileVersion

	wsprintf(SubBlock, TEXT("\\StringFileInfo\\%04x%04x\\ProductVersion"), lpTranslate[0].wLanguage, lpTranslate[0].wCodePage);

	TCHAR* lpBuffer = NULL;
	unsigned int dwBytes = 0;
	VerQueryValue(InfoBuf, SubBlock, (void**)& lpBuffer, &dwBytes);
	if (lpBuffer != NULL)
	{
		strVersion.Format(_T("%s"), (TCHAR*)lpBuffer);
	}

	delete[] InfoBuf;
	return strVersion;
}

HRESULT CTangramApp::UpdateRegistry(BOOL bRegister)
{
	return theApp.UpdateRegistryFromResource(IDR_TANGRAM, bRegister);
}

HRESULT CTangramApp::CreateInstance(void* pv, REFIID riid, LPVOID * ppv)
{
	if (g_pTangram)
	{
		DWORD dwID = ::GetCurrentThreadId();
		if (dwID != g_pTangram->m_dwThreadID)
		{
			IStream* pStream = 0;
			HRESULT hr = ::CoMarshalInterThreadInterfaceInStream(IID_IDispatch, (ITangram*)g_pTangram, &pStream);
			if (hr == S_OK)
			{
				IDispatch* pTarget = nullptr;
				hr = ::CoGetInterfaceAndReleaseStream(pStream, IID_IDispatch, (LPVOID*)& pTarget);
				if (hr == S_OK && pTarget)
					return pTarget->QueryInterface(riid, ppv);
			}
		}
		return g_pTangram->QueryInterface(riid, ppv);
	}
	return S_FALSE;
}

STDAPI DllCanUnloadNow(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	if (g_pTangram)
	{
		bool bCanUnLoad = false;
		if (g_pTangram->m_bOfficeApp)
			bCanUnLoad = g_pTangram->m_bOfficeAddinUnLoad;
		if (::GetModuleHandle(L"chrome_elf.dll"))
			bCanUnLoad = false;
		if (bCanUnLoad && g_pTangram && g_pTangram->m_nTangramObj == 0)
		{
			g_pTangram->ExitInstance();
			delete g_pTangram;
			g_pTangram = nullptr;
			return S_OK;
		}
	}
	//return (theApp.DllCanUnloadNow() == S_OK && theApp.GetLockCount() == 0) ? S_OK : S_FALSE;
	return (AfxDllCanUnloadNow() == S_OK && theApp.GetLockCount() == 0) ? S_OK : S_FALSE;
}

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID * ppv)
{
	return theApp.DllGetClassObject(rclsid, riid, ppv);
}

STDAPI DllRegisterServer(void)
{
	//theApp.m_bRegisterServer = true;
	return theApp.DllRegisterServer();
}

STDAPI DllUnregisterServer(void)
{
	return theApp.DllUnregisterServer();
}

JNIEXPORT void JNICALL Java_Tangram_Host_Tangram_InitTangram(JNIEnv * env, jobject obj, jobject jTangram, jobject jWndPage, jobject jWndFrame, jobject jWndNode)
{
	jclass cls = env->GetObjectClass(obj);

	return;
}

//查找指定进程  
DWORD FindProcess(TCHAR * strProcessName)
{
	DWORD aProcesses[1024], cbNeeded, cbMNeeded;
	HMODULE hMods[1024];
	HANDLE hProcess;
	TCHAR szProcessName[MAX_PATH];

	if (!EnumProcesses(aProcesses, sizeof(aProcesses), &cbNeeded))
		return 0;
	for (int i = 0; i < (int)(cbNeeded / sizeof(DWORD)); i++)
	{
		hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, aProcesses[i]);
		EnumProcessModules(hProcess, hMods, sizeof(hMods), &cbMNeeded);
		GetModuleFileNameEx(hProcess, hMods[0], szProcessName, sizeof(szProcessName));

		CString strPrcFullName(szProcessName);
		CString strPrcName(strProcessName);
		if (_tcsstr(strPrcFullName, strPrcName) || _tcsstr(strPrcFullName, strPrcName.MakeLower()))
		{
			CString strNameFull;
			strNameFull.Format(_T("Process full name：\n%s;"), szProcessName);
			return(aProcesses[i]);
		}
	}

	return 0;
}

// 此函数利用上面的 FindProcess 函数获得你的目标进程的ID  
// 用WIN API OpenPorcess 获得此进程的句柄，再以TerminateProcess强制结束这个进程  
VOID KillProcess(TCHAR * strProcessName)
{
	// When the all operation fail this function terminate the "winlogon" Process for force exit the system.  
	HANDLE hYourTargetProcess = OpenProcess(PROCESS_QUERY_INFORMATION | // Required by Alpha  
		PROCESS_CREATE_THREAD | // For CreateRemoteThread  
		PROCESS_VM_OPERATION | // For VirtualAllocEx/VirtualFreeEx  
		PROCESS_VM_WRITE | // For WriteProcessMemory  
		PROCESS_TERMINATE, //Required to terminate a process using TerminateProcess function  
		FALSE, FindProcess(strProcessName));

	if (hYourTargetProcess == NULL)
	{
		DWORD ulErrCode = GetLastError();
		CString strError;
		strError.Format(L"OpenProcess failed,error code:%ld", ulErrCode);
		AfxMessageBox(strError);
	}

	BOOL result = TerminateProcess(hYourTargetProcess, 0);
	if (!result)
	{
		DWORD ulErrCode = GetLastError();
		CString strError;
		strError.Format(L"TerminateProcess failed,error code:%ld", ulErrCode);
		AfxMessageBox(strError);
	}
	return;
}

