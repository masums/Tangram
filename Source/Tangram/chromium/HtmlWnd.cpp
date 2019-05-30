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
#include "../WndFrame.h"
#include "../NodeWnd.h"
#include "HtmlWnd.h"
#include "BrowserWnd.h"
#include "../Markup.h" 

extern CTangramApplicationImpl* m_pTangramApplicationImpl;

namespace ChromePlus {
	CHtmlWnd::CHtmlWnd() {
		m_pWebWnd = nullptr;
		m_pDevToolWnd = nullptr;
		m_bDevToolWnd = false;
		m_strCurKey = _T("");
		m_strCurXml = _T("");
		m_pFrame = nullptr;
		m_hHostWnd=m_hExtendWnd = m_hChildWnd = NULL;
		m_pChromeRenderFrameHost = g_pTangram->m_pCreatingChromeRenderFrameHostBase;
		g_pTangram->m_pCreatingChromeRenderFrameHostBase = nullptr;
	}

	CHtmlWnd::~CHtmlWnd() {
	}

	CString GenerateRandomString(size_t length)
	{
		auto randchar = []() -> char
		{
			const char charset[] =
				"0123456789"
				"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
				"abcdefghijklmnopqrstuvwxyz";
			const size_t max_index = (sizeof(charset) - 1);
			return charset[rand() % max_index];
		};
		std::string str(length, 0);
		std::generate_n(str.begin(), length, randchar);
		return CString(str.c_str());
	}

	LRESULT CHtmlWnd::OnChromeIPCMessage(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
	{
		IPCMsg* pIPCInfo = (IPCMsg*)wParam;
		bool bChild = ::GetWindowLongPtr(::GetParent(m_hWnd), GWL_STYLE)&WS_CHILD;

		if (pIPCInfo->m_strType.Compare(L"PARSE_ELEMENTS") == 0)
		{
			CMarkup xml;
			if (xml.SetDoc(pIPCInfo->m_strKey))
			{
				if (xml.FindElem())
				{
					CString tagName = xml.GetTagName();
					if (tagName.CompareNoCase(L"app") == 0)
					{
						CString type = xml.GetAttrib(L"type");
						if (type.IsEmpty() || type.CompareNoCase(L"current_tab") == 0)
						{
							if (xml.FindChildElem())
							{
								CString dynXML = xml.GetChildSubDoc();
								if (/*!bChild&&*/m_hExtendWnd == nullptr)
								{
									m_hExtendWnd = ::CreateWindowEx(NULL, _T("Chrome Extended Window Class"), L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, ::GetParent(m_hWnd), NULL, theApp.m_hInstance, NULL);
									m_hChildWnd = ::CreateWindowEx(NULL, _T("Chrome Extended Window Class"), L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, m_hExtendWnd, (HMENU)AFX_IDW_PANE_FIRST, theApp.m_hInstance, NULL);

									::SetWindowLongPtr(m_hExtendWnd, GWLP_USERDATA, (LONG_PTR)m_hChildWnd);
									::SetWindowLongPtr(m_hChildWnd, GWLP_USERDATA, (LONG_PTR)this);
								}
								if (m_hExtendWnd)
								{
								}
							}
						}
						else if (type.CompareNoCase(L"new_tab") == 0)
						{
							CString strUrl = xml.GetAttrib(L"link");
							CString strWorkspaceID = GenerateRandomString(10);
							CString strRegionID = GenerateRandomString(10);
							if (xml.FindChildElem())
							{
								CString tagName = xml.GetChildTagName();
								if (tagName.CompareNoCase(L"workspace") == 0)
								{
									xml.SetChildAttrib(L"id", strWorkspaceID);
									xml.IntoElem();
									if (xml.FindChildElem(L"region"))
									{
										xml.SetChildAttrib(L"id", strRegionID);
									}
									xml.OutOfElem();
								}
								else if (tagName.CompareNoCase(L"layer") == 0)
								{
									// Completing workspace and region node.
								}
							}
						}
						else if (type.CompareNoCase(L"native_window") == 0)
						{
						}
					}
				}
			}

		}
		else if (m_pFrame)
		{
			Message msg(m_pFrame->m_strFrameName, m_pFrame->m_strCurrentKey, 
				CString("host"), pIPCInfo->m_strType, 
				pIPCInfo->m_strKey, pIPCInfo->m_strData);
			int result = m_pFrame->DispatchInternal(msg);
			if (result == 0)
			{
				// TODO: Handled by Third-party developers
			}
		}

		LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
		return lRes;
	}

	LRESULT CHtmlWnd::OnMouseActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled*/)
	{
		CBrowserWnd* pParent = nullptr;
		auto it = g_pTangram->m_mapBrowserWnd.find(::GetParent(m_hWnd));
		if (it != g_pTangram->m_mapBrowserWnd.end())
		{
			pParent = it->second;
		}
		HWND hPWnd = ::GetParent(pParent->m_hWnd);
		if (hPWnd != NULL)
		{
			g_pTangram->m_pActiveHtmlWnd = this;
			g_pTangram->m_pWndFrame = nullptr;
			g_pTangram->m_bWinFormActived = false;
			LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
			::PostMessage(m_hWnd, WM_TANGRAMMSG, 20190331, 0);
			return lRes;
		}
		else
			g_pTangram->m_pActiveHtmlWnd = nullptr;
		return DefWindowProc(uMsg, wParam, lParam);
	}

