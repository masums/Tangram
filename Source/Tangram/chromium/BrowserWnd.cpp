/********************************************************************************
 *					Tangram Library - version 10.0.0
 **
 *********************************************************************************
 * Copyright (C) 2002-2019 by Tangram Team.   All Rights Reserved.
 **
 *
 * THIS SOURCE FILE IS THE PROPERTY OF TANGRAM TEAM AND IS NOT TO
 * BE RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED
 * WRITTEN CONSENT OF TANGRAM TEAM.
 *
 * THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS
 * OUTLINED IN THE TANGRAM LICENSE AGREEMENT.TANGRAM TEAM
 * GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE
 * THIS SOFTWARE ON A SINGLE COMPUTER.
 *
 * CONTACT INFORMATION:
 * mailto:tangramteam@outlook.com
 * https://www.tangramteam.com
 *
 ********************************************************************************/

#include "../stdafx.h"
#include "../TangramApp.h"
#include "../WndNode.h"
#include "../NodeWnd.h"
#include "../WndFrame.h"
#include "BrowserWnd.h"
#include "HtmlWnd.h"

extern CTangramApplicationImpl* m_pTangramApplicationImpl;

namespace ChromePlus {
	CBrowserWnd::CBrowserWnd() {
		m_hDrawWnd = 0;
		m_pBrowser = nullptr;
		m_pWndNode = nullptr;
		m_fdevice_scale_factor = 1.0f;
		m_strCurKey = _T("");
		m_pVisibleWebWnd = nullptr;
		m_pOmniboxViewViews = nullptr;
		if (g_pTangram->m_pCreatingOmniboxViewViews) {
			m_pOmniboxViewViews = g_pTangram->m_pCreatingOmniboxViewViews;
			g_pTangram->m_pCreatingOmniboxViewViews = nullptr;
		}

		if (g_pTangram->m_pHostBrowser == nullptr)
			g_pTangram->m_pHostBrowser = this;
	}

	CBrowserWnd::~CBrowserWnd() {}

