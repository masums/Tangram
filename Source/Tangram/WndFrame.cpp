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
*
********************************************************************************/

// WndFrame.cpp : implementation file of CWndFrame
//

#include "stdafx.h"
#include "TangramApp.h"
#include "TangramCore.h"
#include "SplitterWnd.h"
#include "NodeWnd.h"
#include "WndNode.h"
#include "WndFrame.h"
#include "TangramHtmlTreeWnd.h"
#include "OfficePlus\WordPlus\WordAddin.h"
#include "EclipsePlus\EclipseAddin.h"
#include "DocTemplateDlg.h"

using namespace OfficePlus::WordPlus;

CTangramCommonCtrl::CTangramCommonCtrl()
{

}

CTangramCommonCtrl::~CTangramCommonCtrl()
{

}

LRESULT CTangramCommonCtrl::OnNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	NMHDR* pNMHDR = (NMHDR*)lParam;
	//ASSERT(pNMHDR != NULL);
	//if (pNMHDR->code)
	//{
	//	switch (pNMHDR->code)
	//	{
	//		case NM_CLICK:
	//		{
	//			TRACE(_T("NM_CLICK\n"));
	//		}
	//		break;
	//	case NM_DBLCLK:
	//		{
	//			TRACE(_T("NM_DBLCLK\n"));
	//		}
	//		break;
	//	case TVN_SELCHANGED:
	//		{
	//			TRACE(_T("TVN_SELCHANGED \n"));
	//		}
	//		break;
	//	default:
	//		break;
	//	}
	//}
	TRACE(_T("======== Notify=========hwndFrom:%x,idFrom:%x,code:%x\n"), pNMHDR->hwndFrom, pNMHDR->idFrom, pNMHDR->code);
	return DefWindowProc(uMsg, wParam, lParam);
}

void CTangramCommonCtrl::OnFinalMessage(HWND hWnd)
{
	CWindowImpl::OnFinalMessage(hWnd);
	delete this;
}

CTangramAFXHelperWnd::CTangramAFXHelperWnd(void)
{
	m_hFrame = nullptr;
	m_hParent = nullptr;
}

CTangramAFXHelperWnd::~CTangramAFXHelperWnd(void)
{
}

LRESULT CTangramAFXHelperWnd::OnWindowPosChanging(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	LRESULT l = DefWindowProc(uMsg, wParam, lParam);
	if (m_hParent)
	{
		HWND hTop = ::GetAncestor(m_hWnd, GA_ROOT);
		if (g_pTangram->m_pMDIMainWnd&&hTop == g_pTangram->m_pMDIMainWnd->m_hWnd)
			::SetWindowPos(m_hParent, HWND_TOP, 0, 0, 0, 0, SWP_FRAMECHANGED | SWP_NOZORDER | SWP_NOSIZE | SWP_NOMOVE);
		else
		{
			auto it = g_pTangram->m_mapTangramMDIChildWnd.find(hTop);
			if (it != g_pTangram->m_mapTangramMDIChildWnd.end())
				::SetWindowPos(m_hParent, HWND_TOP, 0, 0, 0, 0, SWP_FRAMECHANGED | SWP_NOZORDER | SWP_NOSIZE | SWP_NOMOVE);
		}
	}
	return l;
}

LRESULT CTangramAFXHelperWnd::OnShowWindow(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	LRESULT l = DefWindowProc(uMsg, wParam, lParam);
	if (wParam&&::IsWindow(m_hFrame))
	{
		CWndFrame* pFrame = (CWndFrame*)::SendMessage(m_hFrame, WM_TANGRAMDATA, 0, 1992);
		if (pFrame)
		{
			CWndNode* pNode = pFrame->m_pWorkNode;
			if (::IsWindowVisible(pNode->m_pHostWnd->m_hWnd) == FALSE)
			{
				HWND hPWnd = ::GetParent(m_hWnd);
				::PostMessage(m_hWnd, WM_QUERYAPPPROXY, (WPARAM)m_hWnd, 19650601);
			}
		}
	}
	return l;
}

LRESULT CTangramAFXHelperWnd::OnTangramMg(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	LRESULT l = DefWindowProc(uMsg, wParam, lParam);
	if (wParam)
	{
		switch (lParam)
		{
		case 1965:
		{
			CWndFrame* pFrame = (CWndFrame*)wParam;
			if (pFrame)
			{
				::ShowWindow(pFrame->m_pWorkNode->m_pHostWnd->m_hWnd, SW_SHOW);
				pFrame->HostPosChanged();
			}
		}
		break;
		case 19650601:
		{
			::PostMessage(::GetWindow(m_hWnd, GW_CHILD), WM_QUERYAPPPROXY, (WPARAM)m_hWnd, 19650601);
		}
		break;
		default:
			break;
		}
	}
	return l;
}

void CTangramAFXHelperWnd::OnFinalMessage(HWND hWnd)
{
	CWindowImpl::OnFinalMessage(hWnd);
	delete this;
}

CTangramMDIMainWnd::CTangramMDIMainWnd(void)
{
	m_pPage = nullptr;
	m_hMDIClient = nullptr;
	m_pDocTemplate = new CComObject<CTangramDocTemplate>;
}

CTangramMDIMainWnd::~CTangramMDIMainWnd(void)
{
}

LRESULT CTangramMDIMainWnd::OnWindowPosChanging(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
	::InvalidateRect(m_hWnd, nullptr, false);
	return lRes;

}

LRESULT CTangramMDIMainWnd::OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
{
	m_pDocTemplate->SaveXmlData();
	LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
	return lRes;
}

void CTangramMDIMainWnd::NavigateKey(CString strKey)
{
	CTangramDocTemplate* pTemplate = nullptr;
	if (strKey == _T(""))
	{
		strKey = _T("default");
		pTemplate = m_pDocTemplate;
	}
	if (pTemplate == nullptr)
	{
		auto it = m_mapTangramDocTemplate.find(strKey);
		if (it != m_mapTangramDocTemplate.end())
		{
			pTemplate = it->second;
		}
	}
	if (pTemplate)
	{
		vector<HWND> m_vec;
		for (auto it : m_pPage->m_mapFrame)
		{
			auto it2 = m_mapDesignableWnd.find(it.first);
			if (::IsWindow(it.first))
			{
				IWndNode* pNode = nullptr;
				auto it3 = pTemplate->m_mapConnectedFrame.find(it.first);
				if (it3 == pTemplate->m_mapConnectedFrame.end())
				{
					it.second->m_pTangramDocTemplate = pTemplate;
					it.second->Extend(CComBSTR(strKey), CComBSTR(""), &pNode);
					pTemplate->m_mapMainPageNode[it.first] = (CWndNode*)pNode;
				}
			}
			else
			{
				m_vec.push_back(it.first);
			}
		}
		int nSize = m_vec.size();
		if (nSize)
		{
			auto it = m_vec.begin();
			auto it2 = m_pPage->m_mapFrame.find(*it);
			if (it2 != m_pPage->m_mapFrame.end())
			{
				m_pPage->m_mapFrame.erase(it2);
				m_vec.erase(it);
			}
			nSize = m_vec.size();
		}
	}
}

void CTangramMDIMainWnd::OnCreateDoc(CString strDocData)
{
	if (g_pTangram->m_pActiveMDIChildWnd)
	{
		CString strXml = _T("");
		CString _strKey = _T("Document_");
		CString _strClientKey = _T("Client_");
		CString strCaption = _T("");
		CTangramXmlParse m_Parse;
		if (strDocData != _T(""))
		{
			if (m_Parse.LoadXml(strDocData))
			{
				strXml = m_Parse.xml();
				_strKey += m_Parse.attr(_T("key"), _T("default"));
				_strClientKey += m_Parse.attr(_T("key"), _T("default"));
				strCaption = m_Parse.attr(_T("caption"), _T(""));
			}
		}
		else
		{
			CString strFile = _T("");
			if (g_pTangram->m_pTangramDocTemplateInfo)
			{
				strFile = g_pTangram->m_strTemplatePath;
				g_pTangram->m_pTangramDocTemplateInfo = nullptr;
			}
			if (strFile == _T(""))
				strFile = g_pTangram->GetDocTemplateXml(_T("Please select New Doc Template:"), g_pTangram->m_strAppDataPath + _T("Doctemplate\\"), _T(".appxml"));
			if (::PathFileExists(strFile) && m_Parse.LoadFile(strFile))
			{
				CString strKey = m_Parse.attr(_T("key"), _T("default"));
				_strKey += strKey;
				_strClientKey += strKey;
				strXml = m_Parse.xml();
				strCaption = m_Parse.attr(_T("caption"), _T(""));
			}
			else
			{
				_strKey += _T("default");
				_strClientKey += _T("default");
				strXml = _T("<default><window><node name=\"Start\" id=\"HostView\"/></window></default>");
			}
		}
		CTangramMDIChildWnd* pWnd = g_pTangram->m_pActiveMDIChildWnd;
		CTangramDocTemplate* pTangramDocTemplate = nullptr;
		auto it2 = m_mapTangramDocTemplate.find(_strKey);
		if (it2 == m_mapTangramDocTemplate.end())
		{
			pTangramDocTemplate = new CComObject<CTangramDocTemplate>;
			pTangramDocTemplate->m_strKey = _strKey;
			pTangramDocTemplate->m_strClientKey = _strClientKey;
			if (g_pTangram->m_strTemplatePath.Find(g_pTangram->m_strAppCommonDocPath) == 0)
			{
				pTangramDocTemplate->m_strDocTemplatePath = g_pTangram->m_strAppCommonDocPath + _T("CommonMFCAppTemplate\\MDI\\");
			}

			pTangramDocTemplate->InitXmlData();
			m_mapTangramDocTemplate[_strKey] = pTangramDocTemplate;
		}
		else
			pTangramDocTemplate = it2->second;
		pTangramDocTemplate->m_mapTangramMDIChildWnd[pWnd->m_hWnd] = pWnd;
		g_pTangram->m_pActiveTemplate = pWnd->m_pDocTemplate = pTangramDocTemplate;
		pWnd->m_strXml = strXml;
		pWnd->m_strCaption = strCaption;
		::SetWindowText(pWnd->m_hChild, strCaption);
		::SendMessage(pWnd->m_hWnd, WM_TANGRAMMSG, (WPARAM)pWnd->m_pDocTemplate, TANGRAM_CONST_OPENFILE);
		::PostMessage(pWnd->m_hWnd, WM_TANGRAMMSG, 0, 19922017);
	}
}

void CTangramMDIMainWnd::OnFinalMessage(HWND hWnd)
{
	CWindowImpl::OnFinalMessage(hWnd);
	delete this;
}