	LRESULT CHtmlWnd::OnOpenDOMWindow(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& /*bHandled */)
	{
		if (lParam) {
			HWND hBrowser = ::GetParent(m_hWnd);
			bool bChild = ::GetWindowLongPtr(hBrowser, GWL_STYLE)&WS_CHILD;
			LRESULT lRes = 0;
			if (bChild)
				lRes = ::SendMessage(hBrowser, WM_CHROMEOPENWINDOWMSG, wParam, lParam);
			if (lRes > 0)
				return lRes;
			ChromePlus::IPCMsg* pIPCInfo = (ChromePlus::IPCMsg*)lParam;
			CString strFeatures = pIPCInfo->m_strData;
			CString _strType = pIPCInfo->m_strType;
			CString _strKey = pIPCInfo->m_strKey;
			if (strFeatures == _T("tangramappinit"))
			{
				CString strName = pIPCInfo->m_strKey;
				CString strInitData = pIPCInfo->m_strType;
				if (strInitData != _T(""))
				{
					CMarkup xml;
					if (xml.SetDoc(strInitData))
					{
						if (xml.FindElem())
						{
							CString tagName = xml.GetTagName();
							if (tagName.CompareNoCase(L"apps") == 0)
							{
								while (xml.FindChildElem(L"app"))
								{
									CString type = xml.GetChildAttrib(L"type");
									if (type != _T(""))
									{
										if(type==_T("eclipse"))
										{ 
											ChromePlus::IPCMsg* pIPCInfo = new ChromePlus::IPCMsg();
											pIPCInfo->m_strType = type;
											pIPCInfo->m_strKey = xml.GetChildAttrib(L"key");
											pIPCInfo->m_strData = xml.GetSubDoc();
											::PostMessage(m_hWnd, WM_TANGRAMMSG, 20190407, (LPARAM)pIPCInfo);
										}
										else if (type == _T("atlmfc"))
										{
											ChromePlus::IPCMsg* pIPCInfo = new ChromePlus::IPCMsg();
											pIPCInfo->m_strType = type;
											pIPCInfo->m_strKey = xml.GetChildAttrib(L"appid");
											pIPCInfo->m_strData = xml.GetSubDoc();
											::PostMessage(m_hWnd, WM_TANGRAMMSG, 20190407, (LPARAM)pIPCInfo);
										}
										else if (type == _T("officeapp"))
										{
											CString appid = xml.GetChildAttrib(L"appid");
											g_pTangram->StartApplication(CComBSTR(appid), CComBSTR(xml.GetSubDoc()));
										}
										else if (type == _T("hostapp"))
										{
											::PostAppMessage(::GetCurrentThreadId(), WM_TANGRAMMSG, (WPARAM)0, 20190422);
										}
										else 
										{
											int nPos = type.Find(_T(","));
											if (nPos != -1)
											{
												g_pTangram->m_pCLRProxy->Extend(xml.GetChildAttrib(L"appid"), xml.GetChildAttrib(L"key"), xml.GetSubDoc());
											}
											else
											{

											}
										}
										//xml.IntoElem();
										//if (xml.FindChildElem(L"window"))
										//{
										//	CString key = xml.GetChildAttrib(L"key");
										//	if (key.IsEmpty())
										//	{
										//		key = L"default";
										//	}
										//	CString layoutXML = xml.GetSubDoc();
										//	if (/*!bChild&&*/m_hExtendWnd == nullptr)
										//	{
										//		m_hExtendWnd = ::CreateWindowEx(NULL, _T("Chrome Extended Window Class"), L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, ::GetParent(m_hWnd), NULL, theApp.m_hInstance, NULL);
										//		m_hChildWnd = ::CreateWindowEx(NULL, _T("Chrome Extended Window Class"), L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, m_hExtendWnd, (HMENU)AFX_IDW_PANE_FIRST, theApp.m_hInstance, NULL);

										//		::SetWindowLongPtr(m_hExtendWnd, GWLP_USERDATA, (LONG_PTR)m_hChildWnd);
										//		::SetWindowLongPtr(m_hChildWnd, GWLP_USERDATA, (LONG_PTR)this);
										//	}
										//	if (m_hExtendWnd)
										//	{
										//		if (m_pFrame == nullptr) {
										//			IWndPage* pPage = nullptr;
										//			pChromeTangram->CreateWndPage((__int64)m_hExtendWnd, &pPage);
										//			if (pPage) {
										//				IWndFrame* pFrame = nullptr;
										//				pPage->CreateFrame(CComVariant((__int64)0), CComVariant((__int64)m_hChildWnd), CComBSTR("default"), &pFrame);
										//				if (pFrame)
										//				{
										//					m_pFrame = (CWndFrame*)pFrame;
										//					m_pFrame->m_pWebWnd = this;
										//				}
										//			}
										//		}
										//		if (m_pFrame)
										//		{
										//			key.MakeLower();
										//			IWndNode* pNode = nullptr;
										//			m_pFrame->Extend(CComBSTR(key), CComBSTR(layoutXML), &pNode);
										//			if (pNode)
										//			{
										//				m_strCurKey = key;
										//				if (m_pFrame->m_pBindingNode)
										//					m_hHostWnd = m_pFrame->m_pBindingNode->m_pHostWnd->m_hWnd;
										//				else
										//					m_hHostWnd = NULL;
										//				if (::IsWindowVisible(m_hWnd))
										//				{
										//					auto it = pChromeTangram->m_mapBrowserWnd.find(::GetParent(m_hWnd));
										//					if (it != pChromeTangram->m_mapBrowserWnd.end())
										//					{
										//						CBrowserWnd* pParent = it->second;
										//						pParent->ChromeDraw();
										//						pParent->m_pBrowser->LayoutBrowser();
										//						::PostMessage(pParent->m_hWnd, WM_CHROMEDRAW, 2, 1);//| SWP_FRAMECHANGED
										//						if (pParent->m_pBrowser && m_pFrame->m_pBindingNode == nullptr) {
										//							pParent->m_pBrowser->LayoutBrowser();
										//						}
										//					}
										//				}
										//			}
										//		}
										//	}
										//}
										//else
										//{
										//	// TODO: other section, e.g. data
										//}
										//xml.OutOfElem();
									}
								}
							}
						}
					}
				}
			}
			else if (strFeatures == _T("clr"))
			{
				CComPtr<IDispatch> pCLRControl;
				g_pTangram->CreateCLRObj(CComBSTR(pIPCInfo->m_strKey), &pCLRControl);
				HWND hWnd = g_pTangram->m_pCLRProxy->GetCtrlHandle(pCLRControl);
				if (g_pTangram->m_pCLRProxy->IsWinForm(hWnd))
				{
					g_pTangram->m_pCLRProxy->ActiveCLRMethod(pCLRControl, CComBSTR("Show"), nullptr, nullptr);
				}
			}
			else if (strFeatures == _T("eclipse"))
			{
				if (m_pTangramApplicationImpl&&g_pTangram->m_bEclipse&&g_pTangram->launchMode != -1)
				{
					CString strKey = pIPCInfo->m_strKey;
					CString strXml = pIPCInfo->m_strType;
					if (g_pTangram->m_pTangramAppProxy == nullptr)
					{
						g_pTangram->m_pTangramAppProxy = m_pTangramApplicationImpl->m_pTangramAppProxy;
					}
					if (g_pTangram->m_pTangramAppProxy)
					{ 
						g_pTangram->m_pTangramAppProxy->m_pvoid = nullptr;
						if (g_pTangram->m_hCBTHook == NULL)
							g_pTangram->m_hCBTHook = SetWindowsHookEx(WH_CBT, CTangramApp::CBTProc, NULL, ::GetCurrentThreadId());
						g_pTangram->m_bEnableProcessFormTabKey = true;
						g_pTangram->EclipseInit();
					}
				}
			}
			else if (strFeatures == _T("tangraminit"))
			{
				CString strName = pIPCInfo->m_strKey;
				CString strInitData = pIPCInfo->m_strType;
				if (strInitData != _T(""))
				{
					CMarkup xml;
					if (xml.SetDoc(strInitData))
					{
						if (xml.FindElem())
						{
							CString tagName = xml.GetTagName();
							if (tagName.CompareNoCase(L"apps") == 0)
							{
								while (xml.FindChildElem(L"app"))
								{
									CString type = xml.GetChildAttrib(L"type");
									if (type.IsEmpty() || type.CompareNoCase(L"default") == 0)
									{
										xml.IntoElem();
										if (xml.FindChildElem(L"window"))
										{
											CString key = xml.GetChildAttrib(L"key");
											if (key.IsEmpty())
											{
												key = L"default";
											}
											CString layoutXML = xml.GetSubDoc();
											if (/*!bChild&&*/m_hExtendWnd == nullptr)
											{
												m_hExtendWnd = ::CreateWindowEx(NULL, _T("Chrome Extended Window Class"), L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, ::GetParent(m_hWnd), NULL, theApp.m_hInstance, NULL);
												m_hChildWnd = ::CreateWindowEx(NULL, _T("Chrome Extended Window Class"), L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, m_hExtendWnd, (HMENU)AFX_IDW_PANE_FIRST, theApp.m_hInstance, NULL);

												::SetWindowLongPtr(m_hExtendWnd, GWLP_USERDATA, (LONG_PTR)m_hChildWnd);
												::SetWindowLongPtr(m_hChildWnd, GWLP_USERDATA, (LONG_PTR)this);
											}
											if (m_hExtendWnd)
											{
												if (m_pFrame == nullptr) {
													IWndPage* pPage = nullptr;
													g_pTangram->CreateWndPage((__int64)m_hExtendWnd, &pPage);
													if (pPage) {
														IWndFrame* pFrame = nullptr;
														pPage->CreateFrame(CComVariant((__int64)0), CComVariant((__int64)m_hChildWnd), CComBSTR("default"), &pFrame);
														if (pFrame)
														{
															m_pFrame = (CWndFrame*)pFrame;
															m_pFrame->m_pWebWnd = this;
														}
													}
												}
												if (m_pFrame)
												{
													key.MakeLower();
													IWndNode* pNode = nullptr;
													m_pFrame->Extend(CComBSTR(key), CComBSTR(layoutXML), &pNode);
													if (pNode)
													{
														m_strCurKey = key;
														if (m_pFrame->m_pBindingNode)
															m_hHostWnd = m_pFrame->m_pBindingNode->m_pHostWnd->m_hWnd;
														else
															m_hHostWnd = NULL;
														if (::IsWindowVisible(m_hWnd))
														{
															auto it = g_pTangram->m_mapBrowserWnd.find(::GetParent(m_hWnd));
															if (it != g_pTangram->m_mapBrowserWnd.end())
															{
																CBrowserWnd* pParent = it->second;
																pParent->ChromeDraw();
																pParent->m_pBrowser->LayoutBrowser();
																::PostMessage(pParent->m_hWnd, WM_CHROMEDRAW, 2, 1);//| SWP_FRAMECHANGED
																if (pParent->m_pBrowser&&m_pFrame->m_pBindingNode == nullptr) {
																	pParent->m_pBrowser->LayoutBrowser();
																}
															}
														}
													}
												}
											}
										}
										else
										{
											// TODO: other section, e.g. data
										}
										xml.OutOfElem();
									}
									else 
									{
										// TODO: other type, e.g. comid
									}
								}
							}
						}
					}
				}
			} 
			else
			{
				int nPos = strFeatures.Find(_T(":"));
				if (nPos != -1) {
					CString strID = strFeatures.Mid(nPos + 1);
					CString strType = strFeatures.Left(nPos);
					if (strType.CompareNoCase(_T("app")) == 0)
					{
						g_pTangram->StartApplication(CComBSTR(strID), CComBSTR(pIPCInfo->m_strType));
					}
					if (strID == _T("tangram"))
					{
						m_pChromeRenderFrameHost = (CChromeRenderFrameHostBase*)wParam;
						CString strKey = pIPCInfo->m_strKey;
						strKey.MakeLower();
						CString strXml = pIPCInfo->m_strType;
						if (strXml == _T("hostntpxml") && g_pTangram->m_pTangramAppProxy)
						{
							if (g_pTangram->m_strNtpXml == _T(""))
							{
								g_pTangram->m_strNtpXml = g_pTangram->m_pTangramAppProxy->GetNtpXML(strXml);
								if (g_pTangram->m_strNtpXml == _T(""))
								{
									g_pTangram->m_strNtpXml=_T("<tangram><window><node id='splitter' name='container' rows='1' cols='2' height ='100,100,' width='300,500,' borderwidth='0' splitterwidth='4' middlecolor='RGB(240,240,240)'><node name='launcher' id='' cnnid='' caption='' borderwidth='0' /><node name='host' caption='host' id='hostview' borderwidth='0' /></node></window></tangram>");
								}
							}
							strXml = g_pTangram->m_strNtpXml;
						}
						if (strXml!=_T("")&&strKey != _T("")) {
							// for tangram developer
							if (/*!bChild&&*/m_hExtendWnd == nullptr)
							{
								m_hExtendWnd = ::CreateWindowEx(NULL, _T("Chrome Extended Window Class"), L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, ::GetParent(m_hWnd), NULL, theApp.m_hInstance, NULL);
								m_hChildWnd = ::CreateWindowEx(NULL, _T("Chrome Extended Window Class"), L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, m_hExtendWnd, (HMENU)AFX_IDW_PANE_FIRST, theApp.m_hInstance, NULL);

								::SetWindowLongPtr(m_hExtendWnd, GWLP_USERDATA, (LONG_PTR)m_hChildWnd);
								::SetWindowLongPtr(m_hChildWnd, GWLP_USERDATA, (LONG_PTR)this);
							}
							if (m_hExtendWnd)
							{
								if (m_pFrame == nullptr) {
									IWndPage* pPage = nullptr;
									g_pTangram->CreateWndPage((__int64)m_hExtendWnd, &pPage);
									if (pPage) {
										IWndFrame* pFrame = nullptr;
										pPage->CreateFrame(CComVariant((__int64)0), CComVariant((__int64)m_hChildWnd), CComBSTR("default"), &pFrame);
										if (pFrame)
										{
											m_pFrame = (CWndFrame*)pFrame;
											m_pFrame->m_pWebWnd = this;
										}
									}
								}
								if (m_pFrame)
								{
									strKey.MakeLower();
									IWndNode* pNode = nullptr;
									m_pFrame->Extend(CComBSTR(strKey), CComBSTR(strXml), &pNode);
									if (pNode)
									{
										m_strCurKey = strKey;
										if (m_pFrame->m_pBindingNode)
											m_hHostWnd = m_pFrame->m_pBindingNode->m_pHostWnd->m_hWnd;
										else
											m_hHostWnd = NULL;
										if (::IsWindowVisible(m_hWnd))
										{
											auto it = g_pTangram->m_mapBrowserWnd.find(::GetParent(m_hWnd));
											if (it != g_pTangram->m_mapBrowserWnd.end())
											{
												CBrowserWnd* pParent = it->second;
												pParent->ChromeDraw();
												pParent->m_pBrowser->LayoutBrowser();
												::PostMessage(pParent->m_hWnd, WM_CHROMEDRAW, 2, 1);//| SWP_FRAMECHANGED
												if (pParent->m_pBrowser&&m_pFrame->m_pBindingNode == nullptr) {
													pParent->m_pBrowser->LayoutBrowser();
												}
											}
										}
									}
								}
							}
						}
						LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
						return lRes;
					}
				}
				else
				{
					if(::IsWindow(m_hChildWnd))
						::SendMessage(m_hChildWnd, WM_CHROMEOPENWINDOWMSG, wParam, lParam);
				}
			}
		}

		LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
		return lRes;
	}