	LRESULT CBrowserWnd::ChromeDraw() {
		if (g_pTangram->m_bChromeNeedClosed == TRUE)
			return 0;
		HWND hWnd = ::FindWindowEx(m_hWnd, NULL, _T("Chrome_RenderWidgetHostHWND"), NULL);
		if (hWnd)
		{
			auto it = g_pTangram->m_mapHtmlWnd.find(hWnd);
			if (it != g_pTangram->m_mapHtmlWnd.end())
				m_pVisibleWebWnd = it->second;
		}
		else 
			return 0;
		if (m_pVisibleWebWnd&&!::IsWindow(m_pVisibleWebWnd->m_hWnd))
			return 0;
		if (m_pVisibleWebWnd) {
			if (m_hDrawWnd == 0) {
				m_hDrawWnd = ::FindWindowEx(m_hWnd, nullptr, _T("Intermediate D3D Window"), nullptr);
			}
			if (m_hDrawWnd == 0) {
				m_hDrawWnd = ::FindWindowEx(m_hWnd, nullptr, _T("Intermediate Software Window"), nullptr);
			}

			RECT rc;
			if (m_pVisibleWebWnd->m_hExtendWnd) {
				if (m_pVisibleWebWnd->m_pFrame == nullptr)
				{
					::SetWindowPos(m_pVisibleWebWnd->m_hExtendWnd, /*m_hDrawWnd? m_hDrawWnd:*/m_pVisibleWebWnd->m_hWnd, 0,0,0,0, SWP_SHOWWINDOW);
					GetWindowRect(&rc);

					::ScreenToClient(m_hDrawWnd, (LPPOINT)& rc);
					::ScreenToClient(m_hDrawWnd, ((LPPOINT)& rc) + 1);
					::SetWindowRgn(m_hDrawWnd, ::CreateRectRgn(rc.left, rc.top, rc.right, rc.bottom), true);
					return 0;
				}
				RECT rcWndRng;
				HWND hTangramHostWnd = m_pVisibleWebWnd->m_hChildWnd;

				if (m_pVisibleWebWnd->m_pDevToolWnd == nullptr) {
					::GetWindowRect(m_pVisibleWebWnd->m_hWnd, &rcWndRng);
				}
				else  if(m_pVisibleWebWnd){
					if (::GetParent(m_pVisibleWebWnd->m_hWnd) == ::GetParent(m_pVisibleWebWnd->m_pDevToolWnd->m_hWnd))
						::GetWindowRect(m_pVisibleWebWnd->m_pDevToolWnd->m_hWnd, &rcWndRng);
					else
						::GetWindowRect(m_pVisibleWebWnd->m_hWnd, &rcWndRng);
				}
				ScreenToClient(&rcWndRng);
				if (::IsChild(m_hWnd, m_pVisibleWebWnd->m_hExtendWnd) == false) {
					::SetParent(m_pVisibleWebWnd->m_hExtendWnd, m_hWnd);
				}

				if (m_hDrawWnd) {
					if (hTangramHostWnd && m_pVisibleWebWnd) {
						::GetWindowRect(m_hWnd, &rc);
						::ScreenToClient(m_hDrawWnd, (LPPOINT)& rc);
						::ScreenToClient(m_hDrawWnd, ((LPPOINT)& rc) + 1);

						HRGN hGPUWndRgn = ::CreateRectRgn(rc.left, rc.top, rc.right, rc.bottom);
						HRGN hWebExtendWndRgn = ::CreateRectRgn(m_Rect.left, m_Rect.top, m_Rect.right, m_Rect.bottom);
						HRGN hTemp = ::CreateRectRgn(0, 0, 0, 0);
						HRGN hTemp2 = ::CreateRectRgn(0, 0, 0, 0);
						::CombineRgn(hTemp2, hGPUWndRgn, hWebExtendWndRgn, RGN_DIFF);
						HRGN hWndRgn = ::CreateRectRgn(rcWndRng.left, rcWndRng.top, rcWndRng.right, rcWndRng.bottom);
						::CombineRgn(hTemp, hTemp2, hWndRgn, RGN_OR);
						::SetWindowRgn(m_hDrawWnd, hTemp, true);
						::DeleteObject(hTemp2);
						::DeleteObject(hGPUWndRgn);
						::DeleteObject(hWndRgn);
						::DeleteObject(hWebExtendWndRgn);
						::DeleteObject(m_hDrawWnd);
					}
					else
					{
						::SetWindowRgn(m_hDrawWnd, ::CreateRectRgn(rcWndRng.left, rcWndRng.top,
							rcWndRng.right, rcWndRng.bottom), true);
					}
				}
				else
				{

				}
			}
			else {
				if (m_hDrawWnd) {
					GetWindowRect(&rc);

					::ScreenToClient(m_hDrawWnd, (LPPOINT)& rc);
					::ScreenToClient(m_hDrawWnd, ((LPPOINT)& rc) + 1);
					::SetWindowRgn(m_hDrawWnd, ::CreateRectRgn(rc.left, rc.top, rc.right, rc.bottom), true);
				}
			}
		}

		return 0;
	}

	void CBrowserWnd::UpdateContentRect(RECT & rc, int nTopFix) {
		if (g_pTangram->m_bOMNIBOXPOPUPVISIBLE)
			return;
		//if (rc.right==rc.left==rc.top==rc.bottom==0)
		//	return;
		if (m_pVisibleWebWnd)
		{
			m_Rect.left = rc.left;
			m_Rect.top = nTopFix * m_fdevice_scale_factor;
			//if (::GetWindowLongPtr(m_hWnd, GWL_STYLE)&WS_CHILD)
			//{
			//	m_Rect.top -= nTopFix * m_fdevice_scale_factor;
			//}
			m_Rect.right = rc.left + rc.right * m_fdevice_scale_factor;
			m_Rect.bottom = (nTopFix + rc.bottom - rc.top) * m_fdevice_scale_factor;
			HWND hExtendWnd = m_pVisibleWebWnd->m_hExtendWnd;
			if (hExtendWnd) {
				::SetWindowPos(hExtendWnd, HWND_BOTTOM, rc.left, nTopFix * m_fdevice_scale_factor, rc.right * m_fdevice_scale_factor, (rc.bottom - rc.top) * m_fdevice_scale_factor, SWP_SHOWWINDOW | SWP_NOREDRAW | SWP_NOACTIVATE);
				HWND hHostWnd = m_pVisibleWebWnd->m_hHostWnd;
				if (hHostWnd == NULL)
					hHostWnd = m_pVisibleWebWnd->m_hChildWnd;
				if (::IsWindowVisible(hHostWnd) == false) {
					rc.bottom = rc.top + 1;
					rc.right = rc.left + 1;
					return;
				}
				RECT rc2;
				RECT rect;
				::GetWindowRect(hHostWnd, &rc2);
				if (::ScreenToClient(hExtendWnd, (LPPOINT)& rc2))
				{
					::ScreenToClient(hExtendWnd, ((LPPOINT)& rc2) + 1);
					::GetClientRect(hExtendWnd, &rect);

					rc.left += rc2.left / m_fdevice_scale_factor;
					rc.top += (rc2.top - rect.top) / m_fdevice_scale_factor;
					//if (::GetWindowLongPtr(m_hWnd, GWL_STYLE)&WS_CHILD)
					//	rc.top -= nTopFix;
					rc.right -= (rect.right - rc2.right) / m_fdevice_scale_factor;
					rc.bottom -= (rect.bottom - rc2.bottom) / m_fdevice_scale_factor;

					if (rc.bottom <= rc.top || rc.right <= rc.left)
					{
						rc.bottom = rc.top + 1;
						rc.right = rc.left + 1;
					}
				}
			}
		}
	};