LRESULT CTangramMDIMainWnd::OnCommand(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (g_pTangram->m_strDefaultTemplate == _T("") && g_pTangram->m_strDefaultTemplate2 == _T(""))
		return DefWindowProc(uMsg, wParam, lParam);

	switch (wParam)
	{
	case ID_FILE_NEW:
	{
		IWndNode* pNode = nullptr;
		CWndFrame* pFrame = (CWndFrame*)::SendMessage(m_hMDIClient, WM_TANGRAMDATA, 0, 1992);
		if (pFrame&&g_pTangram->m_strNewDocXml != _T(""))
		{
			pFrame->Extend(CComBSTR(L"newdocument"), g_pTangram->m_strNewDocXml.AllocSysString(), &pNode);
			g_pTangram->m_bNewFile = TRUE;
			return 0;
		}
	}
	break;
	//case ID_FILE_OPEN:
	//{
	//	g_pTangram->m_pActiveMDIChildWnd = nullptr;
	//	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	//	LRESULT hr = ::SendMessage(g_pTangram->m_hTangramWnd, WM_TANGRAMMSG, (WPARAM)m_hWnd, 0);
	//	return hr;
	//}
	//break;
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramMDIMainWnd::OnControlBarCreated(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	HWND hWnd = (HWND)lParam;
	HWND hPWnd = (HWND)wParam;
	::GetWindowText(hPWnd, g_pTangram->m_szBuffer, MAX_PATH);
	if (::IsChild(m_hMDIClient, hPWnd))
	{
		//for mdi child:
	}
	else if (::IsChild(m_hWnd, hPWnd))
	{
		//for mdi main window
		IWndNode* pNode = nullptr;
		g_pTangram->GetNodeFromHandle((__int64)hWnd, &pNode);
		if (pNode == nullptr)
			m_mapDesignableWnd[hWnd] = _T("");
	}
	LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
	return lRes;
}

CTangramMDIChildWnd::CTangramMDIChildWnd(void)
{
	m_bNoDocView = false;
	m_strXml = _T("");
	m_strCaption = _T("");
	m_strTemplatePath = _T("");
	if (g_pTangram->m_strStartupCLRObj != _T(""))
	{
		m_strTemplatePath = g_pTangram->m_strStartupCLRObj;
		g_pTangram->m_strStartupCLRObj = _T("");
	}
	m_hChild = nullptr;
	m_pDocTemplate = nullptr;
	g_pTangram->m_pActiveMDIChildWnd = this;
}

CTangramMDIChildWnd::~CTangramMDIChildWnd(void)
{
	if (g_pTangram->m_pActiveMDIChildWnd&&g_pTangram->m_pActiveMDIChildWnd == this)
		g_pTangram->m_pActiveMDIChildWnd = nullptr;
}

LRESULT CTangramMDIChildWnd::OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (g_pTangram->m_nAppType == 1963)
	{
		for (auto it : g_pTangram->m_mapTangramMDIChildWnd)
		{
			if (it.first != m_hWnd)
			{
				::SendMessage(it.first, WM_TANGRAMMSG, 0, 19650601);
				break;
			}
		}
	}

	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramMDIChildWnd::OnWindowPosChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
	if (g_pTangram->m_nAppType == 1992 && ::IsIconic(m_hWnd))
		::SendMessage(::GetParent(m_hWnd), WM_MDIICONARRANGE, 0, 0);
	return lRes;
}

LRESULT CTangramMDIChildWnd::OnDpiChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	RECT* const prcNewWindow = (RECT*)lParam;
	::SetWindowPos(m_hWnd,
		NULL,
		prcNewWindow->left,
		prcNewWindow->top,
		prcNewWindow->right - prcNewWindow->left,
		prcNewWindow->bottom - prcNewWindow->top,
		SWP_NOZORDER | SWP_NOACTIVATE);
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramMDIChildWnd::OnTangramMsg(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (lParam == 19631222)
	{
		if (wParam == 0)
			return (LRESULT)this;
	}
	if (g_pTangram->m_nAppType == 1965 && g_pTangram->m_strTemplatePath != _T(""))
	{
		BOOL bNeedInit = false;
		CWndPage* pPage = nullptr;
		for (auto it : g_pTangram->m_mapTangramCommonCtrl)
		{
			//clear common control data:
			if (::IsChild(m_hWnd, it.first))
				::SendMessage(it.first, WM_TANGRAMMSG, 19820911, 19820911);
		}
		if (g_pTangram->m_mapWindowPage.size() > 0)
		{
			auto it = g_pTangram->m_mapWindowPage.find(m_hWnd);
			if (it != g_pTangram->m_mapWindowPage.end())
			{
				m_strXml = _T("");
				pPage = it->second;
				auto it2 = pPage->m_mapFrame.begin();
				while (it2 != pPage->m_mapFrame.end())
				{
					CWndFrame* pFrame = it2->second;
					pPage->m_mapFrame.erase(it2);
					if (pFrame)
					{
						RECT rc;
						bool deleteframe = false;
						HWND hwnd = pFrame->m_hWnd;
						bNeedInit = true;
						if (hwnd == nullptr)
						{
							hwnd = pFrame->m_hHostWnd;
							deleteframe = true;
						}
						if (pFrame->m_pWorkNode)
						{
							::GetWindowRect(pFrame->m_pWorkNode->m_pHostWnd->m_hWnd, &rc);
							if (pFrame->m_hWnd)
								pFrame->GetParent().ScreenToClient(&rc);
							else
							{
								HWND h = ::GetParent(pFrame->m_hHostWnd);
								CWindow m_Wnd;
								m_Wnd.Attach(h);
								m_Wnd.ScreenToClient(&rc);
								m_Wnd.Detach();
							}
							pFrame->m_pPage->m_mapNode.erase(pFrame->m_pPage->m_mapNode.begin(), pFrame->m_pPage->m_mapNode.end());
							pFrame->m_pPage = nullptr;
							::DestroyWindow(pFrame->m_pWorkNode->m_pHostWnd->m_hWnd);
							::SetWindowPos(hwnd, HWND_TOP, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, SWP_NOACTIVATE | SWP_SHOWWINDOW);
						}
						pFrame->m_pPage = nullptr;
						if (deleteframe)
							delete pFrame;
					}
					auto it = g_pTangram->m_mapWindowPage.find(m_hWnd);
					if (it == g_pTangram->m_mapWindowPage.end())
					{
						AtlTrace(_T("*************CWndPage Deleted:  %x\n****************\n"), m_hWnd);
						pPage = nullptr;
						break;
					}
					it2 = pPage->m_mapFrame.begin();
				}
				if (pPage)
				{
					pPage->m_bPageDataLoaded = false;
					pPage->m_strXmlHeader = _T("");
					pPage->m_strMapKey.erase(pPage->m_strMapKey.begin(), pPage->m_strMapKey.end());
					pPage->m_mapXtml.erase(pPage->m_mapXtml.begin(), pPage->m_mapXtml.end());
					pPage->m_mapWnd.erase(pPage->m_mapWnd.begin(), pPage->m_mapWnd.end());
				}
			}
		}
		if (pPage == nullptr)
		{
			IWndPage* _pPage = nullptr;
			g_pTangram->CreateWndPage((__int64)m_hWnd, &_pPage);
			pPage = (CWndPage*)_pPage;
		}
		IWndNode* pNode = nullptr;
		m_strXml = g_pTangram->m_strTemplatePath;

		if (m_strXml != _T(""))
		{
			CTangramXmlParse m_Parse;
			bool bLoad = m_Parse.LoadXml(m_strXml);
			if (bLoad == false)
			{
				bLoad = m_Parse.LoadFile(m_strXml);
			}
			else
				g_pTangram->m_strTemplatePath = g_pTangram->m_strStartupCLRObj;
			((CWndPage*)pPage)->UpdateMapKey(m_strXml);
			if (bLoad)
			{
				IWndFrame* pFrame = nullptr;
				CString strXml = _T("");
				CTangramXmlParse* pParse = m_Parse.GetChild(_T("client"));
				if (pParse)
					strXml = pParse->xml();
				bool bAddCfg = m_bNoDocView;
				if (g_pTangram->m_strDefaultTemplate2 != _T(""))
					bAddCfg = false;
				pPage->CreateFrameWithDefaultNode((__int64)m_hChild, CComBSTR(L"default"), CComBSTR(_T("default")), CComBSTR(_T("")), bAddCfg, &pNode);
				if (pNode)
				{
					CWndNode* _pNode = (CWndNode*)pNode;
					m_pFrame = _pNode->m_pTangramNodeCommonData->m_pFrame;
				}
				for (auto it : m_mapDesignableWnd)
				{
					CString strXml = _T("");
					CTangramXmlParse* pParse = m_Parse.GetChild(it.second);
					if (pParse)
						strXml = pParse->xml();
					IWndNode* pNode = nullptr;
					pPage->CreateFrameWithDefaultNode((__int64)it.first, CComBSTR(it.second), CComBSTR(_T("default")), CComBSTR(_T("")), bAddCfg, &pNode);
				}
			}
		}
		if (g_pTangram->m_bNewFile)
		{
			for (auto it : g_pTangram->m_mapTangramCommonCtrl)
			{
				//fill common control data:
				if (::IsChild(m_hWnd, it.first))
					::PostMessage(it.first, WM_TANGRAMMSG, 0, 19820911);
			}
		}
		g_pTangram->m_strTemplatePath = _T("");

		return DefWindowProc(uMsg, wParam, lParam);
	}
	if (lParam == 19922017)
	{
		BOOL bNeedInit = false;
		IWndPage* pPage = nullptr;
		IWndNode* pNode = nullptr;
		g_pTangram->CreateWndPage((__int64)m_hWnd, &pPage);
		if (pPage)
		{
			((CWndPage*)pPage)->m_bDoc = true;
			if ((::GetWindowLong(m_hWnd, GWL_EXSTYLE)&WS_EX_MDICHILD))
			{
				if (m_strXml != _T(""))
				{
					if (::PathFileExists(m_strXml))
						g_pTangram->m_strTemplatePath = m_strXml;
					((CWndPage*)pPage)->UpdateMapKey(m_strXml);
				}
				pPage->CreateFrameWithDefaultNode((__int64)m_hChild, CComBSTR(L"default"), CComBSTR("default"), CComBSTR(L""), false, &pNode);
				if (pNode)
				{
					CWndNode* _pNode = (CWndNode*)pNode;
					m_pFrame = _pNode->m_pTangramNodeCommonData->m_pFrame;
				}

				if (g_pTangram->m_pMDIMainWnd->m_pPage&&m_pDocTemplate&&m_pDocTemplate->m_strKey != _T(""))
				{
					g_pTangram->m_pMDIMainWnd->NavigateKey(m_pDocTemplate->m_strKey);
				}
			}
			else
			{
				if (g_pTangram->m_nAppType == 1965 && m_strXml != _T(""))
				{
					CWndPage* pPage = nullptr;
					TRACE(_T("%s\n"), g_pTangram->m_strTemplatePath);
					HWND hPage = (HWND)m_hWnd;
					auto it = g_pTangram->m_mapWindowPage.find(hPage);
					if (it != g_pTangram->m_mapWindowPage.end())
					{
						pPage = it->second;
						for (auto it : g_pTangram->m_mapTangramCommonCtrl)
						{
							//clear common control data:
							if (::IsChild(m_hWnd, it.first))
								::SendMessage(it.first, WM_TANGRAMMSG, 19820911, 19820911);
						}
						auto it2 = pPage->m_mapFrame.begin();
						while (it2 != pPage->m_mapFrame.end())
						{
							CWndFrame* pFrame = it2->second;
							pPage->m_mapFrame.erase(it2);
							if (pFrame)
							{
								RECT rc;
								bool deleteframe = false;
								HWND hwnd = pFrame->m_hWnd;
								bNeedInit = true;
								//::SendMessage(hwnd, WM_TANGRAMMSG, 19820911, 19820911);
								if (hwnd == nullptr)
								{
									hwnd = pFrame->m_hHostWnd;
									deleteframe = true;
								}
								if (pFrame->m_pWorkNode)
								{
									::GetWindowRect(pFrame->m_pWorkNode->m_pHostWnd->m_hWnd, &rc);
									if (pFrame->m_hWnd)
										pFrame->GetParent().ScreenToClient(&rc);
									else
									{
										HWND h = ::GetParent(pFrame->m_hHostWnd);
										CWindow m_Wnd;
										m_Wnd.Attach(h);
										m_Wnd.ScreenToClient(&rc);
										m_Wnd.Detach();
									}
									pFrame->m_pPage->m_mapNode.erase(pFrame->m_pPage->m_mapNode.begin(), pFrame->m_pPage->m_mapNode.end());
									pFrame->m_pPage = nullptr;
									::DestroyWindow(pFrame->m_pWorkNode->m_pHostWnd->m_hWnd);
									::SetWindowPos(hwnd, HWND_TOP, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, SWP_NOACTIVATE | SWP_SHOWWINDOW);
								}
								pFrame->m_pPage = nullptr;
								if (deleteframe)
									delete pFrame;
							}
							auto it = g_pTangram->m_mapWindowPage.find(m_hWnd);
							if (it == g_pTangram->m_mapWindowPage.end())
							{
								AtlTrace(_T("*************CWndPage Deleted:  %x\n****************\n"), m_hWnd);
								pPage = nullptr;
								break;
							}
							it2 = pPage->m_mapFrame.begin();
						}
					}
					if (pPage)
					{
						pPage->m_bPageDataLoaded = false;
						pPage->m_strXmlHeader = _T("");
						pPage->m_strMapKey.erase(pPage->m_strMapKey.begin(), pPage->m_strMapKey.end());
						pPage->m_mapXtml.erase(pPage->m_mapXtml.begin(), pPage->m_mapXtml.end());
						pPage->m_mapWnd.erase(pPage->m_mapWnd.begin(), pPage->m_mapWnd.end());
					}
					if (m_strXml != _T(""))
					{
						if (::PathFileExists(m_strXml))
							g_pTangram->m_strTemplatePath = m_strXml;
						((CWndPage*)pPage)->UpdateMapKey(m_strXml);
					}
					IWndNode* pNode = nullptr;
					if (m_strXml != _T(""))
					{
						IWndFrame* pFrame = nullptr;
						pPage->CreateFrameWithDefaultNode((__int64)m_hChild, CComBSTR(L"default"), CComBSTR(_T("default")), CComBSTR(L""), false, &pNode);
						if (pNode)
						{
							CWndNode* _pNode = (CWndNode*)pNode;
							m_pFrame = _pNode->m_pTangramNodeCommonData->m_pFrame;
						}
						for (auto it : m_mapDesignableWnd)
						{
							IWndNode* pNode = nullptr;
							pPage->CreateFrameWithDefaultNode((__int64)it.first, CComBSTR(it.second), CComBSTR(_T("default")), CComBSTR(L""), false, &pNode);
						}
					}
					for (auto it : g_pTangram->m_mapTangramCommonCtrl)
					{
						//fill common control data:
						if (::IsChild(m_hWnd, it.first))
							::PostMessage(it.first, WM_TANGRAMMSG, 0, 19820911);
					}
					return DefWindowProc(uMsg, wParam, lParam);
				}
				if (m_strXml != _T(""))
				{
					if (::PathFileExists(m_strXml))
						g_pTangram->m_strTemplatePath = m_strXml;
					((CWndPage*)pPage)->UpdateMapKey(m_strXml);
				}
				CString strTemplatePath = g_pTangram->m_strTemplatePath;
				if (m_strXml == _T("") && strTemplatePath != _T(""))
				{
					m_strXml = strTemplatePath;
					g_pTangram->m_strTemplatePath = _T("");
				}
				if (m_strXml != _T(""))
				{
					CTangramXmlParse m_Parse;
					if (m_Parse.LoadXml(m_strXml))
					{
						CString strXml = _T("");
						CTangramXmlParse* pParse = (CTangramXmlParse*)m_Parse.GetChild(_T("client"));
						if (pParse)
							strXml = pParse->xml();
						pParse = (CTangramXmlParse*)m_Parse.GetChild(_T("pagedata"));
						if (pParse)
						{
							int nCount = pParse->GetCount();
							if (nCount)
							{
								for (int i = 0; i < nCount; i++)
								{
									CTangramXmlParse* pChild = pParse->GetChild(i);
									CWndPage* _pPage = (CWndPage*)pPage;
									CString strName = pChild->name();
									_pPage->m_mapXtml[strName] = pChild->xml();
									CString strPath = m_strTemplatePath;
									int nPos = strPath.ReverseFind('\\');
									CString strFileName = strPath.Mid(nPos + 1);
									int nPos1 = strFileName.ReverseFind('.');
									strFileName = strFileName.Left(nPos1);
									strPath = strPath.Left(nPos + 1) + strFileName + _T("_") + strName + _T(".bmp");
									if (::PathFileExists(strPath))
									{
										_pPage->m_mapXtml[strName + _T("_imagePath")] = strPath;
										CString strData = g_pTangram->EncodeFileToBase64(strPath);
										_pPage->m_mapXtml[strName + _T("_image")] = strData;
									}
								}
							}
						}
						IWndFrame* pFrame = nullptr;
						pPage->CreateFrameWithDefaultNode((__int64)m_hChild, CComBSTR(L"default"), CComBSTR(_T("default")), CComBSTR(strXml), false, &pNode);
						if (pNode)
						{
							CWndNode* _pNode = (CWndNode*)pNode;
							m_pFrame = _pNode->m_pTangramNodeCommonData->m_pFrame;
						}
						for (auto it : m_mapDesignableWnd)
						{
							CString strXml = _T("");
							CTangramXmlParse* pParse = m_Parse.GetChild(it.second);
							if (pParse)
								strXml = m_Parse.GetChild(it.second)->xml();
							IWndNode* pNode = nullptr;
							pPage->CreateFrameWithDefaultNode((__int64)it.first, CComBSTR(it.second), CComBSTR(_T("default")), CComBSTR(strXml), false, &pNode);
						}
					}
				}
				else
				{
					if (g_pTangram->m_nAppType == 1963 && m_bNoDocView)
					{
						if (g_pTangram->m_strDefaultTemplate2 != _T(""))//Fist Frame for APP_TYPE_MTLD Application
						{
							pPage->CreateFrameWithDefaultNode((__int64)m_hChild, CComBSTR(L"defaultframe"), CComBSTR(_T("defaultframe")), CComBSTR(""), true, &pNode);
							if (pNode)
							{
								CWndNode* _pNode = (CWndNode*)pNode;
								m_pFrame = _pNode->m_pTangramNodeCommonData->m_pFrame;
							}
						}
						else
						{
							CString strPath = g_pTangram->GetDocTemplateXml(_T("Please select Document Template:"), g_pTangram->m_strAppDataPath + _T("Doctemplate\\"), _T(".AppXml"));
							if (::PathFileExists(strPath))
							{
								CTangramXmlParse m_Parse;
								if (m_Parse.LoadFile(strPath))
								{
									pPage->CreateFrameWithDefaultNode((__int64)m_hChild, CComBSTR(L"default"), CComBSTR(_T("default")), CComBSTR(m_Parse.xml()), false, &pNode);
									if (pNode)
									{
										CWndNode* _pNode = (CWndNode*)pNode;
										m_pFrame = _pNode->m_pTangramNodeCommonData->m_pFrame;
									}
								}
							}
						}
						return DefWindowProc(uMsg, wParam, lParam);
					}
					bool bAddCfg = m_bNoDocView;
					if (g_pTangram->m_strDefaultTemplate2 != _T(""))
						bAddCfg = false;
					CString strKey = _T("default");
					if (g_pTangram->m_nAppType == 1965 && m_bNoDocView)// First View for SDI Application 
					{
						strKey = _T("defaultclient");
						pPage->CreateFrameWithDefaultNode((__int64)m_hChild, CComBSTR(strKey), CComBSTR(strKey), CComBSTR(L""), true, &pNode);
						if (pNode)
						{
							CWndNode* _pNode = (CWndNode*)pNode;
							m_pFrame = _pNode->m_pTangramNodeCommonData->m_pFrame;
						}
						for (auto it : m_mapDesignableWnd)
						{
							IWndNode* pNode = nullptr;
							pPage->CreateFrameWithDefaultNode((__int64)it.first, CComBSTR(it.second), CComBSTR(_T("default")), CComBSTR(L""), bAddCfg, &pNode);
						}
					}
					else
					{
						OnCreateDoc(_T(""));
					}
					//	pPage->CreateFrameWithDefaultNode((__int64)m_hChild, CComBSTR(strKey), CComBSTR(strKey), CComBSTR(L""), bAddCfg, &pNode);
					//if (pNode)
					//{
					//	CWndNode* _pNode = (CWndNode*)pNode;
					//	m_pFrame = _pNode->m_pTangramNodeCommonData->m_pFrame;
					//}
					//for (auto it : m_mapDesignableWnd)
					//{
					//	IWndNode* pNode = nullptr;
					//	pPage->CreateFrameWithDefaultNode((__int64)it.first, CComBSTR(it.second), CComBSTR(_T("default")), CComBSTR(L""), bAddCfg, &pNode);
					//}
				}
			}
		}
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramMDIChildWnd::OnMDIActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (m_pDocTemplate == nullptr)
		return DefWindowProc(uMsg, wParam, lParam);
	if (lParam != wParam)
	{
		HWND hActivedWnd = (HWND)lParam;
		CString strKey = _T("");
		CTangramMDIChildWnd* pWnd = (CTangramMDIChildWnd*)::SendMessage(hActivedWnd, WM_TANGRAMMSG, 0, 19631222);
		if (pWnd&&pWnd->m_pDocTemplate)
		{
			strKey = pWnd->m_pDocTemplate->m_strKey;
			g_pTangram->m_pActiveTemplate = pWnd->m_pDocTemplate;
		}
		g_pTangram->m_pMDIMainWnd->NavigateKey(strKey);
	}

	return DefWindowProc(uMsg, wParam, lParam);
}

void CTangramMDIChildWnd::OnCreateDoc(CString strDocData)
{
	m_strXml = strDocData;
	if (m_strXml == _T(""))
	{
		CString strPath = g_pTangram->m_strAppDataPath + _T("DocTemplate\\Normal\\default.xml");
		bool bDefaultExists = ::PathFileExists(strPath);
		if (bDefaultExists == false)
		{
			CString strDir = g_pTangram->m_pMDIMainWnd ? _T("MDI") : _T("SDI");
			strPath = g_pTangram->m_strAppCommonDocPath + _T("CommonMFCAppTemplate\\") + strDir + _T("\\DocTemplate\\default.xml");
			bDefaultExists = ::PathFileExists(strPath);
		}
		if (bDefaultExists)
		{
			CTangramXmlParse m_Parse;
			if (m_Parse.LoadFile(strPath))
			{
				m_strTemplatePath = strPath;
				m_strXml = m_Parse.xml();
			}
			g_pTangram->m_strTemplatePath = strPath;
		}
		else
		{
			bool bAddCfg = m_bNoDocView;
			if (g_pTangram->m_strDefaultTemplate2 != _T(""))
				bAddCfg = false;
			CString strKey = _T("default");
			IWndPage* pPage = nullptr;
			IWndNode* pNode = nullptr;
			g_pTangram->CreateWndPage((__int64)m_hWnd, &pPage);
			pPage->CreateFrameWithDefaultNode((__int64)m_hChild, CComBSTR(strKey), CComBSTR(strKey), CComBSTR(L""), bAddCfg, &pNode);
			if (pNode)
			{
				CWndNode* _pNode = (CWndNode*)pNode;
				m_pFrame = _pNode->m_pTangramNodeCommonData->m_pFrame;
			}
			for (auto it : m_mapDesignableWnd)
			{
				IWndNode* pNode = nullptr;
				pPage->CreateFrameWithDefaultNode((__int64)it.first, CComBSTR(it.second), CComBSTR(_T("default")), CComBSTR(L""), bAddCfg, &pNode);
			}
			return;
		}
	}
	::SendMessage(m_hWnd, WM_TANGRAMMSG, 0, 19922017);
}

LRESULT CTangramMDIChildWnd::OnActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
{
	if (LOWORD(wParam) != WA_INACTIVE)
	{
		g_pTangram->m_pActiveMDIChildWnd = this;
	}

	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramMDIChildWnd::OnControlBarCreated(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	HWND hWnd = (HWND)lParam;
	HWND hPWnd = (HWND)wParam;
	::GetWindowText(hPWnd, g_pTangram->m_szBuffer, MAX_PATH);
	CString strText = CString(g_pTangram->m_szBuffer);
	strText.Replace(_T(" "), _T("_"));
	IWndNode* pNode = nullptr;
	g_pTangram->GetNodeFromHandle((__int64)hWnd, &pNode);
	if (pNode == nullptr)
	{
		m_mapDesignableWnd[hWnd] = strText;
		auto it = g_pTangram->m_mapWindowPage.find(m_hWnd);
		if (it != g_pTangram->m_mapWindowPage.end())
		{
			IWndNode* pNode = nullptr;
			bool bAddCfg = m_bNoDocView;
			if (g_pTangram->m_strDefaultTemplate2 != _T(""))
				bAddCfg = false;
			it->second->CreateFrameWithDefaultNode((__int64)hWnd, CComBSTR(strText), CComBSTR(_T("default")), CComBSTR(L""), bAddCfg, &pNode);
			CWndFrame* pFrame = (CWndFrame*)::SendMessage(hWnd, WM_TANGRAMDATA, 0, 1992);
			if (pFrame)
			{
				pFrame->m_nWndFrameType = WndFrameType::ControlBarFrame;
			}
		}
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramMDIChildWnd::OnCommand(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (g_pTangram->m_strDefaultTemplate == _T("") && g_pTangram->m_strDefaultTemplate2 == _T(""))
		return DefWindowProc(uMsg, wParam, lParam);

	switch (wParam)
	{
	case ID_FILE_NEW:
	case ID_FILE_NEW_FRAME:
	{
		if (g_pTangram->m_hTemplateWnd == nullptr)
		{
			if (g_pTangram->m_pDesignerWndPage == nullptr)
			{
				auto it = g_pTangram->m_mapWindowPage.find(g_pTangram->m_hHostWnd);
				if (it != g_pTangram->m_mapWindowPage.end())
					g_pTangram->m_pDesignerWndPage = it->second;
				else
				{
					g_pTangram->m_pDesignerWndPage = new CComObject<CWndPage>();
					g_pTangram->m_pDesignerWndPage->m_hWnd = g_pTangram->m_hHostWnd;
					g_pTangram->m_mapWindowPage[g_pTangram->m_hHostWnd] = g_pTangram->m_pDesignerWndPage;
				}
			}
			g_pTangram->m_hTemplateWnd = ::CreateWindowEx(NULL, _T("Tangram Window Class"), _T(""), WS_VISIBLE | WS_CHILD | WS_CLIPCHILDREN | WS_CLIPSIBLINGS, 0, 0, 0, 0, g_pTangram->m_hHostWnd, 0, theApp.m_hInstance, NULL);
			g_pTangram->m_hTemplateChildWnd = ::CreateWindowEx(NULL, _T("Tangram Window Class"), _T(""), WS_VISIBLE | WS_CHILD, 0, 0, 0, 0, g_pTangram->m_hTemplateWnd, 0, theApp.m_hInstance, NULL);
			IWndFrame* pFrame = nullptr;
			g_pTangram->m_pDesignerWndPage->CreateFrame(CComVariant(0), CComVariant((__int64)g_pTangram->m_hTemplateChildWnd), CComBSTR(L"doctemplate"), &pFrame);
			g_pTangram->m_pDocTemplateFrame = (CWndFrame*)pFrame;
		}
		if (g_pTangram->m_pDocTemplateFrame)
		{
			if (m_hChild)
			{
				RECT rc;
				CTangramMDIChildWnd* pWnd = (CTangramMDIChildWnd*)::SendMessage(::GetParent(g_pTangram->m_hTemplateWnd), WM_TANGRAMMSG, 0, 19631222);
				if (pWnd)
				{
					::GetWindowRect(g_pTangram->m_pDocTemplateFrame->m_pWorkNode->m_pHostWnd->m_hWnd, &rc);
					pWnd->ScreenToClient(&rc);
					::ShowWindow(pWnd->m_pFrame->m_pWorkNode->m_pHostWnd->m_hWnd, SW_SHOW);
					::SetWindowLongPtr(pWnd->m_hChild, GWLP_ID, AFX_IDW_PANE_FIRST);
					::SetWindowPos(pWnd->m_hChild, HWND_TOP, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, SWP_FRAMECHANGED);
				}
				::SetParent(g_pTangram->m_hTemplateWnd, m_hWnd);
				::GetWindowRect(m_pFrame->m_pWorkNode->m_pHostWnd->m_hWnd, &rc);
				ScreenToClient(&rc);
				m_pFrame->m_pWorkNode->m_pHostWnd->ShowWindow(SW_HIDE);
				::SetWindowPos(m_hChild, HWND_TOP, 0, 0, 0, 0, SWP_FRAMECHANGED);
				::SetWindowLongPtr(m_hChild, GWLP_ID, 19631222);
				::SetWindowLongPtr(g_pTangram->m_hTemplateWnd, GWLP_ID, AFX_IDW_PANE_FIRST);
				::ShowWindow(g_pTangram->m_hTemplateWnd, SW_SHOW);
				::SetWindowPos(g_pTangram->m_hTemplateWnd, HWND_TOP, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, SWP_FRAMECHANGED);
			}
			IWndNode* pNode = nullptr;
			g_pTangram->m_pDocTemplateFrame->Extend(CComBSTR(L"newdocument"), g_pTangram->m_strNewDocXml.AllocSysString(), &pNode);
			g_pTangram->m_bNewFile = TRUE;
			return 0;
		}
	}
	break;
	//case ID_FILE_OPEN:
	//{
	//	LRESULT hr = ::SendMessage(g_pTangram->m_hTangramWnd, WM_TANGRAMMSG, (WPARAM)m_hWnd, 0);
	//	return hr;
	//}
	//break;
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramMDIChildWnd::OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (m_pDocTemplate)
	{
		auto it = m_pDocTemplate->m_mapTangramMDIChildWnd.find(m_hWnd);
		if (it != m_pDocTemplate->m_mapTangramMDIChildWnd.end())
		{
			m_pDocTemplate->m_mapTangramMDIChildWnd.erase(it);
			if (m_pDocTemplate->m_mapTangramMDIChildWnd.size() == 0)
			{
				auto it = g_pTangram->m_pMDIMainWnd->m_mapTangramDocTemplate.find(m_pDocTemplate->m_strKey);
				if (it != g_pTangram->m_pMDIMainWnd->m_mapTangramDocTemplate.end())
				{
					g_pTangram->m_pMDIMainWnd->m_mapTangramDocTemplate.erase(it);
					m_pDocTemplate->SaveXmlData();
					if (g_pTangram->m_pMDIMainWnd->m_mapTangramDocTemplate.size() == 0)
					{
						g_pTangram->m_pActiveTemplate = nullptr;
					}
				}
			}
		}
	}
	else
	{
		if (::IsChild(m_hWnd, g_pTangram->m_hTemplateWnd))
		{
			::ShowWindow(g_pTangram->m_hTemplateWnd, SW_HIDE);
			::SetParent(g_pTangram->m_hTemplateWnd, g_pTangram->m_hHostWnd);
		}
		auto it = g_pTangram->m_mapTangramMDIChildWnd.find(m_hWnd);
		if (it != g_pTangram->m_mapTangramMDIChildWnd.end())
		{
			g_pTangram->m_mapTangramMDIChildWnd.erase(it);
		}
	}

	return DefWindowProc(uMsg, wParam, lParam);
}

void CTangramMDIChildWnd::OnFinalMessage(HWND hWnd)
{
	CWindowImpl::OnFinalMessage(hWnd);
	delete this;
}

CTangramWinFormWnd::CTangramWinFormWnd(void)
{
	m_nState = -1;
	m_bMdiForm = false;
	m_strChildFormPath = m_strXml = m_strKey = _T("");
}

CTangramWinFormWnd::~CTangramWinFormWnd(void)
{
	if (m_bMdiForm)
	{
		for (auto it : m_mapTangramFormsTemplateInfo)
		{
			delete it.second;
		}
		m_mapTangramFormsTemplateInfo.clear();
	}
}

LRESULT CTangramWinFormWnd::OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramWinFormWnd::OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	switch (m_nState)
	{
	case 0:
	case 1:
	case 3:
		{
			if (!::PathFileExists(m_strPath))
			{
				int nPos = m_strPath.ReverseFind('\\');
				CString strPath = m_strPath.Left(nPos);
				::SHCreateDirectory(nullptr, strPath);
			}
			CWndPage* pPage = nullptr;
			auto it = g_pTangram->m_mapWindowPage.find(m_hWnd);
			if (it != g_pTangram->m_mapWindowPage.end())
			{
				pPage = it->second;
				CString strData = _T("<winform>");
				CString strIndex = _T("@");
				for (auto it2 : pPage->m_mapFrame)
				{
					CComBSTR bstrXml(L"");
					strIndex += it2.second->m_strFrameName;
					strIndex += _T("@");
					it2.second->get_FrameXML(&bstrXml);
					strData += OLE2T(bstrXml);
				}
				DWORD dw = ::GetWindowLongPtr(m_hWnd, GWL_EXSTYLE);
				if (dw&WS_EX_MDICHILD)
				{
					HWND h = ::GetParent(::GetParent(m_hWnd));
					if (h)
					{
						CTangramWinFormWnd* pParent = (CTangramWinFormWnd*)::SendMessage(h, WM_TANGRAMDATA, 0, 20190214);
						if (pParent)
						{
							auto it = pParent->m_mapKey.find(m_strKey);
							if (it != pParent->m_mapKey.end())
							{
								strData += it->second;
							}
						}
					}
				}
				strData += _T("</winform>");
				CTangramXmlParse xml;
				if (xml.LoadXml(strData))
					xml.SaveFile(m_strPath);
				// TODO Refresh ListCtrl
			}
		}
		break;
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramWinFormWnd::OnGetMe(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	switch (lParam)
	{
	case 0:
	{
		m_nState = 0;//new
		m_strPath = (LPCTSTR)wParam;
		m_strPath.MakeLower();
		return (LRESULT)this;
	}
	break;
	case 1:
	{
		m_nState = 1;//design
		m_strPath = (LPCTSTR)wParam;
		m_strPath.MakeLower();
		if (m_bMdiForm)
		{
			int nPos = m_strPath.ReverseFind('.');
			if (nPos != -1)
			{
				CString strDir = m_strPath.Left(nPos) + _T("\\");
				m_strChildFormPath = strDir;
				if (::PathIsDirectory(strDir) == false)
				{
					::SHCreateDirectory(nullptr, strDir);
				}
			}
		}
	}
	break;
	case 2:
	{
		if (m_strKey == _T(""))
		{
			CString strPath = m_strPath;
			strPath.MakeLower();
			int nPos = strPath.ReverseFind('.');
			strPath = strPath.Left(nPos);
			CString strForms = g_pTangram->m_strAppFormsTemplatePath;
			strForms.MakeLower();
			strPath.Replace(strForms, _T(""));
			nPos = strPath.Find(_T("\\"));
			strPath = strPath.Mid(nPos + 1);
			nPos = strPath.Find(_T("\\"));
			strPath = strPath.Mid(nPos + 1);
			strPath.Replace(_T("\\"), _T("_"));
			strPath.Replace(_T(" "), _T("_"));
			m_strKey = strPath;
			DWORD dw = ::GetWindowLongPtr(m_hWnd, GWL_EXSTYLE);
			if (dw&WS_EX_MDICHILD)
			{
				HWND h = ::GetParent(::GetParent(m_hWnd));
				if (h)
				{
					CTangramWinFormWnd* pParent = (CTangramWinFormWnd*)::SendMessage(h, WM_TANGRAMDATA, 0, 20190214);
					if (pParent)
					{
						auto it = pParent->m_mapKey.find(m_strKey);
						if (it == pParent->m_mapKey.end())
						{
							CTangramXmlParse m_Parse;
							if (m_Parse.LoadFile(m_strPath))
							{
								CTangramXmlParse* pChild = m_Parse.GetChild(m_strKey);
								if(pChild)
									pParent->m_mapKey[m_strKey] = pChild->xml();
							}
						}
					}
				}
			}
		}
		return (LRESULT)m_strKey.GetBuffer();
	}
		break;
	case 3:
	{
		m_nState = 3;//design
		m_strXml = (LPCTSTR)wParam;
		if (::PathFileExists(m_strXml))
		{
			m_strPath = m_strXml;
		}
	}
	break;
	case 4:
	{
		m_bMdiForm = true;//design
		if (m_bMdiForm)
		{
			int nPos = m_strPath.ReverseFind('.');
			if (nPos != -1)
			{
				CString strDir = m_strPath.Left(nPos) + _T("\\");
				m_strChildFormPath = strDir;
				if (::PathIsDirectory(strDir) == false)
				{
					::SHCreateDirectory(nullptr, strDir);
				}
			}
		}
	}
	break;
	case 20190214:
		return (LRESULT)this;
		break;
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramWinFormWnd::OnTangramGetXml(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	CString strFrameName = (LPCTSTR)wParam;
	CString currentKey = (LPCTSTR)lParam;
	CString strIndex = strFrameName + L"_" + currentKey;
	if (m_bMdiForm)
	{
		auto it = m_mapKey.find(currentKey);
		if (it != m_mapKey.end())
		{
			CString strXml = it->second;
			CTangramXmlParse parse;
			if (parse.LoadXml(strXml))
			{
				CTangramXmlParse* pParse = parse.GetChild(strFrameName);
				if (pParse)
				{
					CTangramXmlParse* pParse2 = pParse->GetChild(currentKey);
					if (pParse2)
					{
						CString s = pParse2->xml();
						//LRESULT res = (LRESULT)LPSTR(LPCTSTR(s));
						auto it = g_pTangram->m_mapValInfo.find(strIndex);
						if (it != g_pTangram->m_mapValInfo.end())
						{
							g_pTangram->m_mapValInfo.erase(it);
						}
						g_pTangram->m_mapValInfo[strIndex] = CComVariant(s);
						return 1;
					}
				}
			}
		}
	}
	CTangramXmlParse parse;
	if (parse.LoadXml(m_strXml)||parse.LoadFile(m_strXml))
	{
		CTangramXmlParse* pParse = parse.GetChild(strFrameName);
		if (pParse)
		{
			CTangramXmlParse* pParse2 = pParse->GetChild(currentKey);
			if (pParse2)
			{
				auto it = g_pTangram->m_mapValInfo.find(strIndex);
				if (it != g_pTangram->m_mapValInfo.end())
				{
					g_pTangram->m_mapValInfo.erase(it);
				}
				g_pTangram->m_mapValInfo[strIndex] = CComVariant(pParse2->xml());
				return 1;
				//CString s = pParse2->xml();
				//LRESULT res = (LRESULT)LPSTR(LPCTSTR(s));
				//return res;
			}
		}
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramWinFormWnd::OnFormCreated(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	g_pTangram->m_hFormNodeWnd = nullptr;
	return DefWindowProc(uMsg, wParam, lParam);
}

void CTangramWinFormWnd::OnFinalMessage(HWND hWnd)
{
	auto it = g_pTangram->m_mapTangramDesignedWindows.find(m_strPath);
	if (it != g_pTangram->m_mapTangramDesignedWindows.end())
		g_pTangram->m_mapTangramDesignedWindows.erase(it);
	CWindowImpl::OnFinalMessage(hWnd);
	delete this;
}

CTangramDocWnd::CTangramDocWnd(void)
{
	m_hView = nullptr;
	m_strKey = _T("");
	m_strWndID = _T("default");
	m_pWndFrame = nullptr;
	m_pDocFrame = nullptr;
	m_pParentPage = nullptr;
	auto it = g_pTangram->m_mapValInfo.find(_T("newmdtframe"));
	if (it != g_pTangram->m_mapValInfo.end())
	{
		m_strKey = OLE2T(it->second.bstrVal);
		::VariantClear(&it->second);
		g_pTangram->m_mapValInfo.erase(it);
	}
}

CTangramDocWnd::~CTangramDocWnd(void)
{
	::SendMessage(g_pTangram->m_hTangramWnd, WM_TANGRAMMSG, 0, 10001000);
}

LRESULT CTangramDocWnd::OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (m_pDocFrame&&m_pDocFrame->m_pTangramDoc)
	{
		CString strPath = g_pTangram->m_strAppDataPath + _T("default.tangramdoc");
		if (m_pDocFrame->m_pTangramDoc->m_strPath.CompareNoCase(strPath) == 0)
		{
			::SendMessage(m_hWnd, WM_QUERYAPPPROXY, 0, TANGRAM_CONST_NEWDOC);
		}
		m_pDocFrame->m_pTangramDoc->m_pAppProxy->m_strClosingFrameID = m_strKey;
		auto it = g_pTangram->m_mapMDTFrame.find(m_hWnd);
		if (it != g_pTangram->m_mapMDTFrame.end())
		{
			if (m_pDocFrame->m_pTangramDoc->m_pAppProxy != g_pTangram->m_pTangramAppProxy)
			{
				g_pTangram->m_pTangramAppProxy->OnDestroyMainFrame(m_strKey, g_pTangram->m_mapMDTFrame.size(), 1);
			}
			m_pDocFrame->m_pTangramDoc->m_pAppProxy->OnDestroyMainFrame(m_strKey, g_pTangram->m_mapMDTFrame.size(), 1);
		}
	}
	TRACE(_T("Close Tangram Document :%x\n"), this);
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramDocWnd::OnCommand(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	switch (wParam)
	{
	case ID_FILE_NEW:
	case ID_FILE_NEW_FRAME:
	{
		if (m_pDocFrame)
		{
			IWndNode* pNode = nullptr;
			if (m_pDocFrame->m_pHostFrame)
			{
				m_pDocFrame->m_pHostFrame->Extend(CComBSTR(L"newdocument"), g_pTangram->m_strNewDocXml.AllocSysString(), &pNode);
				g_pTangram->m_bNewFile = TRUE;
				return 0;
			}
		}
	}
	break;
	//case ID_FILE_OPEN:
	//{
	//	if (g_pTangram)
	//	{
	//		return ::SendMessage(g_pTangram->m_hTangramWnd, WM_TANGRAMMSG, (WPARAM)m_hWnd, 0);
	//	}
	//	return 0;
	//}

	break;
	case ID_FILE_SAVE:
	{
		if (m_pDocFrame)
		{
			m_pDocFrame->m_pTangramDoc->m_pDocProxy->SaveDoc();
			return 0;
		}
		return 0;

	}
	case ID_FILE_SAVE_AS:
	{
		if (m_pDocFrame)
		{
			CString strID = m_pDocFrame->m_pTangramDoc->m_strDocID;
		}
	}
	break;
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramDocWnd::OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	auto it = g_pTangram->m_mapMDTFrame.find(m_hWnd);
	if (it != g_pTangram->m_mapMDTFrame.end())
	{
		g_pTangram->m_mapMDTFrame.erase(it);
		if (m_pDocFrame&&m_pDocFrame->m_pTangramDoc)
		{
			m_pDocFrame->m_pTangramDoc->m_pAppProxy->m_strClosingFrameID = m_strKey;
			CString strKey = m_strKey + _T("-ondestroy");
			m_pDocFrame->m_pTangramDoc->m_pAppProxy->m_hMainWnd = nullptr;
			if (m_pDocFrame->m_pTangramDoc->m_pAppProxy != g_pTangram->m_pTangramAppProxy)
			{
				g_pTangram->m_pTangramAppProxy->OnDestroyMainFrame(strKey, g_pTangram->m_mapMDTFrame.size(), 1);
			}
			m_pDocFrame->m_pTangramDoc->m_pAppProxy->OnDestroyMainFrame(strKey, g_pTangram->m_mapMDTFrame.size(), 1);
		}
	}

	if (m_pDocFrame)
	{
		if (m_pDocFrame->m_pTangramDoc->m_pActiveWnd == this)
			m_pDocFrame->m_pTangramDoc->m_pActiveWnd = nullptr;
		auto it = m_pDocFrame->m_mapWnd.find(m_hWnd);
		if (it != m_pDocFrame->m_mapWnd.end())
			m_pDocFrame->m_mapWnd.erase(it);
		if (m_pDocFrame->m_mapWnd.size() == 0)
		{
			delete m_pDocFrame;
			m_pDocFrame = nullptr;
		}
		else
		{
			m_pDocFrame->m_pCurrentWnd = m_pDocFrame->m_mapWnd.begin()->second;
			m_pDocFrame->m_pHostFrame->ModifyHost((LONGLONG)m_pDocFrame->m_pCurrentWnd->m_hView);
		}
	}

	return DefWindowProc(uMsg, wParam, lParam);
}

void CTangramDocWnd::OnFinalMessage(HWND hWnd)
{
	CWindowImpl::OnFinalMessage(hWnd);
	delete this;
	if (g_pTangram->m_bEclipse==false&&g_pTangram->m_pMDIMainWnd==nullptr&&g_pTangram->m_mapMDTFrame.size() == 0)
	{
		if (g_pTangram->m_mapBrowserWnd.size()==1)
		{
			g_pTangram->m_bChromeNeedClosed = true;
			auto it = g_pTangram->m_mapBrowserWnd.begin();
			it->second->SendMessageW(WM_CLOSE, 0, 0);
		}
	}
}

LRESULT CTangramDocWnd::OnCtrlBarCreated(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	HWND hWnd = (HWND)wParam;
	HWND hClient = ::GetDlgItem(hWnd, AFX_IDW_PANE_FIRST);
	if (::IsWindow(hClient))
	{
		::GetWindowText(hClient, g_pTangram->m_szBuffer, MAX_PATH);
		CString strText = CString(g_pTangram->m_szBuffer);
		CWndPage* pPage = nullptr;
		IWndNode* pNode = nullptr;
		HWND hPWnd = (HWND)lParam;
		auto it = g_pTangram->m_mapWindowPage.find(hPWnd);
		if (it == g_pTangram->m_mapWindowPage.end())
		{
			pPage = new CComObject<CWndPage>;
			pPage->m_hWnd = hPWnd;
			g_pTangram->m_mapWindowPage[hPWnd] = pPage;
			for (auto it : g_pTangram->m_mapTangramAppProxy)
			{
				CTangramWndPageProxy* pTangramProxy = it.second->OnWndPageCreated(pPage);
				if (pTangramProxy)
					pPage->m_mapWndPageProxy[it.second] = pTangramProxy;
			}
		}
		else
			pPage = it->second;

		auto it2 = m_mapCtrlBar.find(strText);
		if (it2 == m_mapCtrlBar.end())
		{
			m_mapCtrlBar[strText] = hClient;
			IWndFrame* pFrame = nullptr;
			pPage->CreateFrame(CComVariant((LONGLONG)0), CComVariant((LONGLONG)hClient), CComBSTR(strText), &pFrame);
			if (pFrame)
			{
				((CWndFrame*)pFrame)->m_pDoc = m_pDocFrame->m_pTangramDoc;
				CString strXml = _T("");
				auto it = m_pDocFrame->m_pTangramDoc->m_mapWndScript.find(strText);
				if (it != m_pDocFrame->m_pTangramDoc->m_mapWndScript.end())
				{
					strXml = it->second;
				}
				else
				{
					CString strPath = m_pDocFrame->m_pTangramDoc->m_strPath;
					if (strPath == _T(""))
					{
						CString s = _T("");
						s.Format(_T("Do you want to create Control Bar \"%s\" from exists Common Template?"), strText);
						CString strCaption = s;
						s.Format(_T("Creating Control Bar: \"%s\""), strText);
						if (::MessageBox(::GetActiveWindow(), strCaption, s, MB_YESNO) == IDYES)
						{
							CString _strPath = g_pTangram->m_strAppCommonDocPath + _T("CommonCtrlBar\\");
							s.Format(_T("Please select Control Bar \"%s\" Template"), strText);
							strXml = g_pTangram->GetDocTemplateXml(s, _strPath, _T(".AppXml"));
						}
					}
				}
				pFrame->Extend(CComBSTR(strText), CComBSTR(strXml), &pNode);
			}
		}
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramDocWnd::OnTangramGetXml(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	CString strFrameName = (LPCTSTR)wParam;
	strFrameName += _T("_");
	strFrameName += (LPCTSTR)lParam;
	auto it = this->m_pDocFrame->m_pTangramDoc->m_mapWndScript.find(strFrameName);
	if (it != m_pDocFrame->m_pTangramDoc->m_mapWndScript.end())
		return (LRESULT)LPCTSTR(it->second);
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CTangramDocWnd::OnTangramMsg(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (lParam == 19631222)
	{
		return 0;
	}
	if (wParam == 2016)
	{
		return (LRESULT)this;
	}
	if (wParam == TANGRAM_CONST_PANE_FIRST)
	{
		return DefWindowProc(uMsg, wParam, lParam);
	}
	if (lParam == 1963)//for Uer Control
	{
		CNodeWnd* pWnd = (CNodeWnd*)wParam;
		if (pWnd)
		{
			CWndPage* pPage = pWnd->m_pWndNode->m_pTangramNodeCommonData->m_pFrame->m_pPage;
			for (auto it : pWnd->m_mapDockCtrl)
			{
				TRACE(_T("DockCtrlName:%s\n"), it.first);
				TRACE(_T("DockCtrlHandle:%x\n"), it.second);
				CString strName = pWnd->m_pWndNode->m_strName;
				strName += CComBSTR(L"_");
				strName += it.first;
				CString strKey = strName;
				strKey += CComBSTR(L"_default");
				CString strXml = _T("");
				auto it2 = m_pDocFrame->m_pTangramDoc->m_mapWndScript.find(strKey);
				if (it2 != m_pDocFrame->m_pTangramDoc->m_mapWndScript.end())
					strXml = it2->second;

				IWndFrame* pFrame = nullptr;
				pPage->CreateFrame(CComVariant(0), CComVariant((LONGLONG)it.second), strName.AllocSysString(), &pFrame);
				CWndFrame* _pFrame = (CWndFrame*)pFrame;
				_pFrame->m_pParentNode = pWnd->m_pWndNode;
				IWndNode* pNode = nullptr;
				pFrame->Extend(CComBSTR(L"default"), CComBSTR(strXml), &pNode);
				if (pNode)
				{
					_pFrame->m_nWndFrameType = ControlBarFrame;
					pWnd->m_pWndNode->m_mapSubFrame[strName] = (CWndFrame*)pFrame;
				}
			}
		}
		return 0;
	}
	g_pTangram->m_pActiveDocWnd = this;
	LRESULT lRes = 0;
	HWND hPWnd = (HWND)lParam;
	if (::IsWindow(hPWnd))
			lRes = ::SendMessage(::GetParent(m_hWnd), WM_TANGRAMDATA, 0, 1992);
	if (lRes)
	{
		m_pWndFrame = (CWndFrame*)lRes;
		IWndNode* pNode = nullptr;
		m_pWndFrame->Extend(m_pDocFrame->m_pTangramDoc->m_strDocID.AllocSysString(), CComBSTR(_T("")), &pNode);
		if (pNode)
		{
			pNode->put_SaveToConfigFile(true);
		}
	}
	if (m_pDocFrame)
	{
		IWndPage* pPage = nullptr;
		CComBSTR bstrTemplate(L"");
		auto it = m_pDocFrame->m_pTangramDoc->m_mapWndScript.find(m_strWndID);
		if (it != m_pDocFrame->m_pTangramDoc->m_mapWndScript.end())
			bstrTemplate = it->second.AllocSysString();
		//else
		//{
		//	if (::GetParent(m_hWnd) == NULL)
		//	{
		//		CString s = _T("");
		//		s.Format(_T("Do you want to create Tangram Document: \"%s\" from exists Common Document Template?"), m_pDocFrame->m_pTangramDoc->m_strDocID);
		//		CString strCaption = s;
		//		s.Format(_T("Creating Tangram Document: \"%s\""), m_pDocFrame->m_pTangramDoc->m_strDocID);
		//		if (::MessageBox(::GetActiveWindow(), strCaption, s, MB_YESNO) == IDYES)
		//		{
		//			CString _strPath = g_pTangram->m_strAppCommonDocPath + _T("CommonDocument\\");
		//			s.Format(_T("Please select Tangram Document \"%s\" Template"), m_pDocFrame->m_pTangramDoc->m_strDocID);
		//			bstrTemplate = g_pTangram->GetDocTemplateXml(s, _strPath, _T(".AppXml")).AllocSysString();
		//		}
		//	}
		//}

		LRESULT lRes = 0;
		HWND h = ::GetParent(m_hWnd);
		if (h != NULL)
		{
			h = ::GetAncestor(m_hWnd, GA_ROOT);
			lRes = ::SendMessage(h, WM_TANGRAMMSG, 20190305, 0);
		}
		else
			h = m_hWnd;

		//LRESULT lRes = ::SendMessage(h, WM_TANGRAMMSG, 20190305, 0);
		g_pTangram->CreateWndPage((LONGLONG)h, &pPage);
		if (pPage)
		{
			IWndNode* pNode = nullptr;
			CComBSTR bstrKey(m_pDocFrame->m_pTangramDoc->m_strDocID);
			pPage->CreateFrameWithDefaultNode((LONGLONG)m_hView, bstrKey, m_strWndID.AllocSysString(), bstrTemplate, false, &pNode);
			if (pNode)
			{
				IWndFrame* pFrame = nullptr;
				pNode->get_Frame(&pFrame);
				m_pDocFrame->m_pHostFrame = (CWndFrame*)pFrame;
				if (lRes != 0)
				{
					CWndPage* _pPage = (CWndPage*)pPage;
					_pPage->m_mapNeedSaveFrame[m_hView] = m_pDocFrame->m_pHostFrame;
				}
				m_pDocFrame->m_pHostFrame->m_pDoc = m_pDocFrame->m_pTangramDoc;
				m_pDocFrame->m_pTangramDoc->m_mapFrame[m_strWndID] = m_pDocFrame;
				m_pDocFrame->m_mapWnd[m_hWnd] = this;
				m_pDocFrame->m_pCurrentWnd = this;
				m_pDocFrame->m_pTangramDoc->m_pActiveWnd = this;
				m_pDocFrame->m_pHostFrame->m_nWndFrameType = lParam ? MDIChildFrame : SDIFrame;
				if (lParam == 0)
				{
					CString strFix = g_pTangram->m_strAppName;
					if (strFix == _T(""))
						strFix = g_pTangram->m_strExeName;
					CString strAppTitle = m_pDocFrame->m_pTangramDoc->m_pDocProxy->m_strAppName + _T(" - ") + strFix;
					if (strAppTitle != _T(""))
					{
						::SendMessage(m_hWnd, WM_TANGRAMSETAPPTITLE, (WPARAM)strAppTitle.GetBuffer(), 0);
					}
					strAppTitle.ReleaseBuffer();
				}
			}

			if (m_pWndFrame)
			{
				for (auto it2 : m_pWndFrame->m_pPage->m_mapCtrlBarFrame)
				{
					pNode = nullptr;
					it2.second->Extend(bstrKey, CComBSTR(L""), &pNode);
					if (pNode)
					{
						pNode->put_SaveToConfigFile(true);
						CtrlBarDocActiveNotify(m_pDocFrame->m_pTangramDoc, m_pDocFrame->m_pHostFrame->m_pWorkNode, pNode, it2.first);
					}
				}
			}
		}
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

void CTangramDocWnd::CtrlBarDocActiveNotify(ITangramDoc* pDoc, IWndNode* pNodeInDoc, IWndNode* pNodeInCtrlBar, HWND hCtrlBar)
{
	if (pDoc != nullptr)
	{
		CWndNode* pNode = (CWndNode*)pNodeInCtrlBar;
		switch (pNode->m_nViewType)
		{
		case Splitter:
		case TabbedWnd:
			for (auto it : pNode->m_vChildNodes)
			{
				CtrlBarDocActiveNotify(pDoc, pNodeInDoc, it, hCtrlBar);
			}
			break;
		default:
		{
			LRESULT lRes = ::SendMessage(m_pWndFrame->m_pPage->m_hWnd, WM_QUERYAPPPROXY, 0, 0);
			if (lRes > 0)
			{
				CTangramAppProxy* pProxy = (CTangramAppProxy*)lRes;
				pProxy->OnActiveDocument(pDoc, pNodeInDoc, pNodeInCtrlBar, hCtrlBar);
			}
			if (g_pTangram->m_pTangramCLRAppProxy)
			{
				g_pTangram->m_pTangramCLRAppProxy->OnActiveDocument(pDoc, pNodeInDoc, pNodeInCtrlBar, hCtrlBar);
			}
		}
		break;
		}
	}
}

// CWndFrame
CWndFrame::CWndFrame()
{
	m_strAsynKeys = _T("");
	m_strLastKey = _T("");
	m_strCurrentKey = _T("");
	m_strFrameName = _T("");
	m_bMDIChild = false;
	m_bDetached = false;
	m_bChromeFrame = false;
	m_pWebWnd = nullptr;
	m_pInitEventObj = nullptr;
	m_pWorkBenchFrame = nullptr;
	m_bTabbedMDIClient = false;
	m_bDesignerState = g_pTangram->m_bFrameDefaultState;
	m_hPWnd = nullptr;
	m_pBKWnd = nullptr;
	m_pPage = nullptr;
	m_pHostNode = nullptr;
	m_pWorkNode = nullptr;
	m_pRootNodes = nullptr;
	m_pBindingNode = nullptr;
	m_pDoc = nullptr;
	m_pWndFrameInfo = nullptr;
	m_pParentNode = nullptr;
	m_pTangramDocTemplate = nullptr;
	m_nWndFrameType = NOFrame;
#ifdef _DEBUG
	g_pTangram->m_nTangramFrame++;
#endif
}

CWndFrame::~CWndFrame()
{
#ifdef _DEBUG
	g_pTangram->m_nTangramFrame--;
#endif	
	//if (m_pWndFrameInfo)
	//	delete m_pWndFrameInfo;
	if (g_pTangram->m_pWndFrame == this)
		g_pTangram->m_pWndFrame = nullptr;
	for (auto it : g_pTangram->m_mapThreadInfo)
	{
		if (it.second)
		{
			auto it2 = it.second->m_mapTangramFrame.find(m_hHostWnd);
			if (it2 != it.second->m_mapTangramFrame.end())
			{
				it.second->m_mapTangramFrame.erase(it2);
				break;
			}
		}
	}
	if (m_pRootNodes)
		CCommonFunction::ClearObject<CWndNodeCollection>(m_pRootNodes);
	if (m_mapVal.size()) {
		for (auto it : m_mapVal) {
			::VariantClear(&it.second);
		}
		m_mapVal.clear();
	}
	if (m_pPage) {
		auto it = m_pPage->m_mapFrame.find(m_hHostWnd);
		if (it != m_pPage->m_mapFrame.end()) {
			m_pPage->m_mapFrame.erase(it);
			if (m_pPage->m_mapFrame.size() == 0)
				delete m_pPage;
		}
	}
	for (auto it : m_mapWndFrameProxy)
	{
		if (it.second->m_bAutoDelete)
			delete it.second;
	}
	m_mapWndFrameProxy.clear();
	m_hWnd = NULL;
}

void CWndFrame::HostPosChanged()
{
	if (::IsWindow(m_hWnd) == false)
		return;
	HWND hwnd = m_hWnd;
	CWndNode* pTopNode = m_pWorkNode;
	CWndFrame* _pFrame = this;
	while (pTopNode&&pTopNode->m_pRootObj != pTopNode)
	{
		_pFrame = pTopNode->m_pRootObj->m_pTangramNodeCommonData->m_pFrame;
		hwnd = _pFrame->m_hWnd;
		pTopNode = _pFrame->m_pWorkNode;
	}
	if (::IsWindow(hwnd) == false)
		return;

	RECT rt1;
	_pFrame->m_pWorkNode->m_pHostWnd->GetWindowRect(&rt1);
	_pFrame->GetParent().ScreenToClient(&rt1);
	HDWP dwh = BeginDeferWindowPos(1);
	dwh = ::DeferWindowPos(dwh, hwnd, HWND_TOP,
		rt1.left,
		rt1.top,
		rt1.right - rt1.left,
		rt1.bottom - rt1.top,
		SWP_FRAMECHANGED | SWP_NOACTIVATE
	);
	EndDeferWindowPos(dwh);
	UpdateVisualWPFMap(::GetParent(m_hWnd), false);
	if (m_pBKWnd&&::IsWindow(m_pBKWnd->m_hWnd))
	{
		::SetWindowPos(m_pBKWnd->m_hWnd, HWND_BOTTOM, 0, 0, rt1.right - rt1.left, rt1.bottom - rt1.top, SWP_NOACTIVATE | SWP_NOREDRAW);
	}
	//if (m_bTabbedMDIClient)
	{
		::SendMessage(::GetParent(m_hWnd), WM_QUERYAPPPROXY, 0, 19651965);
	}
}

CTangramXmlParse* CWndFrame::UpdateWndNode()
{
	for (auto it : m_mapNode) {
		CWndNode* pWindowNode = (CWndNode*)it.second;
		if (pWindowNode)
		{
			CComQIPtr<IWndContainer> pContainer(pWindowNode->m_pDisp);
			if (pContainer) {
				if (pWindowNode->m_nActivePage > 0) {
					CString strVal = _T("");
					strVal.Format(_T("%d"), pWindowNode->m_nActivePage);
					pWindowNode->m_pHostParse->put_attr(_T("activepage"), strVal);
				}
				pContainer->Save();
			}
			if (pWindowNode->m_nViewType == Splitter)
			{
				((CSplitterNodeWnd*)pWindowNode->m_pHostWnd)->Save();
			}

			for (auto it2 : pWindowNode->m_vChildNodes) {
				g_pTangram->UpdateWndNode(it2);
			}

			if (pWindowNode == pWindowNode->m_pRootObj&&pWindowNode->m_pTangramNodeCommonData->m_pOfficeObj) {
				g_pTangram->UpdateOfficeObj(pWindowNode->m_pTangramNodeCommonData->m_pOfficeObj, pWindowNode->m_pTangramNodeCommonData->m_pTangramParse->GetChild(_T("window"))->xml(), pWindowNode->m_pTangramNodeCommonData->m_pTangramParse->name());
			}
		}
	}
	if (m_mapNode.size())
		return m_mapNode.begin()->second->m_pTangramNodeCommonData->m_pTangramParse;
	return nullptr;
}

void CWndFrame::UpdateDesignerTreeInfo()
{
	if (m_bDesignerState&&g_pTangram->m_hChildHostWnd) {
		g_pTangram->m_pDesigningFrame = this;
		if (g_pTangram->m_pDocDOMTree&&::IsWindow(g_pTangram->m_pDocDOMTree->m_hWnd)) {
			g_pTangram->m_pDocDOMTree->DeleteItem(g_pTangram->m_pDocDOMTree->m_hFirstRoot);
			if (g_pTangram->m_pDocDOMTree->m_pHostXmlParse) {
				delete g_pTangram->m_pDocDOMTree->m_pHostXmlParse;
				g_pTangram->m_pDocDOMTree->m_pHostXmlParse = nullptr;
			}
			CWndNode* pNode = g_pTangram->m_pDesigningFrame->m_pWorkNode;
			if (pNode == nullptr) {
				return;
			}

			CString _strName = pNode->m_strName;
			_strName += _T("-indesigning");
			_strName.MakeLower();
			CTangramXmlParse* pParse = nullptr;
			auto it = m_mapNode.find(_strName);
			if (it != m_mapNode.end())
				pParse = it->second->m_pTangramNodeCommonData->m_pTangramParse;
			else
				pParse = pNode->m_pTangramNodeCommonData->m_pTangramParse;
			g_pTangram->InitDesignerTreeCtrl(pParse->xml());
		}
	}
}

CWndNode* CWndFrame::OpenXtmlDocument(CTangramXmlParse* _pParse, CString strKey, CString strFile)
{
	m_pWorkNode = new CComObject<CWndNode>;
	m_pWorkNode->m_pRootObj = m_pWorkNode;
	CTangramNodeCommonData* pCommonData = new CTangramNodeCommonData();
	m_pWorkNode->m_pTangramNodeCommonData = pCommonData;
	pCommonData->m_pFrame = this;
	pCommonData->m_pPage = m_pPage;
	pCommonData->m_pTangramParse = _pParse;
	CTangramXmlParse* pParse = _pParse->GetChild(_T("window"));
	m_pWorkNode->m_pHostParse = pParse->GetChild(_T("node"));

	CreateWndPage();
	m_mapNode[strKey] = m_pWorkNode;

	if (m_pPage)
		m_pPage->Fire_ExtendXmlComplete(strFile.AllocSysString(), (long)m_hHostWnd, m_pWorkNode);
	m_pWorkNode->m_strKey = strKey;
	m_pWorkNode->Fire_ExtendComplete();

	if (m_bChromeFrame)
	{
		IPCMsg* msg = new IPCMsg;
		msg->m_strType = _T("WndFrame_Extended");
		msg->m_strKey = m_strFrameName;
		msg->m_strKey += _T("@");
		msg->m_strKey += m_strCurrentKey;
		CString s = _T("");
		s.Format(_T("%I64d"), m_hWnd);
		msg->m_strData = s;

		::PostMessage(m_hWnd, WM_BACKGROUNDWEBPROXY_MSG, (WPARAM)msg, (WPARAM)0);
	}

	return m_pWorkNode;
}

int CWndFrame::DispatchInternal(const Message& msg)
{
	CString strChannel = msg.m_strChannel;
	CString strArg1 = msg.m_strArg1;
	CString strArg2 = msg.m_strArg2;
	int index = 0;
	if (strChannel.Find(L"NODE_MESSAGE:") == 0)
	{
		index = strChannel.Find(':');
		strChannel = strChannel.Mid(index + 1);
		if (strChannel.Compare(L"ALL") == 0)
		{
			auto it = m_mapNode.find(m_strCurrentKey);
			if (it != m_mapNode.end())
			{
				CWndNode* pRootNode = it->second;
				// TODO: Other type nodes
				map<CString, CWndNode*> mapNodes = pRootNode->m_pTangramNodeCommonData->m_mapCLRNodes;
				for (auto it2 = mapNodes.begin(); it2 != mapNodes.end(); ++it2)
				{
					CWndNode* pNode = it2->second;
					if (pNode->m_strName.CompareNoCase(msg.m_strSourceNodeName) == 0)
					{
						// TODO: Compare framename, layername and nodename
						continue;
					}
					pNode->Fire_IPCMsg(CComBSTR(strArg1), CComBSTR(strArg2));
				}

			}
		}
		else if (strChannel.Find(L"NODE_NAME:") == 0)
		{
			index = strChannel.Find(':');
			CString nodeName = strChannel.Mid(index + 1);
			auto it = m_mapNode.find(m_strCurrentKey);
			if (it != m_mapNode.end())
			{
				CWndNode* pRootNode = it->second;
				// TODO: Other type nodes
				auto it = pRootNode->m_pTangramNodeCommonData->m_mapCLRNodes.find(nodeName);
				if (it != pRootNode->m_pTangramNodeCommonData->m_mapCLRNodes.end())
				{
					CWndNode* pNode = it->second;
					pNode->Fire_IPCMsg(CComBSTR(strArg1), CComBSTR(strArg2));
				}
			}
		}
		return 1;
	}
	return 0;
}

BOOL CWndFrame::CreateWndPage()
{
	if (::IsWindow(m_hWnd) == false)
		SubclassWindow(m_hHostWnd);
	HWND hPWnd = NULL;
	if (m_hPWnd&&::IsWindow(m_hPWnd))
		hPWnd = m_pPage->m_hWnd;
	else
		hPWnd = ::GetParent(m_hWnd);

	m_pWorkNode->m_strName.Trim();
	m_pWorkNode->m_strName.MakeLower();
	m_pWorkNode->InitWndNode();
	HWND hWnd = NULL;
	if (m_pWorkNode->m_pObjClsInfo) {
		RECT rc;
		CWnd* pParentWnd = CWnd::FromHandle(hPWnd);
		m_pWorkNode->m_pRootObj = m_pWorkNode;
		CCreateContext	m_Context;
		m_Context.m_pNewViewClass = m_pWorkNode->m_pObjClsInfo;
		CWnd* pWnd = (CWnd*)m_pWorkNode->m_pObjClsInfo->CreateObject();
		GetWindowRect(&rc);
		if (pParentWnd)
			pParentWnd->ScreenToClient(&rc);

		pWnd->Create(NULL, _T(""), WS_CHILD | WS_VISIBLE, rc, pParentWnd, 0, &m_Context);
		hWnd = pWnd->m_hWnd;
		pWnd->ModifyStyle(0, WS_CLIPSIBLINGS);
		::SetWindowPos(pWnd->m_hWnd, HWND_BOTTOM, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, SWP_DRAWFRAME | SWP_SHOWWINDOW | SWP_NOACTIVATE);//|SWP_NOREDRAWSWP_NOZORDER);
	}

	CTangramXmlParse* pWndParse = m_pWorkNode->m_pTangramNodeCommonData->m_pTangramParse->GetChild(_T("docplugin"));
	if (pWndParse)
	{
		CString strPlugID = _T("");
		HRESULT hr = S_OK;
		BOOL bHavePlugin = false;
		int nCount = pWndParse->GetCount();
		for (int i = 0; i < nCount; i++)
		{
			CTangramXmlParse* pChild = pWndParse->GetChild(i);
			CComBSTR bstrXml(pChild->xml());
			strPlugID = pChild->text();
			strPlugID.Trim();
			strPlugID.MakeLower();
			if (strPlugID != _T(""))
			{
				int nPos = strPlugID.Find(_T(","));
				CComBSTR bstrPlugIn(strPlugID);
				CComPtr<IDispatch> pDisp;
				//for COM Component:
				if (nPos == -1) {
					hr = pDisp.CoCreateInstance(strPlugID.AllocSysString());
					if (hr == S_OK)
					{
						m_pWorkNode->m_pTangramNodeCommonData->m_PlugInDispDictionary[strPlugID] = pDisp.p;
						pDisp.p->AddRef();
					}

					m_pWorkNode->Fire_NodeAddInCreated(pDisp.p, bstrPlugIn, bstrXml);
				}
				else //for .NET Component
				{
					hr = g_pTangram->CreateCLRObj(bstrPlugIn, &pDisp);
					if (hr == S_OK)
					{
						m_pWorkNode->m_pTangramNodeCommonData->m_PlugInDispDictionary[strPlugID] = pDisp.p;

						bstrPlugIn = strPlugID.AllocSysString();
						m_pWorkNode->Fire_NodeAddInCreated(pDisp, bstrPlugIn, bstrXml);
					}
				}
				if (m_pPage&&pDisp)
					m_pPage->Fire_AddInCreated(m_pWorkNode, pDisp, bstrPlugIn, bstrXml);
				::SysFreeString(bstrPlugIn);
				bHavePlugin = true;
			}
			::SysFreeString(bstrXml);
		}

		if (bHavePlugin)
			m_pWorkNode->Fire_NodeAddInsCreated();
	}
	m_pWorkNode->m_bCreated = true;
	return true;
}

STDMETHODIMP CWndFrame::get_RootNodes(IWndNodeCollection** pNodeColletion)
{
	if (m_pRootNodes == nullptr) {
		CComObject<CWndNodeCollection>::CreateInstance(&m_pRootNodes);
		m_pRootNodes->AddRef();
	}

	m_pRootNodes->m_pNodes->clear();
	for (auto it : m_mapNode) {
		m_pRootNodes->m_pNodes->push_back(it.second);
	}

	return m_pRootNodes->QueryInterface(IID_IWndNodeCollection, (void**)pNodeColletion);
}

STDMETHODIMP CWndFrame::get_FrameData(BSTR bstrKey, VARIANT* pVal)
{
	CString strKey = OLE2T(bstrKey);

	if (strKey != _T("")) {
		::SendMessage(m_hWnd, WM_TANGRAMMSG, (WPARAM)strKey.GetBuffer(), 0);
		strKey.Trim();
		strKey.MakeLower();
		auto it = m_mapVal.find(strKey);
		if (it != m_mapVal.end())
			*pVal = it->second;
		strKey.ReleaseBuffer();
	}
	return S_OK;
}

STDMETHODIMP CWndFrame::put_FrameData(BSTR bstrKey, VARIANT newVal)
{
	CString strKey = OLE2T(bstrKey);

	if (strKey == _T(""))
		return S_OK;
	strKey.Trim();
	strKey.MakeLower();
	m_mapVal[strKey] = newVal;
	return S_OK;
}

STDMETHODIMP CWndFrame::Detach(void)
{
	if (::IsWindow(m_hWnd))
	{
		m_bDetached = true;
		::ShowWindow(m_pWorkNode->m_pHostWnd->m_hWnd, SW_HIDE);
		RECT rect;
		m_pWorkNode->m_pHostWnd->GetWindowRect(&rect);
		m_hHostWnd = UnsubclassWindow(true);
		if (::IsWindow(m_hHostWnd)) {
			HWND m_hParentWnd = ::GetParent(m_hHostWnd);
			CWnd* pParent = CWnd::FromHandle(m_hParentWnd);
			pParent->ScreenToClient(&rect);
			::SetWindowPos(m_hHostWnd, NULL, rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top, SWP_FRAMECHANGED | SWP_SHOWWINDOW);
		}
	}
	return S_OK;
}

STDMETHODIMP CWndFrame::Attach(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	if (!::IsWindow(m_hWnd)) {
		m_bDetached = false;
		::ShowWindow(m_pWorkNode->m_pHostWnd->m_hWnd, SW_SHOW);
		SubclassWindow(m_hHostWnd);
	}
	HostPosChanged();
	return S_OK;
}

STDMETHODIMP CWndFrame::ModifyHost(LONGLONG hHostWnd)
{
	HWND _hHostWnd = (HWND)hHostWnd;
	if (!::IsWindow(_hHostWnd) || m_hWnd == _hHostWnd)
	{
		return S_OK;
	}
	if (m_pWorkNode == nullptr)
		return S_FALSE;
	HWND hParent = (HWND)::GetParent(_hHostWnd);
	CWindow m_Parent;
	RECT rc;
	m_pWorkNode->m_pHostWnd->GetWindowRect(&rc);
	if (::IsWindow(m_hWnd)) {
		HWND hTangramWnd = m_pPage->m_hWnd;
		auto it = g_pTangram->m_mapWindowPage.find(hTangramWnd);
		if (it != g_pTangram->m_mapWindowPage.end())
			g_pTangram->m_mapWindowPage.erase(it);
		m_pPage->m_hWnd = hTangramWnd;
		g_pTangram->m_mapWindowPage[hTangramWnd] = m_pPage;

		auto it2 = m_pPage->m_mapFrame.find(m_hWnd);
		if (it2 != m_pPage->m_mapFrame.end()) {
			m_pPage->m_mapFrame.erase(it2);
			m_pPage->m_mapFrame[_hHostWnd] = this;
			m_pPage->m_mapWnd[m_strFrameName] = _hHostWnd;
			DWORD dwID = ::GetWindowThreadProcessId(_hHostWnd, NULL);
			TRACE(_T("ExtendEx ThreadInfo:%x\n"), dwID);
			TangramThreadInfo* pThreadInfo = g_pTangram->GetThreadInfo(dwID);
			theApp.SetHook(dwID);
			auto iter = pThreadInfo->m_mapTangramFrame.find(m_hWnd);
			if (iter != pThreadInfo->m_mapTangramFrame.end()) {
				pThreadInfo->m_mapTangramFrame.erase(iter);
				pThreadInfo->m_mapTangramFrame[_hHostWnd] = this;
			}
		}

		m_hHostWnd = UnsubclassWindow(true);
		if (::IsWindow(m_hHostWnd)) {
			HWND m_hParentWnd = ::GetParent(m_hHostWnd);
			m_Parent.Attach(m_hParentWnd);
			m_Parent.ScreenToClient(&rc);
			m_Parent.Detach();
			::MoveWindow(m_hHostWnd, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, true);
			::ShowWindow(m_hHostWnd, SW_SHOW);
		}
	}

	SubclassWindow(_hHostWnd);
	m_hHostWnd = _hHostWnd;
	::GetWindowRect(_hHostWnd, &rc);
	m_Parent.Attach(hParent);
	m_Parent.ScreenToClient(&rc);
	m_Parent.Detach();
	for (auto it : m_mapNode)
	{
		if (it.second != m_pWorkNode)
		{
			::SetParent(it.second->m_pHostWnd->m_hWnd, m_pWorkNode->m_pHostWnd->m_hWnd);
		}
	}
	::SetParent(m_pWorkNode->m_pHostWnd->m_hWnd, ::GetParent(_hHostWnd));
	::SetWindowPos(m_pWorkNode->m_pHostWnd->m_hWnd, NULL, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, SWP_FRAMECHANGED | SWP_SHOWWINDOW);
	HostPosChanged();
	return S_OK;
}

STDMETHODIMP CWndFrame::get_HWND(LONGLONG* pVal)
{
	if (m_hWnd)
		*pVal = (LONGLONG)m_hWnd;
	else
		*pVal = (LONGLONG)m_hHostWnd;
	return S_OK;
}

STDMETHODIMP CWndFrame::get_VisibleNode(IWndNode** pVal)
{
	if (m_pWorkNode)
		*pVal = m_pWorkNode;
	return S_OK;
}

STDMETHODIMP CWndFrame::get_WndPage(IWndPage** pVal)
{
	if (m_pPage)
		*pVal = m_pPage;

	return S_OK;
}

STDMETHODIMP CWndFrame::Extend(BSTR bstrKey, BSTR bstrXml, IWndNode** ppRetNode)
{
	if (::GetWindowLong(m_hWnd, GWL_STYLE)&MDIS_ALLCHILDSTYLES)
		m_nWndFrameType = WndFrameType::MDIFrame;

	CString _strXml = OLE2T(bstrXml);
	if (m_pPage->m_strPageFileName == _T(""))
	{
		m_pPage->m_strPageFileName = g_pTangram->m_strExeName;
		m_pPage->m_strPageFilePath = g_pTangram->m_strConfigDataFile;
	}
	DWORD dwID = ::GetWindowThreadProcessId(m_hHostWnd, NULL);
	TRACE(_T("ExtendEx ThreadInfo:%x\n"), dwID);
	TangramThreadInfo* pThreadInfo = g_pTangram->GetThreadInfo(dwID);
	theApp.SetHook(dwID);

	CString strCurrentKey = OLE2T(bstrKey);
	if (strCurrentKey == _T(""))
		strCurrentKey = _T("default");
	if (m_strCurrentKey != strCurrentKey)
	{
		m_strLastKey = m_strCurrentKey;
		m_strCurrentKey = strCurrentKey;
	}
	g_pTangram->m_pPage = m_pPage;
	g_pTangram->m_pWndFrame = this;

	m_strCurrentKey = m_strCurrentKey.MakeLower();
	g_pTangram->m_strCurrentKey = m_strCurrentKey;
	CString strXml = _T("");
	auto it = m_mapNode.find(m_strCurrentKey);

	CWndNode* pOldNode = m_pWorkNode;
	if (it != m_mapNode.end())
		m_pWorkNode = it->second;
	else
	{
		bool bAtTemplate = false;
		LRESULT l = ::SendMessage(m_pPage->m_hWnd, WM_TANGRAMGETXML, (WPARAM)LPCTSTR(m_strFrameName), (WPARAM)LPCTSTR(m_strCurrentKey));
		if (l)
		{
			auto it = g_pTangram->m_mapValInfo.find(m_strFrameName + L"_" + m_strCurrentKey);
			if (it != g_pTangram->m_mapValInfo.end())
			{
				strXml = OLE2T(it->second.bstrVal);
				//::VariantClear(&it->second);
				//g_pTangram->m_mapValInfo.erase(it);
			}
			else
			{
				strXml = (LPCTSTR)l;
			}
		}
		else
		{
			CTangramMDIChildWnd* pWnd = (CTangramMDIChildWnd*)::SendMessage(m_pPage->m_hWnd, WM_TANGRAMMSG, 0, 19631222);
			if (pWnd == nullptr&&m_pTangramDocTemplate&&m_strCurrentKey != _T("newdocument"))
			{
				CString strKey = m_strFrameName;
				strKey.Replace(_T("@"), _T("_"));
				auto it = m_pTangramDocTemplate->m_mapXml.find(strKey);
				if (it != m_pTangramDocTemplate->m_mapXml.end())
				{
					CTangramXmlParse parse;
					if (parse.LoadXml(it->second))
					{
						CTangramXmlParse* pChild = parse.GetChild(m_strCurrentKey);
						if (pChild)
						{
							bAtTemplate = true;
							strXml = pChild->xml();
						}
						else
						{
							if (parse.GetChild(_T("window")))
							{
								bAtTemplate = true;
								strXml = parse.xml();
							}
						}
					}
				}
			}
			if (bAtTemplate == false)
			{
				if (m_strCurrentKey != _T("newdocument"))
				{
					CString _str = _T("@") + m_strFrameName + _T("@") + m_pPage->m_strConfigFileNodeName;
					CString strKey2 = OLE2T(bstrKey);
					strKey2.MakeLower();
					if (strKey2 == _T(""))
						strKey2 = _T("default");
					CString _strKey = strKey2 + _str;
					auto itKey = m_pPage->m_strMapKey.find(_strKey);
					if (itKey != m_pPage->m_strMapKey.end()) {
						strXml = itKey->second;
					}
					else
					{
						CTangramXmlParse* m_pTangramPageParse = nullptr;
						CTangramXmlParse* m_pTangramPageParse2 = nullptr;
						if (m_pPage->m_bDoc == false && ::PathFileExists(m_pPage->m_strPageFilePath))
						{
							CTangramXmlParse m_Parse;
							if (m_Parse.LoadFile(m_pPage->m_strPageFilePath))
							{
								m_pTangramPageParse = m_Parse.GetChild(_T("tangrampage"));
								if (m_pTangramPageParse)
								{
									m_pTangramPageParse2 = m_pTangramPageParse->GetChild(m_pPage->m_strConfigFileNodeName);
									if (m_pTangramPageParse2)
									{
										int nCount = m_pTangramPageParse2->GetCount();
										for (int i = 0; i < nCount; i++)
										{
											CTangramXmlParse* _pParse = m_pTangramPageParse2->GetChild(i);
											CString _str = _T("@") + _pParse->name() + _T("@") + m_pPage->m_strConfigFileNodeName;
											int nCount2 = _pParse->GetCount();
											for (int i = 0; i < nCount2; i++)
											{
												CTangramXmlParse* _pParse2 = _pParse->GetChild(i);
												m_pPage->m_strMapKey[_pParse2->name() + _str] = _pParse2->xml();
											}
										}
									}
								}
							}

							auto itKey = m_pPage->m_strMapKey.find(_strKey);
							if (strXml == _T("") && itKey != m_pPage->m_strMapKey.end()) {
								strXml = itKey->second;
							}
						}
					}
					if (strXml == _T(""))
						strXml = _strXml;
					if (strXml == _T(""))
						strXml = _T("<default><window><node name=\"Start\" /></window></default>");;
				}
				else
					strXml = _strXml;
			}
		}

		Unlock();
		m_pPage->Fire_BeforeExtendXml(CComBSTR(strXml), (long)m_hHostWnd);
		m_pWorkNode = g_pTangram->ExtendEx((long)m_hHostWnd, _T(""), strXml);
		if (m_pWorkNode == nullptr)
			return S_FALSE;
		if (::GetWindowLong(::GetParent(m_hWnd), GWL_EXSTYLE)&WS_EX_MDICHILD)
			m_bMDIChild = true;
		//if (g_pTangram->m_pTangramPackageProxy)
		//{
		//	g_pTangram->m_pTangramPackageProxy->m_strCurrentXtmlFilePath = _T("");
		//}
	}
	m_pBindingNode = m_pWorkNode->m_pTangramNodeCommonData->m_pHostClientView ? m_pWorkNode->m_pTangramNodeCommonData->m_pHostClientView->m_pWndNode : nullptr;

	g_pTangram->m_strCurrentKey = _T("");
	*ppRetNode = (IWndNode*)m_pWorkNode;
	for (auto it : g_pTangram->m_mapTangramAppProxy)
	{
		it.second->OnExtendComplete(m_hHostWnd, strXml, m_pWorkNode);
	}
	if (g_pTangram->m_pTangramCLRAppProxy)
		g_pTangram->m_pTangramCLRAppProxy->OnExtendComplete(m_hHostWnd, strXml, m_pWorkNode);

	if (pOldNode&&pOldNode != m_pWorkNode)
	{
		RECT  rc;
		if (::IsWindow(pOldNode->m_pHostWnd->m_hWnd))
			::GetWindowRect(pOldNode->m_pHostWnd->m_hWnd, &rc);
		CWnd* pWnd = m_pWorkNode->m_pHostWnd;
		HWND hParent = ::GetParent(m_hWnd);

		CWnd::FromHandle(hParent)->ScreenToClient(&rc);
		for (auto it : m_mapNode)
		{
			HWND hwnd = it.second->m_pHostWnd->m_hWnd;
			BOOL bTop = (it.second == m_pWorkNode);
			it.second->m_bTopObj = bTop;
			::SetWindowLongPtr(hwnd, GWLP_ID, bTop ? m_pWorkNode->m_nID : 0);
			::SetParent(hwnd, bTop ? hParent : pWnd->m_hWnd);
			if (!bTop)
			{
				::ShowWindow(hwnd, SW_HIDE);
			}
		}

		::SetWindowPos(pWnd->m_hWnd, NULL, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, SWP_SHOWWINDOW | SWP_FRAMECHANGED);
		if (m_pWorkNode != nullptr) {
			if (m_pWorkNode->m_nViewType != Splitter) {
				if (m_pWorkNode->m_pHostWnd)
					m_pWorkNode->m_pHostWnd->ModifyStyleEx(WS_EX_WINDOWEDGE | WS_EX_CLIENTEDGE, 0);
			}
			HRESULT hr = S_OK;
			int cConnections = g_pTangram->m_vec.GetSize();
			if (cConnections) {
				CComVariant avarParams[3];
				avarParams[2] = (long)m_hHostWnd;
				avarParams[2].vt = VT_I4;
				avarParams[1] = strXml.AllocSysString();
				avarParams[1].vt = VT_BSTR;
				avarParams[0] = (IWndNode*)m_pWorkNode;
				avarParams[0].vt = VT_DISPATCH;
				DISPPARAMS params = { avarParams, NULL, 3, 0 };
				for (int iConnection = 0; iConnection < cConnections; iConnection++) {
					g_pTangram->Lock();
					CComPtr<IUnknown> punkConnection = g_pTangram->m_vec.GetAt(iConnection);
					g_pTangram->Unlock();
					IDispatch * pConnection = static_cast<IDispatch *>(punkConnection.p);
					if (pConnection) {
						CComVariant varResult;
						hr = pConnection->Invoke(1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
					}
				}
			}
		}

		for (auto it : m_mapWndFrameProxy)
		{
			it.second->OnExtend(m_pWorkNode, m_strCurrentKey, strXml);
		}

		if (m_pBKWnd&&m_pBKWnd->m_pFrame)
		{
			IWndNode* pNode = nullptr;
			m_pBKWnd->m_pFrame->Extend(CComBSTR(L"default"), CComBSTR(L""), &pNode);
		}

	}
	HostPosChanged();
	::PostMessage(m_hWnd, WM_TANGRAMMSG, 0, 20180115);
	return S_OK;
}

STDMETHODIMP CWndFrame::ExtendFromWeb(BSTR bstrURLBase, BSTR bstrKey, BSTR bstrOrg, BSTR bstrRepo, BSTR bstrBranch, BSTR bstrPath)
{
	return S_OK;
}

STDMETHODIMP CWndFrame::SendIPCMessage(int MessageType, BSTR bstrMessage, BSTR bstrMessageData)
{
	TangramIPCMessageData m_Data;
	m_Data.m_nType = MessageType;
	m_Data.m_strMessage = OLE2T(bstrMessage);
	m_Data.m_strMessageData = OLE2T(bstrMessageData);
	::SendMessage(m_hWnd, WM_CHROMEMSG, 0, (LPARAM)&m_Data);
	return S_OK;
}

STDMETHODIMP CWndFrame::get_CurrentNavigateKey(BSTR* pVal)
{
	*pVal = m_strCurrentKey.AllocSysString();
	return S_OK;
}

void CWndFrame::UpdateVisualWPFMap(HWND hParent, BOOL bSized)
{
	for (auto it : m_mapWPFView)
	{
		HWND hWnd = it.first;
		if (::IsChild(hParent, hWnd))
		{
			auto it2 = m_mapVisibleWPFView.find(hWnd);
			if (::IsWindowVisible(hWnd) == TRUE)
			{
				if (it2 == m_mapVisibleWPFView.end())
				{
					m_mapVisibleWPFView[hWnd] = it.second;
				}
				it.second->m_pTangramWPFObj->ShowVisual(false);
				it.second->m_pTangramWPFObj->ShowVisual(true);
				it.second->m_pTangramWPFObj->InvalidateVisual();
				long nIndex = (long)::GetWindowLongPtr(it.second->m_hWnd, GWLP_USERDATA);
				if (bSized || nIndex == 1963)
				{
					::SetWindowLongPtr(it.second->m_hWnd, GWLP_USERDATA, 0);

					RECT rc;
					::GetWindowRect(it.second->m_hWnd, &rc);
					CWnd* pParent = it.second->GetParent();
					pParent->ScreenToClient(&rc);
					::SetWindowPos(it.second->m_hWnd, HWND_TOP, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top + 1, SWP_DRAWFRAME);
					::SetWindowPos(it.second->m_hWnd, HWND_TOP, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, SWP_NOACTIVATE | SWP_NOREDRAW);
				}
			}
			else
			{
				if (it2 != m_mapVisibleWPFView.end())
				{
					it.second->m_pTangramWPFObj->ShowVisual(false);
					m_mapVisibleWPFView.erase(it2);
				}
			}
		}
	}
}

void CWndFrame::CreateBKWnd()
{
	CString strPath = _T("");
	::GetModuleFileName(NULL, g_pTangram->m_szBuffer, MAX_PATH);
	CString str = CString(g_pTangram->m_szBuffer);
	if (::FindResource(NULL, _T("MDICLIENTBK.html"), MAKEINTRESOURCE(23)) == nullptr)
	{
		CString strURL = str + _T(".html");
		if (::PathFileExists(strURL))
			strPath = strURL;
		else
			strPath = _T("res://") + g_pTangram->m_strProgramFilePath + _T("\\Tangram\\TangramInit.dll/hostview.htm");
	}
	else
	{
		strPath = _T("res://") + str + _T("/MDICLIENTBK.html");
	}

	if (m_pBKWnd == nullptr)
	{
		m_pBKWnd = new CBKWnd();
		HWND hwnd = ::CreateWindowEx(NULL, _T("Tangram Window Class"), _T("mdibk"), WS_CHILD | WS_VISIBLE | WS_CLIPCHILDREN | WS_CLIPSIBLINGS, 0, 0, 0, 0, m_hHostWnd, 0, theApp.m_hInstance, nullptr);
		m_pBKWnd->SubclassWindow(hwnd);
		m_pBKWnd->m_hChild = ::CreateWindowEx(NULL, _T("Tangram Window Class"), _T(""), WS_CHILD | WS_VISIBLE | WS_CLIPCHILDREN | WS_CLIPSIBLINGS, 0, 0, 0, 0, hwnd, 0, theApp.m_hInstance, nullptr);
		m_pBKWnd->m_strURL = strPath;
		CWndPage* pPage = m_pPage;
		IWndFrame* pFrame = nullptr;
		pPage->CreateFrame(CComVariant(0), CComVariant((LONGLONG)m_pBKWnd->m_hChild), CComBSTR(L"ClientFrame"), &pFrame);
		CString strXml = _T("");
		strXml.Format(_T("<mdiclient><window><node name=\"mdiclient\" id=\"activex\" cnnid=\"%s\" /></window></mdiclient>"), strPath);
		IWndNode* pNode = nullptr;
		pFrame->Extend(CComBSTR(L"default"), strXml.AllocSysString(), &pNode);
		m_pPage->m_pBKFrame = m_pBKWnd->m_pFrame = (CWndFrame*)pFrame;
		g_pTangram->m_mapBKFrame[m_pBKWnd->m_hChild] = m_pBKWnd->m_pFrame;
	}
}

void CWndFrame::Destroy()
{
	CWndNode* pWndNode = nullptr;
	CString strPlugID = _T("");
	for (auto it : m_mapNode)
	{
		pWndNode = it.second;
		if (pWndNode->m_pTangramNodeCommonData->m_pTangramParse)
		{
			CTangramXmlParse* pParse = pWndNode->m_pTangramNodeCommonData->m_pTangramParse->GetChild(_T("docplugin"));
			if (pParse)
			{
				int nCount = pParse->GetCount();
				for (int i = 0; i < nCount; i++)
				{
					CTangramXmlParse* pChild = pParse->GetChild(i);
					strPlugID = pChild->text();
					strPlugID.Trim();
					if (strPlugID != _T(""))
					{
						if (strPlugID.Find(_T(",")) == -1)
						{
							strPlugID.MakeLower();
							IDispatch* pDisp = (IDispatch*)pWndNode->m_pTangramNodeCommonData->m_PlugInDispDictionary[strPlugID];
							if (pDisp)
							{
								pWndNode->m_pTangramNodeCommonData->m_PlugInDispDictionary.RemoveKey(LPCTSTR(strPlugID));
								pDisp->Release();
							}
						}
					}
				}
			}

			pWndNode->m_pTangramNodeCommonData->m_PlugInDispDictionary.RemoveAll();
		}
	}
}

void CWndFrame::OnFinalMessage(HWND hWnd)
{
	HWND hParent = ::GetParent(hWnd);
	if (::IsWindow(hParent))
		::PostMessage(hParent, WM_TANGRAMMSG, 4096, 0);
	__super::OnFinalMessage(hWnd);
}

LRESULT CWndFrame::OnHScroll(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	LRESULT hr = DefWindowProc(uMsg, wParam, lParam);
	if (m_pBKWnd)
	{
		RECT rect;
		::GetClientRect(m_hWnd, &rect);
		if (::IsWindow(m_pBKWnd->m_hWnd))
			::SetWindowPos(m_pBKWnd->m_hWnd, HWND_BOTTOM, 0, 0, rect.right, rect.bottom, SWP_NOREPOSITION | SWP_NOSENDCHANGING | SWP_NOACTIVATE);
		else
			::InvalidateRect(m_hWnd, &rect, true);
		return hr;
	}
	return hr;
}

LRESULT CWndFrame::OnIPCMsg(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&) {
	LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
	IPCMsg* pIPCInfo = (IPCMsg*)lParam;
	m_pPage->Fire_IPCMsg(this, CComBSTR(pIPCInfo->m_strType), CComBSTR(pIPCInfo->m_strKey), CComBSTR(pIPCInfo->m_strData));
	return lRes;
}

LRESULT CWndFrame::OnMouseActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (::GetModuleHandle(_T("chrome.dll")))
	{
		if (g_pTangram->m_pActiveHtmlWnd)
		{
			g_pTangram->m_pActiveHtmlWnd = nullptr;
		}
	}
	if ((long)(g_pTangram->m_pActiveAppProxy)>1)
	{
		HWND hMenuWnd = g_pTangram->m_pActiveAppProxy->GetActivePopupMenu(nullptr);
		if (::IsWindow(hMenuWnd))
			::PostMessage(hMenuWnd, WM_CLOSE, 0, 0);
	}
	if (m_pBKWnd == nullptr)
	{
		g_pTangram->m_hActiveWnd = 0;
		g_pTangram->m_bWinFormActived = false;
		g_pTangram->m_pActiveNode = nullptr;
		g_pTangram->m_pWndFrame = nullptr;
	}
	//bug fix for winform:
	//++++++++++++++++begin+++++++++++
	HWND hTop = ::GetAncestor(m_hWnd, GA_ROOT);
	if (hTop != nullptr&&g_pTangram->m_pCLRProxy)
	{
		g_pTangram->m_bWinFormActived = g_pTangram->m_pCLRProxy->IsWinForm(hTop);
		if (g_pTangram->m_bWinFormActived)
		{
			g_pTangram->m_hActiveWnd = hTop;
			g_pTangram->m_pWndFrame = this;
		}
	}
	//++++++++++++++++end+++++++++++

	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CWndFrame::OnShowWindow(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
	if (wParam == 0 && m_pWorkBenchFrame&&::GetWindow(m_hWnd, GW_CHILD) == nullptr)
	{
		HWND hFirst = ::GetWindow(m_hWnd, GW_HWNDFIRST);
		if (hFirst&&hFirst != m_hWnd)
		{
			::GetClassName(hFirst, g_pTangram->m_szBuffer, MAX_PATH);
			CString strName = CString(g_pTangram->m_szBuffer);
			if (strName == _T("SWT_Window0"))
			{
				HWND hWnd = UnsubclassWindow(true);
				if (hWnd)
				{
					SubclassWindow(hFirst);
					auto it = m_pPage->m_mapFrame.find(hWnd);
					if (it != m_pPage->m_mapFrame.end())
					{
						m_pDoc->m_pDocProxy->m_bCanDestroyFrame = false;
						m_pWorkBenchFrame->m_hClient = m_hWnd;
						::SetWindowLongPtr(hWnd, GWLP_ID, 0);
						::SetWindowLongPtr(m_hWnd, GWLP_ID, AFX_IDW_PANE_FIRST);
						m_hHostWnd = m_hWnd;
						m_pPage->m_mapFrame.erase(it);
						m_pPage->m_mapFrame[m_hWnd] = this;
						m_pPage->m_mapWnd[m_strFrameName] = m_hWnd;
						TangramThreadInfo* pThreadInfo = g_pTangram->GetThreadInfo(::GetWindowThreadProcessId(m_hWnd, NULL));
						auto iter = pThreadInfo->m_mapTangramFrame.find(hWnd);
						if (iter != pThreadInfo->m_mapTangramFrame.end()) {
							pThreadInfo->m_mapTangramFrame.erase(iter);
							pThreadInfo->m_mapTangramFrame[m_hWnd] = this;
						}
					}
				}
			}
		}
	}
	else
	{
		if (wParam&&g_pTangram->m_pMDIMainWnd&&g_pTangram->m_pMDIMainWnd->m_hMDIClient == m_hWnd)
		{
			TRACE(_T("\n"));
		}
	}
	return lRes;
}

LRESULT CWndFrame::OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (g_pTangram->m_pCLRProxy) {
		g_pTangram->m_pCLRProxy->ReleaseTangramObj((IWndFrame*)this);
	}
	if (m_mapNodeScript.size())
	{
		this->UpdateWndNode();
		for (auto it : m_mapNodeScript)
		{
			CString strPath = it.first;
			CString s = it.second->m_pHostParse->xml();
			CString str = _T("");
			str.Format(_T("<nodexml><window>%s</window></nodexml>"), s);
			CTangramXmlParse parse;
			parse.LoadXml(str); 
			parse.SaveFile(it.first);
		}
	}
	if (m_pBKWnd)
		m_pBKWnd->DestroyWindow();
	if (g_pTangram->m_pDesigningFrame&&g_pTangram->m_pDesigningFrame == this)
		g_pTangram->m_pDesigningFrame = nullptr;
	m_pPage->BeforeDestory();
	m_pPage->m_strConfigFileNodeName.MakeLower();//20190116
	auto it = g_pTangram->m_mapWindowPage.find(m_pPage->m_hWnd);
	if (it != g_pTangram->m_mapWindowPage.end())
	{
		auto it2 = m_pPage->m_mapNeedSaveFrame.find(m_hWnd);
		if (it2 != m_pPage->m_mapNeedSaveFrame.end())
		{
			if (!m_pPage->m_bNewVersion)
			{
				m_pPage->put_ConfigName(m_pPage->m_strConfigFileNodeName.AllocSysString());
			}
		}
	}

	DWORD dwID = ::GetWindowThreadProcessId(m_hWnd, NULL);
	TRACE(_T("ExtendEx ThreadInfo:%x\n"), dwID);
	TangramThreadInfo* pThreadInfo = g_pTangram->GetThreadInfo(dwID);
	if (pThreadInfo)
	{
		//theApp.SetHook(dwID);
		auto iter = pThreadInfo->m_mapTangramFrame.find(m_hWnd);
		if (iter != pThreadInfo->m_mapTangramFrame.end())
		{
			pThreadInfo->m_mapTangramFrame.erase(iter);
			TRACE(_T("Tangram Frame Removed from ThreadInfo Manager:%x\n"), m_hWnd);
		}
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CWndFrame::OnTangramMsg(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	switch (lParam)
	{
	case 2048:
	{
		if (m_hWnd != g_pTangram->m_hChildHostWnd)
		{
			CtrlInfo* pCtrlInfo = (CtrlInfo*)wParam;
			if (pCtrlInfo&&pCtrlInfo->m_pPage)
			{
				CWndPage* pPage = (CWndPage*)pCtrlInfo->m_pPage;
				pPage->Fire_ClrControlCreated(pCtrlInfo->m_pNode, pCtrlInfo->m_pCtrlDisp, pCtrlInfo->m_strName.AllocSysString(), (long)pCtrlInfo->m_hWnd);
			}
		}
	}
	break;
	case 20180115:
	{
		HostPosChanged();
	}
	break;
	case WM_CHROMEDRAW:
	{
		ChromePlus::CHtmlWnd* pWebWnd = (ChromePlus::CHtmlWnd*)::GetWindowLongPtr(m_hWnd, GWLP_USERDATA);
		::PostMessage(::GetParent(pWebWnd->m_hWnd), WM_CHROMEDRAW, 0, 1);
	}
	break;
	case 19651965:
	{
		for (auto it : m_pPage->m_mapFrame)
		{
			it.second->UpdateVisualWPFMap((HWND)wParam, false);
		}
	}
	break;
	case 20170929:
	{
		TangramFrameInfo* pTangramFrameInfo = (TangramFrameInfo*)wParam;
		CString _strKey = _T(",");
		_strKey += pTangramFrameInfo->m_strKey;
		_strKey += _T(",");
		if (m_strAsynKeys.Find(_strKey) != -1)
		{
			m_strAsynKeys.Replace(_strKey, _T(""));
		}

		IWndNode* pNode = nullptr;
		int nPos = pTangramFrameInfo->m_strXml.ReverseFind('>');
		CString strXml = pTangramFrameInfo->m_strXml;
		this->Extend(pTangramFrameInfo->m_strKey.AllocSysString(), CComBSTR(strXml), &pNode);
		delete pTangramFrameInfo;
		return 0;
	}
	break;
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CWndFrame::OnTabChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	HWND hWnd = ::GetWindow(m_hWnd, GW_CHILD);
	if (hWnd == nullptr)
		return 0;
	if (m_pWorkBenchFrame&&::IsWindowVisible(m_hWnd))
	{
		RECT rc, rc0;
		::GetClientRect(m_hWnd, &rc0);
		::GetClientRect(hWnd, &rc);
		if (rc.right*rc.bottom == 0)
		{
			::MoveWindow(hWnd, 0, 0, rc0.right, rc0.bottom, 1);
		}
		HWND hWnd2 = ::GetWindow(hWnd, GW_CHILD);
		if (hWnd2 == nullptr)
			return 0;
		::GetClassName(hWnd2, g_pTangram->m_szBuffer, MAX_PATH);
		CString strName = CString(g_pTangram->m_szBuffer);
		if (strName == _T("SWT_Window0"))
		{
			::GetClientRect(hWnd2, &rc);
			if (rc.right*rc.bottom == 0)
				::MoveWindow(hWnd2, 0, 0, rc0.right, rc0.bottom, 1);
			hWnd2 = ::GetWindow(hWnd2, GW_CHILD);
			if (hWnd2 == nullptr)
				return 0;
			::GetClassName(hWnd2, g_pTangram->m_szBuffer, MAX_PATH);
			strName = CString(g_pTangram->m_szBuffer);
			if (strName == _T("SWT_Window0"))
			{
				::GetClientRect(hWnd2, &rc);
				if (rc.right*rc.bottom == 0)
					::MoveWindow(hWnd2, 0, 0, rc0.right, rc0.bottom, 1);
			}
		}
	}
	HostPosChanged();
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CWndFrame::OnGetMe(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (lParam == 1992)
	{
		return (LRESULT)this;
	}

	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CWndFrame::OnNcDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	LONG_PTR pfnWndProc = ::GetWindowLongPtr(m_hWnd, GWLP_WNDPROC);
	LRESULT lr = DefWindowProc(uMsg, wParam, lParam);
	if (m_pfnSuperWindowProc != ::DefWindowProc && ::GetWindowLongPtr(m_hWnd, GWLP_WNDPROC) == pfnWndProc)
		::SetWindowLongPtr(m_hWnd, GWLP_WNDPROC, (LONG_PTR)m_pfnSuperWindowProc);

	// mark window as destryed
	m_dwState |= WINSTATE_DESTROYED;
	return lr;
}

LRESULT CWndFrame::OnQueryAppProxy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	if (g_pTangram->m_pMDIMainWnd&&lParam == 19651965)
	{
		m_bTabbedMDIClient = true;
		LPRECT lpRECT = (LPRECT)wParam;
		if (lpRECT&&m_pWorkNode&&::IsWindowVisible(m_pWorkNode->m_pHostWnd->m_hWnd))
		{
			::SetWindowPos(m_pWorkNode->m_pHostWnd->m_hWnd, HWND_BOTTOM, lpRECT->left, lpRECT->top, lpRECT->right - lpRECT->left, lpRECT->bottom - lpRECT->top, SWP_NOREDRAW | SWP_NOACTIVATE | SWP_FRAMECHANGED);/*SWP_FRAMECHANGED| SWP_HIDEWINDOW| SWP_NOZORDER | SWP_NOREDRAW */
			if (m_pBindingNode&&::IsWindowVisible(m_pBindingNode->m_pHostWnd->m_hWnd))
			{
				m_pBindingNode->m_pHostWnd->GetWindowRect(lpRECT);
				g_pTangram->m_pMDIMainWnd->ScreenToClient(lpRECT);
			}
		}
		return m_pWorkNode ? ((LRESULT)m_pWorkNode->m_pHostWnd->m_hWnd) : 0;
	}
	return DefWindowProc(uMsg, wParam, lParam);
}

LRESULT CWndFrame::OnBackgroundWebProxyMsg(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&) {
	LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
	//if (m_bChromeFrame)
	{
		IPCMsg* msg = (IPCMsg*)wParam;
		CHtmlWnd* pWebWnd = (CHtmlWnd*)::GetWindowLongPtr(m_hWnd, GWLP_USERDATA);
		if (pWebWnd && pWebWnd->m_pChromeRenderFrameHost) {
			pWebWnd->m_pChromeRenderFrameHost->InternalSend(msg);
		}
	}
	return lRes;
}

LRESULT CWndFrame::OnWindowPosChanging(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	LRESULT hr = DefWindowProc(uMsg, wParam, lParam);
	
	if (m_pWorkNode)
	{
		WINDOWPOS* lpwndpos = (WINDOWPOS*)lParam;
		if (m_pBindingNode)
		{
			RECT rect= { 0,0,0,0 };
			HWND hPWnd = ::GetParent(m_hWnd);
			if (::SendMessage(hPWnd, WM_QUERYAPPPROXY, (WPARAM)&rect, 19921989) == 19921989)
			{
				lpwndpos->x = rect.left;
				lpwndpos->y = rect.top;
				lpwndpos->cx = rect.right - rect.left;
				lpwndpos->cy = rect.bottom - rect.top;
			}
			::SetWindowPos(m_pWorkNode->m_pHostWnd->m_hWnd, HWND_BOTTOM, lpwndpos->x, lpwndpos->y, lpwndpos->cx, lpwndpos->cy, lpwndpos->flags | SWP_NOACTIVATE | SWP_FRAMECHANGED);
			HWND hHost = m_pBindingNode->m_pHostWnd->m_hWnd;
			if (::IsWindowVisible(hHost))
			{
				::GetWindowRect(hHost, &rect);
				::ScreenToClient(hPWnd, (LPPOINT)&rect);
				::ScreenToClient(hPWnd, ((LPPOINT)&rect) + 1);
				if (m_pHostNode==nullptr&&m_bChromeFrame&&lpwndpos->cx*lpwndpos->cy > 0)
				{
					HRGN hWebExtendWndRgn = ::CreateRectRgn(0, 0, lpwndpos->cx, lpwndpos->cy);
					if (rect.right > rect.left&&rect.bottom > rect.top)
					{
						HRGN hTemp = ::CreateRectRgn(0, 0, 0, 0);
						HRGN hWndRgn = ::CreateRectRgn(rect.left, rect.top, rect.right, rect.bottom);
						::CombineRgn(hTemp, hWebExtendWndRgn, hWndRgn, RGN_DIFF);
						::DeleteObject(hWndRgn);
						::DeleteObject(hWebExtendWndRgn);
						::SetWindowRgn(hPWnd, hTemp, false);
						::DeleteObject(hTemp);//20190103
					}
					else
					{
						::SetWindowRgn(hPWnd, hWebExtendWndRgn, false);
					}
				}
				lpwndpos->x = rect.left;
				lpwndpos->y = rect.top;
				lpwndpos->cx = rect.right - rect.left;
				lpwndpos->cy = rect.bottom - rect.top;
				lpwndpos->flags &= ~SWP_HIDEWINDOW;
				lpwndpos->flags |= SWP_SHOWWINDOW | SWP_NOZORDER;
				if (m_bTabbedMDIClient == false && m_pBKWnd&&::IsWindow(m_pBKWnd->m_hWnd))
					::SetWindowPos(m_pBKWnd->m_hWnd, HWND_BOTTOM, 0, 0, lpwndpos->cx, lpwndpos->cy, SWP_NOACTIVATE | SWP_NOREDRAW);
				//begin fix bug for .net Control or Window Form
				if (m_pBindingNode->m_pParentObj&&m_pBindingNode->m_pParentObj->m_nViewType == Splitter)
				{
					CSplitterNodeWnd* pWnd = (CSplitterNodeWnd*)m_pBindingNode->m_pParentObj->m_pHostWnd;
					if (pWnd->bInited == false)
					{
						::SendMessage(pWnd->m_hWnd, WM_TANGRAMMSG, 1, 1993);
					}
				}
				if (m_pHostNode&&m_pHostNode->m_pParentObj&&m_pHostNode->m_pParentObj->m_nViewType == Splitter)
				{
					if (m_pHostNode->m_nViewType == CLRCtrl)
					{
						CNodeWnd* pNodeWnd = (CNodeWnd*)m_pHostNode->m_pHostWnd;
						pNodeWnd->m_bNoMove = true;
					}
				}
				//end fix bug for .net Control or Window Form
			}
			else
			{
				if (m_pHostNode == nullptr&&m_bChromeFrame&&lpwndpos->cx*lpwndpos->cy > 0){
					::SetWindowRgn(hPWnd, ::CreateRectRgn(0, 0, lpwndpos->cx, lpwndpos->cy), false);
				}
				lpwndpos->x = lpwndpos->y = lpwndpos->cx = lpwndpos->cy = 0;
				lpwndpos->flags |= SWP_HIDEWINDOW | SWP_NOZORDER;
			}
		}
		else
		{
			::SetWindowPos(m_pWorkNode->m_pHostWnd->m_hWnd, HWND_TOP, lpwndpos->x, lpwndpos->y, lpwndpos->cx, lpwndpos->cy, lpwndpos->flags | SWP_NOSENDCHANGING | /*SWP_NOZORDER |*/ SWP_NOACTIVATE | SWP_FRAMECHANGED);
			lpwndpos->flags &= ~SWP_SHOWWINDOW;
			lpwndpos->flags |= SWP_HIDEWINDOW;
			if (m_pHostNode == nullptr&&m_bChromeFrame&&lpwndpos->cx*lpwndpos->cy > 0){
				::SetWindowRgn(m_pWebWnd->m_hExtendWnd, ::CreateRectRgn(0, 0, lpwndpos->cx, lpwndpos->cy), false);
			}
		}
		if (m_bMDIChild)
			lpwndpos->flags |= SWP_NOZORDER;
	}

	return hr;
}

LRESULT CWndFrame::OnParentNotify(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
{
	g_pTangram->m_pWndFrame = nullptr;
	return DefWindowProc(uMsg, wParam, lParam);
}

STDMETHODIMP CWndFrame::get_DesignerState(VARIANT_BOOL* pVal)
{
	if (m_bDesignerState)
		*pVal = true;
	else
		*pVal = false;

	return S_OK;
}

STDMETHODIMP CWndFrame::put_DesignerState(VARIANT_BOOL newVal)
{
	m_bDesignerState = newVal;
	return S_OK;
}

STDMETHODIMP CWndFrame::GetXml(BSTR bstrRootName, BSTR* bstrRet)
{
	CString strRootName = OLE2T(bstrRootName);
	if (strRootName == _T(""))
		strRootName = _T("DocumentUI");
	CString strXmlData = _T("<Default><window><node name=\"Start\"/></window></Default>");
	CString strName = _T("");
	CString strXml = _T("");

	map<CString, CString> m_mapTemp;
	map<CString, CString>::iterator it2;
	for (auto it : m_mapNode)
	{
		g_pTangram->UpdateWndNode(it.second);
		strName = it.first;
		int nPos = strName.Find(_T("-"));
		CString str = strName.Mid(nPos + 1);
		if (str.CompareNoCase(_T("inDesigning")) == 0)
		{
			strName = strName.Left(nPos);
			m_mapTemp[strName] = it.second->m_pTangramNodeCommonData->m_pTangramParse->xml();
		}
	}

	for (auto it : m_mapNode)
	{
		strName = it.first;
		if (strName.Find(_T("-indesigning")) == -1)
		{
			it2 = m_mapTemp.find(strName);
			if (it2 != m_mapTemp.end())
				strXml = it2->second;
			else
				strXml = it.second->m_pTangramNodeCommonData->m_pTangramParse->xml();
			strXmlData += strXml;
		}
	}

	strXml = _T("<");
	strXml += strRootName;
	strXml += _T(">");
	strXml += strXmlData;
	strXml += _T("</");
	strXml += strRootName;
	strXml += _T(">");
	*bstrRet = strXml.AllocSysString();
	return S_OK;
}

STDMETHODIMP CWndFrame::get_Count(long* pCount)
{
	*pCount = (long)m_mapNode.size();
	return S_OK;
}

STDMETHODIMP CWndFrame::get_WndNode(VARIANT vIndex, IWndNode **ppNode)
{
	if (vIndex.vt == VT_I4)
	{
		long lCount = m_mapNode.size();
		int iIndex = vIndex.lVal;
		if (iIndex < 0 || iIndex >= lCount) return E_INVALIDARG;

		auto it = m_mapNode.begin();
		int iPos = 0;
		while (it != m_mapNode.end())
		{
			if (iPos == iIndex) break;
			iPos++;
			it++;
		}

		CWndNode* pNode = it->second;
		*ppNode = pNode;
		return S_OK;
	}

	if (vIndex.vt == VT_BSTR)
	{
		CString strKey = OLE2T(vIndex.bstrVal);
		auto it = m_mapNode.find(strKey);
		if (it != m_mapNode.end())
		{
			*ppNode = it->second;
			return S_OK;
		}
		return E_INVALIDARG;
	}

	return S_OK;
}

STDMETHODIMP CWndFrame::get__NewEnum(IUnknown** ppVal)
{
	typedef CComEnum<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT, _Copy<VARIANT>>
		CComEnumVariant;

	CComObject<CComEnumVariant> *pe = 0;
	HRESULT hr = pe->CreateInstance(&pe);

	if (SUCCEEDED(hr))
	{
		pe->AddRef();
		long nLen = (long)m_mapNode.size();
		VARIANT* rgvar = new VARIANT[nLen];
		ZeroMemory(rgvar, sizeof(VARIANT)*nLen);
		VARIANT* pItem = rgvar;
		for (auto it : m_mapNode)
		{
			IUnknown* pDisp = nullptr;
			CWndNode* pObj = it.second;
			hr = pObj->QueryInterface(IID_IUnknown, (void**)&pDisp);
			pItem->vt = VT_UNKNOWN;
			pItem->punkVal = pDisp;
			if (pItem->punkVal != nullptr)
				pItem->punkVal->AddRef();
			pItem++;
			pDisp->Release();
		}

		hr = pe->Init(rgvar, &rgvar[nLen], 0, AtlFlagTakeOwnership);
		if (SUCCEEDED(hr))
			hr = pe->QueryInterface(IID_IUnknown, (void**)ppVal);
		pe->Release();
	}
	return S_OK;
}

STDMETHODIMP CWndFrame::get_FrameXML(BSTR* pVal)
{
	CString strData = _T("<");
	CString strName = m_strFrameName;
	strName.Replace(_T("@"), _T("_"));
	strData += strName;
	strData += _T(">");
	for (auto it : m_mapNode)
	{
		CWndNode* pWindowNode = (CWndNode*)it.second;
		if (pWindowNode)
		{
			CComQIPtr<IWndContainer> pContainer(pWindowNode->m_pDisp);
			if (pContainer)
			{
				if (pWindowNode->m_nActivePage > 0)
				{
					CString strVal = _T("");
					strVal.Format(_T("%d"), pWindowNode->m_nActivePage);
					pWindowNode->m_pHostParse->put_attr(_T("activepage"), strVal);
				}
				pContainer->Save();
			}
			if (pWindowNode->m_nViewType == Splitter)
			{
				((CSplitterNodeWnd*)pWindowNode->m_pHostWnd)->Save();
			}

			for (auto it2 : pWindowNode->m_vChildNodes)
			{
				g_pTangram->UpdateWndNode(it2);
			}

			if (pWindowNode == pWindowNode->m_pRootObj&&pWindowNode->m_pTangramNodeCommonData->m_pOfficeObj)
			{
				g_pTangram->UpdateOfficeObj(pWindowNode->m_pTangramNodeCommonData->m_pOfficeObj, pWindowNode->m_pTangramNodeCommonData->m_pTangramParse->GetChild(_T("window"))->xml(), pWindowNode->m_pTangramNodeCommonData->m_pTangramParse->name());
			}
		}
		CString strXml = pWindowNode->m_pTangramNodeCommonData->m_pTangramParse->GetChild(_T("window"))->xml();
		CString s = _T("");
		s.Format(_T("<%s>%s</%s>"), it.first, strXml, it.first);
		CString strKey = it.second->m_strKey + _T("@") + this->m_strFrameName + _T("@") + _T("tangramdefaultpage");
		auto it = m_pPage->m_strMapKey.find(strKey);
		if (it != m_pPage->m_strMapKey.end())
		{
		}
		m_pPage->m_strMapKey[strKey] = s;
		strData += s;
	}
	strData += _T("</");
	strData += strName;
	strData += _T(">");
	CString strXml = _T("<");
	strXml += strName;
	strXml += _T(">");
	for (auto it : m_pPage->m_strMapKey)
	{
		CString strKey = it.first;
		if (strKey.Find(_T("@") + m_strFrameName + _T("@")) != -1)
		{
			strXml += it.second;
		}
	}
	strXml += _T("</");
	strXml += strName;
	strXml += _T(">");
	*pVal = strXml.AllocSysString();
	return S_OK;
}

STDMETHODIMP CWndFrame::get_TangramDoc(ITangramDoc** pVal)
{
	if (m_pDoc == nullptr)
	{
		CTangramDocWnd* pWnd = (CTangramDocWnd*)::SendMessage(::GetParent(m_hWnd), WM_TANGRAMMSG, 2016, 0);
		if (pWnd)
		{
			m_pDoc = pWnd->m_pDocFrame->m_pTangramDoc;
		}
	}

	*pVal = m_pDoc;
	return S_OK;
}

STDMETHODIMP CWndFrame::get_FrameType(WndFrameType* pVal)
{
	*pVal = m_nWndFrameType;
	return S_OK;
}

STDMETHODIMP CWndFrame::get_Name(BSTR* pVal)
{
	*pVal = m_strFrameName.AllocSysString();
	return S_OK;
}

STDMETHODIMP CWndFrame::SendToBackgroundWebProxy(BSTR bstrType, BSTR bstrKey, BSTR bstrData)
{
	//if (m_bChromeFrame)
	{
		IPCMsg* msg = new IPCMsg;
		msg->m_strType = OLE2T(bstrType);
		msg->m_strKey = OLE2T(bstrKey);
		msg->m_strData = OLE2T(bstrData);
		::PostMessage(m_hWnd, WM_BACKGROUNDWEBPROXY_MSG, (WPARAM)msg, (WPARAM)0);
	}
	return S_OK;
}

STDMETHODIMP CWndFrame::Dispatch(BSTR bstrFrameName, BSTR bstrLayerName, BSTR bstrNodeName, BSTR bstrChannel, BSTR bstrArg1, BSTR bstrArg2)
{
	CString strFrameName = OLE2T(bstrFrameName);
	CString strLayerName = OLE2T(bstrLayerName);
	CString strNodeName = OLE2T(bstrNodeName);
	CString strChannel = OLE2T(bstrChannel);
	CString strArg1 = OLE2T(bstrArg1);
	CString strArg2 = OLE2T(bstrArg2);
	Message msg(strFrameName, strLayerName, strNodeName, strChannel, strArg1, strArg2);
	DispatchInternal(msg);
	return S_OK;
}