	LRESULT CHtmlWnd::OnTangramMsg(UINT uMsg,
		WPARAM wParam,
		LPARAM lParam,
		BOOL&) {
		bool bChild = ::GetWindowLongPtr(::GetParent(m_hWnd), GWL_STYLE)&WS_CHILD;
		switch (wParam)
		{
		case 20181220:
			{
				if (m_pChromeRenderFrameHost->m_pMsg == nullptr)
					return 0;
				int nPos = m_pChromeRenderFrameHost->m_pMsg->m_strKey.Find(_T("|"));
				CString strKey = m_pChromeRenderFrameHost->m_pMsg->m_strKey.Left(nPos);
				CString strXml = m_pChromeRenderFrameHost->m_pMsg->m_strData;

				CBrowserWnd* pParent = nullptr;
				auto it = g_pTangram->m_mapBrowserWnd.find(::GetParent(m_hWnd));
				if (it != g_pTangram->m_mapBrowserWnd.end())
				{
					pParent = it->second;
					if (strKey != _T("")) {
						if (/*!bChild&&*/m_hExtendWnd == nullptr)
						{
							m_hExtendWnd = ::CreateWindowEx(NULL, _T("Chrome Extended Window Class"), L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, ::GetParent(m_hWnd), NULL, theApp.m_hInstance, NULL);
							m_hChildWnd = ::CreateWindowEx(NULL, _T("Chrome Extended Window Class"), L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, m_hExtendWnd, (HMENU)AFX_IDW_PANE_FIRST, theApp.m_hInstance, NULL);

							::SetWindowLongPtr(m_hExtendWnd, GWLP_USERDATA, (LONG_PTR)m_hChildWnd);
							::SetWindowLongPtr(m_hChildWnd, GWLP_USERDATA, (LONG_PTR)this);
						}
						if (m_hExtendWnd)
						{
							if (m_pFrame == nullptr) {
								IWndPage* pPage = nullptr;
								g_pTangram->CreateWndPage((__int64)m_hExtendWnd, &pPage);
								if (pPage) {
									IWndFrame* pFrame = nullptr;
									pPage->CreateFrame(CComVariant((__int64)0), CComVariant((__int64)m_hChildWnd), CComBSTR("default"), &pFrame);
									if (pFrame)
									{
										m_pFrame = (CWndFrame*)pFrame;
										m_pFrame->m_pWebWnd = this;
									}
								}
							}
							if (m_pFrame) {
								IWndNode* pNode = nullptr;
								m_pFrame->Extend(CComBSTR(strKey), CComBSTR(strXml), &pNode);
								if (pNode)
								{
									if (m_pFrame->m_pBindingNode)
										m_hHostWnd = m_pFrame->m_pBindingNode->m_pHostWnd->m_hWnd;
									else
										m_hHostWnd = NULL;
									m_strCurKey = strKey;
									pParent->ChromeDraw();
									pParent->m_pBrowser->LayoutBrowser();
									::PostMessage(pParent->m_hWnd, WM_CHROMEDRAW, 2, 1);//| SWP_FRAMECHANGED
									if (pParent->m_pBrowser&&m_pFrame->m_pBindingNode == nullptr) {
										pParent->m_pBrowser->LayoutBrowser();
									}
								}
							}
						}
					}
				}
				//delete m_pChromeRenderFrameHost->m_pMsg;
				//m_pChromeRenderFrameHost->m_pMsg = nullptr;
				IPCMsg* pMsg = m_pChromeRenderFrameHost->m_pMsg;
				m_pChromeRenderFrameHost->m_pMsg = nullptr;
				::PostAppMessage(::GetCurrentThreadId(), WM_TANGRAMMSG, (WPARAM)pMsg,
					20181008);
		}
			break;
		case 20190115:
		{
			auto it = g_pTangram->m_mapBrowserWnd.find(::GetParent(m_hWnd));
			if (it != g_pTangram->m_mapBrowserWnd.end())
			{
				CBrowserWnd* pParent = it->second;

				if (/*!bChild&&*/m_hExtendWnd == nullptr)
				{
					m_hExtendWnd = ::CreateWindowEx(NULL, _T("Chrome Extended Window Class"), L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, ::GetParent(m_hWnd), NULL, theApp.m_hInstance, NULL);
					m_hChildWnd = ::CreateWindowEx(NULL, _T("Chrome Extended Window Class"), L"", WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, m_hExtendWnd, (HMENU)AFX_IDW_PANE_FIRST, theApp.m_hInstance, NULL);

					::SetWindowLongPtr(m_hExtendWnd, GWLP_USERDATA, (LONG_PTR)m_hChildWnd);
					::SetWindowLongPtr(m_hChildWnd, GWLP_USERDATA, (LONG_PTR)this);
				}
				if (m_hExtendWnd)
				{
					//CString strWorkspaceID = CString(m_pChromeRenderFrameHost->m_strWorkspaceID.c_str());
					//CString strRegionID = CString(m_pChromeRenderFrameHost->m_strRegionID.c_str());
					//g_pTangram->RegisterWorkspaceHWNDInternal(strWorkspaceID, m_hExtendWnd, nullptr);
					//void* pRegion_ = nullptr;
					//g_pTangram->RegisterRegionHWNDInternal(strRegionID, strWorkspaceID, m_hChildWnd, &pRegion_);
					//if (pRegion_)
					//{
					//	IWndFrame* pRegion = (IWndFrame*)pRegion_;
					//	m_pFrame = (CWndFrame*)pRegion;
					//	m_pFrame->m_pWebWnd = this;

					//	if (m_pFrame->m_pBindingNode)
					//		m_hHostWnd = m_pFrame->m_pBindingNode->m_pHostWnd->m_hWnd;
					//	else
					//		m_hHostWnd = NULL;
					//	m_strCurKey = m_pFrame->m_strCurrentKey;
					//	pParent->ChromeDraw();
					//	pParent->m_pBrowser->LayoutBrowser();
					//	::PostMessage(pParent->m_hWnd, WM_CHROMEDRAW, 2, 1);//| SWP_FRAMECHANGED
					//	if (pParent->m_pBrowser&&m_pFrame->m_pBindingNode == nullptr) {
					//		pParent->m_pBrowser->LayoutBrowser();
					//	}
					//}

				}
			}
		}
			break;
		case 20190407:
			{
				ChromePlus::IPCMsg* pIPCInfo = (ChromePlus::IPCMsg*)lParam;
				if (pIPCInfo && pIPCInfo->m_strType == _T("eclipse"))
				{
					g_pTangram->CreateEclipseApp(pIPCInfo->m_strKey, pIPCInfo->m_strData);
					//if (g_pTangram->m_bCLRStart && g_pTangram->m_mapBrowserWnd.size() == 0 && m_pTangramApplicationImpl->m_pJVMenv)
					//{
					//	if (m_pTangramApplicationImpl->systemClass != nullptr && m_pTangramApplicationImpl->exitMethod != nullptr)
					//	{
					//		try
					//		{
					//			this->UnsubclassWindow(true);
					//			delete this;
					//			OutputDebugString(_T("Exit Eclipse\n"));
					//			m_pTangramApplicationImpl->m_pJVMenv->CallStaticVoidMethod(m_pTangramApplicationImpl->systemClass, m_pTangramApplicationImpl->exitMethod, 0);
					//		}
					//		catch (...)
					//		{
					//		}
					//		if (m_pTangramApplicationImpl->m_pJVMenv->ExceptionOccurred()) {
					//			m_pTangramApplicationImpl->m_pJVMenv->ExceptionDescribe();
					//			m_pTangramApplicationImpl->m_pJVMenv->ExceptionClear();
					//		}
					//	}
					//}
				}
				if (pIPCInfo && pIPCInfo->m_strType == _T("atlmfc"))
				{
					CTangramAppProxy* pProxy = nullptr;
					CString appid = pIPCInfo->m_strKey;
					auto it2 = g_pTangram->m_mapTangramAppProxy.find(appid);
					if (it2 == g_pTangram->m_mapTangramAppProxy.end())
					{

					}
					else
					{
						pProxy = it2->second;
					}
					g_pTangram->m_pActiveMDIChildWnd = nullptr;
					CMarkup xml;
					if (xml.SetDoc(pIPCInfo->m_strData))
					{
						g_pTangram->m_strCurrentFrameID = xml.GetChildAttrib(L"mainframeid");// "apptitle"m_Parse.attr(_T("mainframeid"), _T("default"));
						if (g_pTangram->m_strCurrentFrameID == _T(""))
							g_pTangram->m_strCurrentFrameID = _T("default");
						CString strAppTitle = xml.GetChildAttrib(L"apptitle");
						g_pTangram->m_strCurrentFrameID.MakeLower();
						g_pTangram->m_strCurrentDocTemplateXml = xml.GetSubDoc();
						pProxy->m_strCreatingFrameTitle = strAppTitle;
						auto it3 = g_pTangram->m_mapTemplateInfo.find(_T(".tangramdoc"));
						if (it3 != g_pTangram->m_mapTemplateInfo.end())
						{
							pProxy->CreateNewDocument(g_pTangram->m_strCurrentFrameID, strAppTitle, it3->second, false);
							g_pTangram->m_bNewFile = FALSE;
						}
					}
				}
				delete pIPCInfo;
				return 0;
			}
			break;
		}
		LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
		return lRes;
	}