	LRESULT CBrowserWnd::OnActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&) {
		LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
		if (LOWORD(wParam) != WA_INACTIVE) {
			if (m_pBrowser) {
				g_pTangram->m_pActiveBrowser = m_pBrowser;
				g_pTangram->m_pActiveBrowser->m_pProxy = this;
				::PostMessage(m_hWnd, WM_CHROMEDRAW, 0, 1);
			}
		}
		return lRes;
	}

	LRESULT CBrowserWnd::OnDeviceScaleFactorChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&) {
		LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
		m_fdevice_scale_factor = (float)lParam / 100;
		ChromeDraw();
		::PostMessage(m_hWnd, WM_CHROMEDRAW, 0, 1);
		return lRes;
	}

	LRESULT CBrowserWnd::OnMouseActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&) {
		HWND hPWnd = ::GetParent(m_hWnd);
		if(hPWnd)
			g_pTangram->m_pActiveHtmlWnd = m_pVisibleWebWnd;
		if (g_pTangram->m_pActiveHtmlWnd&&m_pVisibleWebWnd && g_pTangram->m_pActiveHtmlWnd->m_pChromeRenderFrameHost)
		{
			g_pTangram->m_pWndFrame = nullptr;
			g_pTangram->m_bWinFormActived = false;
		}
		LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
		if (m_pVisibleWebWnd && m_pWndNode)
		{
			::PostMessage(m_pVisibleWebWnd->m_hWnd, WM_TANGRAMMSG, 20190331, 0);
		}
		return lRes;
	}

	LRESULT CBrowserWnd::OnChromeTabChange(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&) {
		g_pTangram->m_pActiveHtmlWnd = m_pVisibleWebWnd;
		if (m_pVisibleWebWnd && g_pTangram->m_pActiveHtmlWnd->m_pChromeRenderFrameHost)
		{
			g_pTangram->m_pWndFrame = nullptr;
			g_pTangram->m_bWinFormActived = false;
		}
		ChromeDraw();
		LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
		if (m_pVisibleWebWnd&&m_pWndNode)
		{
			::PostMessage(m_pVisibleWebWnd->m_hWnd, WM_TANGRAMMSG, 20190331, 0);
		}
		return lRes;
	}

	LRESULT CBrowserWnd::OnTangramMsg(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&) {
		LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
		HWND hWnd = (HWND)lParam;
		switch (wParam) {
		case 0: {
			g_pTangram->m_pHtmlWndCreated = new CComObject<CHtmlWnd>;
			g_pTangram->m_pHtmlWndCreated->SubclassWindow(hWnd);
			if (g_pTangram->m_bCreatingDevTool == false)
			{
				g_pTangram->m_pHtmlWndCreated->m_bDevToolWnd = false;
				g_pTangram->m_mapHtmlWnd[hWnd] = g_pTangram->m_pHtmlWndCreated;
				if (m_hWnd == g_pTangram->m_hHostBrowserWnd)
					::PostMessage(m_hWnd, WM_TANGRAMMSG, 20190314, 0);
				else
					m_pVisibleWebWnd = g_pTangram->m_pHtmlWndCreated;
			}
			else
			{
				g_pTangram->m_bCreatingDevTool = false;
				g_pTangram->m_pHtmlWndCreated->m_bDevToolWnd = true;
				if (m_pVisibleWebWnd) {
					m_pVisibleWebWnd->m_pDevToolWnd = g_pTangram->m_pHtmlWndCreated;
					g_pTangram->m_pHtmlWndCreated->m_pWebWnd = m_pVisibleWebWnd;
				}
			}
			HWND hPWnd = ::GetParent(m_hWnd);
			if (hPWnd)
			{
				g_pTangram->m_pActiveHtmlWnd = g_pTangram->m_pHtmlWndCreated;
				g_pTangram->m_pWndFrame = nullptr;
				g_pTangram->m_bWinFormActived = false;
				::PostMessage(hWnd, WM_TANGRAMMSG, 20190331, 0);
			}
		} break;
		case 20190314:
		{
			CString strURL = _T("");
			if (lParam)
				strURL = (LPCTSTR)lParam;
			else
			{
				CTangramXmlParse m_Parse;
				if (m_Parse.LoadFile(g_pTangram->m_strConfigFile))
					strURL = m_Parse.attr(_T("startupurl"), _T(""));
			}
			if (strURL != _T(""))
				OpenURL(CComBSTR(strURL), BrowserWndOpenDisposition::NEW_WINDOW, CComBSTR(""), CComBSTR(""));
		}
		return (LRESULT)this;
		break;
		case 20181216:
			return (LRESULT)((CChromeBrowserProxy*)this);
			break;
		case 20190527:
			return (LRESULT)((IChromeWebBrowser*)this);
			break;
		case 20181013:
		{
			m_pBrowser->LayoutBrowser();
			ChromeDraw();
			m_pBrowser->LayoutBrowser();
			ChromeDraw();
		}break;
		case 20190506:
		{
			HWND hWnd = ::FindWindowEx(m_hWnd, NULL, _T("Chrome_RenderWidgetHostHWND"), NULL);
			if (hWnd)
			{
				auto it = g_pTangram->m_mapHtmlWnd.find(hWnd);
				if (it != g_pTangram->m_mapHtmlWnd.end())
					m_pVisibleWebWnd = it->second;
			}
		}break;
		}
		return lRes;
	}

	LRESULT CBrowserWnd::OnWindowPosChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
	{
		WINDOWPOS* lpwndpos = (WINDOWPOS*)lParam;
		if (this == g_pTangram->m_pHostBrowser)
			lpwndpos->cx = lpwndpos->cy = lpwndpos->x = lpwndpos->y = 0;
		LRESULT LRes = DefWindowProc(uMsg, wParam, lParam);
		if (m_pBrowser)
		{
			ChromeDraw();
		}
		return LRes;
	}

	LRESULT CBrowserWnd::OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
	{
		if (m_pVisibleWebWnd)
		{
			if (m_pVisibleWebWnd->m_hExtendWnd)
			{
				HWND hWnd = ::GetParent(m_pVisibleWebWnd->m_hWnd);
				if (hWnd != m_hWnd)
					::SetParent(m_pVisibleWebWnd->m_hExtendWnd, hWnd);
			}
			for (auto it : g_pTangram->m_mapHtmlWnd)
			{
				if (it.second != m_pVisibleWebWnd && it.second->m_hExtendWnd)
				{
					::SetParent(it.second->m_hExtendWnd, ::GetParent(it.first));
				}
			}
		}

		if (g_pTangram->m_pCLRProxy)
		{
			IChromeWebBrowser* pIChromeWebBrowser = nullptr;
			QueryInterface(__uuidof(IChromeWebBrowser), (void**)& pIChromeWebBrowser);
			g_pTangram->m_pCLRProxy->OnDestroyChromeBrowser(pIChromeWebBrowser);
		}

		m_pVisibleWebWnd = nullptr;
		auto it = g_pTangram->m_mapBrowserWnd.find(m_hWnd);
		if (it != g_pTangram->m_mapBrowserWnd.end()) {
			g_pTangram->m_mapBrowserWnd.erase(it);
		}

		if ((g_pTangram->m_hMainWnd==NULL&&g_pTangram->m_mapBrowserWnd.size() == 0)|| 
			g_pTangram->m_hHostBrowserWnd==m_hWnd) {
			if (g_pTangram->m_pCLRProxy)
			{
				if (g_pTangram->m_pTangramCLRAppProxy)
					g_pTangram->m_pTangramCLRAppProxy->OnTangramClose();

				g_pTangram->m_bClose = true;
			}

			::PostAppMessage(::GetCurrentThreadId(), WM_CHROMEHELPWND, 0, 0);
			if (g_pTangram->m_hCBTHook) {
				UnhookWindowsHookEx(g_pTangram->m_hCBTHook);
				g_pTangram->m_hCBTHook = nullptr;
			}
		}
		if (g_pTangram->m_hHostBrowserWnd == m_hWnd)
			g_pTangram->m_bChromeNeedClosed = true;
		LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);

		if (g_pTangram->m_bChromeNeedClosed && g_pTangram->m_mapBrowserWnd.size()==0) {
			//::DestroyWindow(g_pTangram->m_hHostWnd);
		}
		if (g_pTangram->m_bChromeNeedClosed && g_pTangram->m_mapBrowserWnd.size()) {
			auto it = g_pTangram->m_mapBrowserWnd.begin();
			it->second->SendMessageW(WM_CLOSE, 0, 0);
		}
		else if (g_pTangram->m_hMainWnd==NULL&&g_pTangram->m_bChromeNeedClosed == false && g_pTangram->m_mapBrowserWnd.size() == 1 && ::IsWindow(g_pTangram->m_hHostBrowserWnd))
		{
			if(g_pTangram->m_nAppID==10000&&g_pTangram->m_bEclipse==false)
				::SendMessageW(g_pTangram->m_hHostBrowserWnd, WM_CLOSE, 0, 0);
		}
		return lRes;
	}

	LRESULT CBrowserWnd::OnChromeDraw(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL&)
	{
		DefWindowProc(uMsg, wParam, lParam);
		if (m_pVisibleWebWnd)
		{
			switch (lParam)
			{
			case 1:
			{
				if (m_pBrowser)
				{
					switch (wParam)
					{
					case 1:
					{
						if (m_pVisibleWebWnd->m_pFrame)
						{
							IWndNode* pNode = nullptr;
							m_pVisibleWebWnd->m_pFrame->Extend(m_pVisibleWebWnd->m_strCurKey.AllocSysString(), CComBSTR(""), &pNode);
							return 0;
						}
					}
					break;
					case 2:
						if (m_pVisibleWebWnd->m_pFrame)
							ChromeDraw();
						//::PostMessage(m_hWnd, WM_CHROMEDRAW, 0, 2);
						break;
					}
					ChromeDraw();
					m_pBrowser->LayoutBrowser();
				}
			}
			break;
			}
		}
		return 0;
	}

	void CBrowserWnd::OnFinalMessage(HWND hWnd) {
		CWindowImpl::OnFinalMessage(hWnd);
		delete this;
	}

	STDMETHODIMP CBrowserWnd::OpenURL(BSTR bstrURL, BrowserWndOpenDisposition nDisposition, BSTR bstrKey, BSTR bstrXml)
	{
		if (m_pVisibleWebWnd)
		{
			CString strArg1 = _T("");
			strArg1.Format(_T("%s|%d|%s"), OLE2T(bstrKey), nDisposition, OLE2T(bstrURL));
			if (m_pVisibleWebWnd->m_pFrame)
			{
				m_pVisibleWebWnd->m_pFrame->SendToBackgroundWebProxy(CComBSTR("NODE_MESSAGE:OPENURL"), strArg1.AllocSysString(), bstrXml);
			}
			else if(m_pVisibleWebWnd->m_pChromeRenderFrameHost)
			{
				IPCMsg* msg = new IPCMsg;
				msg->m_strType = CComBSTR("NODE_MESSAGE:OPENURL");
				msg->m_strKey = strArg1;
				msg->m_strData = OLE2T(bstrXml);
				m_pVisibleWebWnd->m_pChromeRenderFrameHost->InternalSend(msg);
				::PostAppMessage(::GetCurrentThreadId(), WM_TANGRAMMSG, (WPARAM)msg, 20181008);
			}
		}
		return S_OK;
	}
}  // namespace ChromePlus

