/********************************************************************************
 *					Tangram Library - version 10.0.0
 **
 *********************************************************************************
 * Copyright (C) 2002-2018 by Tangram Team.   All Rights Reserved.
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
#pragma once

#include <atlstr.h>
#include <string>
#include "Tangram.h"
#include "TangramCommon.h"

namespace ChromePlus {
	using namespace std;
	using namespace ATL;

#define WM_CHROMEWEBCLIENTCREATED (WM_USER + 0x00004031)
#define WM_CHROMERENDERERFRAMEHOSTINIT (WM_USER + 0x00004032)
#define WM_CHROMEOPENWINDOWMSG (WM_USER + 0x00004033)
#define WM_CHROMEDRAW (WM_USER + 0x00004034)
#define WM_CHROMEWNDPARENTCHANGED (WM_USER + 0x00004035)
#define WM_DEVICESCALEFACTORCHANGED (WM_USER + 0x00004036)
#define WM_CHROMEAPPINIT (WM_USER + 0x00004037)
#define WM_CHROMEBOOKMARKBARSTATECHANGED (WM_USER + 0x00004038)
#define WM_CHROMEMSG (WM_USER + 0x00004035)
#define WM_BACKGROUNDWEBPROXY_MSG (WM_USER + 0x00004039)
#define WM_CHROMEWNDNODEMSG (WM_USER + 0x00004040)
#define WM_DOCUMENTONLOADCOMPLETED (WM_USER + 0x00004043)
#define WM_DOCUMENTFAILLOADWITHERROR (WM_USER + 0x00004044)
#define WM_CHROMEOPENURLMSG (WM_USER + 0x00004048)
#define WM_EXTENDMESSAGE (WM_USER + 0x00004050)
#define WM_CHROMERENDERFRAMEHOSTCREATED (WM_USER + 0x00004051)
#define WM_CHROMEIPCMSG (WM_USER + 0x00004052)
#define WM_LBUTTONDOWNEX (WM_USER + 0x00004049)

	typedef struct {
		CString m_strType;
		CString m_strKey;
		CString m_strData;
	} IPCMsg;

	class CChromeTab;
	class CChromeTabProxy;
	class CChromeBrowserBase;
	class CChromeBrowserProxy;
	class CChromeProcessProxy;
	class CChromeRenderProcess;
	class CChromeWebContentBase;
	class CTangramMainDllLoader;
	class OmniboxViewViewsProxy;
	class CTangramMessagePumpImpl;
	class CTangramMessagePumpImplProxy;
	class CChromeRenderProcessProxy;
	class CChromeBrowserCreatorImpl;
	class CChromeWebContentProxyBase;
	class CChromeRenderFrameHostBase;
	class CChromeChildProcessHostImpl;
	class CChromeChildProcessHostImplProxy;
	class CChromeRenderFrameHostProxyBase;

	typedef ChromePlus::CChromeProcessProxy*(
		__stdcall* GetChromeProcessProxyFunction)();

	class CChromeProcessProxy {
	public:
		CChromeProcessProxy() {
			m_bClose = false;
			m_bInit = false;
			m_hParent = NULL;
			m_pCreatorImpl = nullptr;
			m_pActiveBrowser = nullptr;
			m_pCreatingOmniboxViewViews = nullptr;
			m_pCreatingChromeRenderFrameHostBase = nullptr;
		};

		virtual ~CChromeProcessProxy() {};

		bool m_bClose;
		bool m_bInit;
		HWND m_hParent;
		CChromeBrowserBase* m_pActiveBrowser;
		CChromeBrowserCreatorImpl* m_pCreatorImpl;
		OmniboxViewViewsProxy* m_pCreatingOmniboxViewViews;
		CChromeRenderFrameHostBase* m_pCreatingChromeRenderFrameHostBase;

		virtual void OnSubBrowserWndCreated(HWND hParent, HWND hBrowser) = 0;
		virtual void OnRenderProcessCreated(CChromeRenderProcess* pProcess) = 0;
		virtual void OnDocumentOnLoadCompleted(CChromeRenderFrameHostBase*,
			HWND hHtmlWnd,
			void*) = 0;
		virtual void ChromeTabCreated(CChromeTab* pTab) = 0;
		virtual void ChromeChildProcessCreated(
			CChromeChildProcessHostImpl*
			pChromeChildProcessHostImpl) = 0;
		virtual CString GetProcessPath(const char* _ver, CString process_type) = 0;
		virtual void SetTangramMessagePumpImpl(
			ChromePlus::CTangramMessagePumpImpl* pTangramMessagePumpImpl) = 0;
		virtual CString GetSchemeBaseName() = 0;
		virtual HICON GetAppIcon(int nIndex) = 0;
	};

	class CTangramMainDllLoader {
	public:
		CTangramMainDllLoader(){};
		virtual ~CTangramMainDllLoader() {};
		virtual void LaunchEx() {};
	};

	class CTangramMessagePumpImpl {
	public:
		CTangramMessagePumpImpl() {};
		virtual ~CTangramMessagePumpImpl() {};

		CTangramMessagePumpImplProxy* m_pProxy;
	};

	class CTangramMessagePumpImplProxy {
	public:
		CTangramMessagePumpImplProxy() {};
		virtual ~CTangramMessagePumpImplProxy() {};
		virtual void ProcessMsg(MSG* msg) {};
		virtual bool DoIdleWork() = 0;
		virtual BOOL OnAppIdle(BOOL& bIdle, LONG lCount) = 0;
		virtual BOOL IsAppIdleMessage() = 0;
	};

	class CChromeBrowserCreatorImpl {
	public:
		CChromeBrowserCreatorImpl() {};
		virtual ~CChromeBrowserCreatorImpl() {};

		virtual HWND CreateBrowser(HWND hParent, CString strXml) = 0;
	};

	class CChromeChildProcessHostImpl {
	public:
		CChromeChildProcessHostImpl() { m_pChildProcessHostProxy = nullptr; };

		CChromeChildProcessHostImplProxy* m_pChildProcessHostProxy;
		virtual ~CChromeChildProcessHostImpl() {};
	};

	class CChromeChildProcessHostImplProxy {
	public:
		CChromeChildProcessHostImplProxy() {};

		virtual ~CChromeChildProcessHostImplProxy() {};

		virtual void OnRenderProcessCreated() = 0;
	};

	class CChromeRenderProcess {
	public:
		CChromeRenderProcess() { m_pRenderProcessProxy = nullptr; };
		virtual ~CChromeRenderProcess() {};

		CChromeRenderProcessProxy* m_pRenderProcessProxy;
	};

	class CChromeRenderProcessProxy {
	public:
		CChromeRenderProcessProxy() {};
		virtual ~CChromeRenderProcessProxy() {};

		virtual CString ProcessPath() = 0;
		virtual void OnRenderProcessCreated() = 0;
	};

	class CChromeTab {
	public:
		CChromeTab() { m_pTabProxy = nullptr; };
		virtual ~CChromeTab() {};

		CChromeTabProxy* m_pTabProxy;
	};

	class CChromeTabProxy {
	public:
		CChromeTabProxy() { m_pTab = nullptr; };
		virtual ~CChromeTabProxy() {};
		CChromeTab* m_pTab;
	};

	class OmniboxViewViewsProxy {
	public:
		OmniboxViewViewsProxy() {
			HMODULE hModule = ::GetModuleHandle(L"TangramCore.dll");
			if (hModule != nullptr) {
				ChromePlus::GetChromeProcessProxyFunction GetChromeProcessProxyFunction =
					(ChromePlus::GetChromeProcessProxyFunction)GetProcAddress(
						hModule, "GetChromeProcessProxy");
				if (GetChromeProcessProxyFunction != NULL) {
					ChromePlus::CChromeProcessProxy* _pProxy =
						GetChromeProcessProxyFunction();
					if (_pProxy) {
						_pProxy->m_pCreatingOmniboxViewViews = this;
					}
				}
			}
		};
		virtual ~OmniboxViewViewsProxy() {};

		virtual void Blur() = 0;
		virtual bool IsFocused() = 0;
	};

	class CChromeBrowserBase {
	public:
		CChromeBrowserBase() {};

		virtual ~CChromeBrowserBase() {};

		CChromeBrowserProxy* m_pProxy;

		virtual int GetType() = 0;
		virtual void LayoutBrowser() = 0;
		virtual void OpenURL(std::wstring strURL,
			BrowserWndOpenDisposition nPos,
			void* pVoid) = 0;
	};

	class CChromeBrowserProxy {
	public:
		CChromeBrowserProxy() {
		};

		virtual ~CChromeBrowserProxy() {};

		CChromeBrowserBase* m_pBrowser;
		OmniboxViewViewsProxy* m_pOmniboxViewViews;

		virtual void UpdateContentRect(RECT& rc, int nTopFix) = 0;
	};

	class CChromeWebContentBase {
	public:
		CChromeWebContentBase() { m_pProxy = nullptr; };

		virtual ~CChromeWebContentBase() {};

		CChromeWebContentProxyBase* m_pProxy;

		virtual CChromeRenderFrameHostBase* GetMainRenderFrameHost() = 0;
	};

	class CChromeWebContentProxyBase {
	public:
		CChromeWebContentProxyBase() { m_pWebContent = nullptr; };

		virtual ~CChromeWebContentProxyBase() {};

		CChromeWebContentBase* m_pWebContent;
	};

	class CChromeRenderFrameHostBase {
	public:
		CChromeRenderFrameHostBase() {
			m_pMsg = nullptr;
			m_pProxy = nullptr;
			m_strLastCommitUrl = "";
			m_strWorkspaceID = L"";
			m_strRegionID = L"";
		};

		IPCMsg* m_pMsg;
		std::string m_strLastCommitUrl;
		CChromeRenderFrameHostProxyBase* m_pProxy;
		std::wstring m_strWorkspaceID;
		std::wstring m_strRegionID;

		virtual ~CChromeRenderFrameHostBase() {};

		virtual void OpenURLWithID(std::wstring strUrl,
			BrowserWndOpenDisposition nPos,
			std::wstring strWorkspaceID,
			std::wstring strRegionID) = 0;
		virtual void InternalSend(IPCMsg*) = 0;
		virtual std::string Get_LastCommittedURL() = 0;
		virtual void SendTangramMessage(std::wstring channel,
			std::wstring arg1,
			std::wstring arg2) = 0;
		virtual void OnSetFocusedFrame() = 0;
	};

	class CChromeRenderFrameHostProxyBase {
	public:
		CChromeRenderFrameHostProxyBase() { m_pChromeRenderFrameHost = nullptr; };

		virtual ~CChromeRenderFrameHostProxyBase() {};

		CChromeRenderFrameHostBase* m_pChromeRenderFrameHost;
	};

	class CChromeRendererFrameBase {
	public:
		CChromeRendererFrameBase() {};

		virtual ~CChromeRendererFrameBase() {};

		virtual void OnTangramExtend(std::wstring strXml,
			std::wstring strKey,
			std::wstring strFeatures) {};
	};

}  // namespace ChromePlus