	LRESULT CHtmlWnd::OnParentChanged(UINT uMsg,
		WPARAM wParam,
		LPARAM lParam,
		BOOL&) {
		if (lParam) {
			HWND hNewPWnd = (HWND)lParam;
			HWND hNewPWnd2 = ::GetParent(m_hWnd);
			bool bNewParent = false;
			if (hNewPWnd != hNewPWnd2)
			{
				hNewPWnd = hNewPWnd2;
				bNewParent = true;
			}
			::GetClassName(hNewPWnd, g_pTangram->m_szBuffer, 256);
			CString strName = CString(g_pTangram->m_szBuffer);
			if (strName == _T("Chrome_WidgetWin_1")) {
				ChromePlus::CBrowserWnd* pChromeBrowserWnd = nullptr;
				auto it = g_pTangram->m_mapBrowserWnd.find(hNewPWnd);
				if (it == g_pTangram->m_mapBrowserWnd.end()) {
					pChromeBrowserWnd = new CComObject<ChromePlus::CBrowserWnd>();
					pChromeBrowserWnd->SubclassWindow(hNewPWnd);
					g_pTangram->m_mapBrowserWnd[hNewPWnd] = pChromeBrowserWnd;
					pChromeBrowserWnd->m_pBrowser = g_pTangram->m_pActiveBrowser;
					if (pChromeBrowserWnd->m_pBrowser)
						pChromeBrowserWnd->m_pBrowser->m_pProxy = pChromeBrowserWnd;
				}
				else {
					pChromeBrowserWnd = it->second;
				}
				g_pTangram->m_pActiveBrowser = pChromeBrowserWnd->m_pBrowser;
				if (pChromeBrowserWnd && m_hExtendWnd) {
					::SetParent(m_hExtendWnd,hNewPWnd);
					if (::IsWindowVisible(m_hWnd)) {
						pChromeBrowserWnd->m_pVisibleWebWnd = this;
						if (bNewParent)
						{
							::ShowWindow(m_hExtendWnd,SW_SHOW);
							g_pTangram->m_pActiveBrowser = pChromeBrowserWnd->m_pBrowser;
							g_pTangram->m_pActiveBrowser->m_pProxy = pChromeBrowserWnd;
							//pChromeBrowserWnd->ChromeDraw();
							pChromeBrowserWnd->m_pBrowser->LayoutBrowser();
						}
					}
				}
			}
		}
		LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
		return lRes;
	}

	LRESULT CHtmlWnd::OnDestroy(UINT uMsg,
		WPARAM wParam,
		LPARAM lParam,
		BOOL& /*bHandled*/) {
		if (m_hExtendWnd)
			::DestroyWindow(m_hExtendWnd);

		m_hExtendWnd = nullptr;

		if (m_bDevToolWnd) {
			if (m_pWebWnd) {
				m_pWebWnd->m_pDevToolWnd = nullptr;
				::PostMessage(::GetParent(m_pWebWnd->m_hWnd), WM_CHROMEDRAW, 0, 1);
			}
		}
		else {
			CBrowserWnd* pPWnd = nullptr;
			auto it2 = g_pTangram->m_mapBrowserWnd.find(::GetParent(m_hWnd));
			if (it2 != g_pTangram->m_mapBrowserWnd.end())
			{
				pPWnd = it2->second;
				if (pPWnd)
				{
					if (pPWnd->m_pVisibleWebWnd == this)
						pPWnd->m_pVisibleWebWnd = nullptr;
					::PostMessage(pPWnd->m_hWnd, WM_TANGRAMMSG, 20190506, 1);
				}
			}
			auto it = g_pTangram->m_mapHtmlWnd.find(m_hWnd);
			if (it != g_pTangram->m_mapHtmlWnd.end())
			{
				g_pTangram->m_mapHtmlWnd.erase(it);
			}
		}
		LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
		return lRes;
	}

	LRESULT CHtmlWnd::OnShowWindow(UINT uMsg,
		WPARAM wParam,
		LPARAM lParam,
		BOOL&) {
		CBrowserWnd* pParent = nullptr;
		HWND hPWnd = ::GetParent(m_hWnd);
		auto it = g_pTangram->m_mapBrowserWnd.find(hPWnd);
		if (it != g_pTangram->m_mapBrowserWnd.end()) {
			pParent = it->second;
			if (wParam) {
				if (!m_bDevToolWnd)
					pParent->m_pVisibleWebWnd = this;

				if (m_pFrame)
				{
					pParent->m_pBrowser->LayoutBrowser();
					::SetParent(m_hExtendWnd, hPWnd);
					RECT rc;
					::GetWindowRect(m_hWnd, &rc);
					pParent->ScreenToClient(&rc);
					::SetWindowPos(m_hExtendWnd, HWND_TOP, pParent->m_Rect.left, pParent->m_Rect.top, pParent->m_Rect.right - pParent->m_Rect.left, pParent->m_Rect.bottom - rc.top, SWP_DRAWFRAME | SWP_SHOWWINDOW);
					::PostMessage(pParent->m_hWnd, WM_TANGRAMMSG, 20181013, 1);
				}
			}
			else
			{
				::SetParent(m_hExtendWnd, m_hWnd);
				::ShowWindow(m_hExtendWnd, SW_HIDE);
			}
		}
		LRESULT lRes = DefWindowProc(uMsg, wParam, lParam);
		return lRes;
	}

	void CHtmlWnd::OnFinalMessage(HWND hWnd) {
		if (g_pTangram->m_pActiveHtmlWnd == this)
			g_pTangram->m_pActiveHtmlWnd = nullptr;
		CWindowImpl::OnFinalMessage(hWnd);
		delete this;
	}
}  // namespace ChromePlus



