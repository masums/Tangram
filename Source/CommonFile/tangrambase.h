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
* http://www.tangramteam.com/
*
*
********************************************************************************/

#pragma once

#include <map>
#include "mso.h"
#include "jni.h"
#include "Tangram.h"
#include "metahost.h"
#include "ChromeProxy.h"
#include "TangramCommon.h"
#include "TangramXmlParse.h"
using namespace std;
using namespace ATL;

#pragma comment(lib, "imagehlp.lib")

namespace TangramCommon
{
	class CChromeAppProxy;
	class CTangramAppProxy;
	class CTangramPackageProxy;
	class CTangramCLRProxyImpl;
	typedef struct tagMainFrameInfo
	{
		BOOL				m_bNewFrame;
		BOOL				m_bTabIcons;
		BOOL				m_bTabCloseButton;
		BOOL				m_bTabCustomTooltips;
		BOOL				m_bAutoColor;
		BOOL				m_bDocumentMenu;
		BOOL				m_bEnableTabSwap;
		BOOL				m_bFlatFrame;
		BOOL				m_bActiveTabCloseButton;
		BOOL				m_bReuseRemovedTabGroups;
		BOOL				m_bTabbedMDI;
		CString				m_strID;
		CString				m_strTitle;
		int					m_nResID;
		int					m_nTabMDIStyle;
		int					m_tabLocation;
		int					m_nTabBorderSize;
		void*				m_pTangramFrame;
		CTangramAppProxy*	m_pTangramAppProxy;
	}MainFrameInfo;

	typedef struct tagMainFrameInfo2
	{
		int					m_nImageIndex;
		CString				m_strID;
		CString				m_strProxyID;
		CString				m_strLib;
	}MainFrameInfo2;

	typedef struct tagCtrlEventInfo
	{
		WindowEventType EventType;
		IDispatch*		m_pCtrlDisp;
	}CtrlEventInfo;

	typedef struct tagWndFrameInfo
	{
		HWND			m_hCtrlHandle;
		IDispatch*		m_pDisp;
		IDispatch*		m_pParentDisp;
		CString			m_strCtrlName;
		CString			m_strFrameName;
		CString			m_strParentCtrlName;
	}WndFrameInfo;

	typedef struct
	{
		int			m_nType;
		CString		m_strMessage;
		CString		m_strMessageData;
	} TangramIPCMessageData;

	struct DocTemplateInfo
	{
		bool bDll;
		int nResID;
		CString strProxyName;
		CString strProxyID;
		CString strFileTypeID;
		CString strExt;
		CString strfilterName;
	};

	typedef struct tagTangramDocTemplateInfo
	{
		BOOL			m_bCOMObj;
		int				m_nImageIndex;
		HWND			m_hWnd;
		CString			m_strLib;
		CString			m_strExt;
		CString			m_strFilter;
		CString			m_strProxyID;
		CString			m_strDocTemplateKey;
		CString			m_strTemplatePath;
		void*			m_pDocTemplate;
	}TangramDocTemplateInfo;

	typedef struct tagTangramProjectInfo
	{
		BOOL			m_bTangramSupport;
		int				m_nPrjType;
		int				m_nImageIndex;
		int				m_nIndex;
		CString			m_strPrjFullPath;
		CString			m_strExt;
		CString			m_strFilter;
		IDispatch*		m_pPrjDisp;
	}TangramProjectInfo;

	typedef struct tagTangramDocInfo
	{
		CString		m_strTangramID;
		CString		m_strAppProxyID;
		CString		m_strAppName;
		CString		m_strMainFrameID;
		CString		m_strDocID;
		CString		m_strTangramData;
	}TangramDocInfo;

	typedef struct tagCtrlInfo
	{
		HWND			m_hWnd;
		CString			m_strName;
		IWndPage*		m_pPage;
		IWndNode*		m_pNode;
		IDispatch*		m_pCtrlDisp;
	}CtrlInfo;

	class CTangramProxyBase : public ChromePlus::CChromeProcessProxy
	{
	public:
		CTangramProxyBase()
		{
			m_bExportComponent = false;
			m_hMainWnd = nullptr;
			m_hHostWnd = nullptr;
			m_hFormNodeWnd = nullptr;
			m_hTangramWnd = nullptr;
			m_pCLRProxy = nullptr;
			m_hChildHostWnd = nullptr;
			m_pTangramPackageProxy = nullptr;
			m_strNtpXml = _T("");
			m_strAppCurrentFormTemplatePath = _T("");
		};

		bool						m_b64bitSystem = false;
		bool						m_bX86App = false;
		bool						m_bOfficeApp = false;
		bool						m_bEclipse = false;
		bool						m_bDeveloperModel = false;
		bool						m_bLoadEclipseDelay = false;
		bool						m_bTangramInit = false;
		bool						m_bAdmin;
		bool						m_bCanClose;
		bool						m_bFrameDefaultState;
		bool						m_bOfficeAddinUnLoad;
		bool						m_bWinFormActived;
		bool						m_bEnableProcessFormTabKey;
		bool						m_bDeleteWndPage;
		bool						m_bCLRStart;
		bool						m_bNewFile;
		bool						m_bFirstDocCreated;
		bool						m_bUsingDefaultAppDocTemplate;
		bool						m_bCreatingForm;
		bool						m_bCLRObjTemplateInit;
		bool						m_bTangramJniInit;
		bool						m_bNeedProcess;
		bool						m_bChromeNeedClosed;
		bool						m_bCreatingDevTool;
		bool						m_bOMNIBOXPOPUPVISIBLE;
		BOOL						m_bExportComponent;
		DWORD						m_nAppType;
		DWORD						m_dwThreadID;
		HWND						m_hTemplateWnd;
		HWND						m_hTemplateChildWnd;
		HWND						m_hActiveWnd;
		HWND						m_hEclipseHideWnd;
		HWND						m_hHostBrowserWnd;
		HWND						m_hMainWnd;
		HWND						m_hHostWnd;
		HWND						m_hChildHostWnd;
		HWND						m_hTangramWnd;
		HWND						m_hVSToolBoxWnd;
		HWND						m_hFormNodeWnd;

		CString						m_strAppKey;
		CString						m_strAppName;
		CString						m_strExeName;
		CString						m_strAppPath;
		CString						m_strTempPath;
		CString 					m_strConfigDataFile;
		CString						m_strAppDataPath;
		CString						m_strCurrentAppID;
		CString						m_strProgramFilePath;
		CString						m_strTangramURLBase;
		CString						m_strAppCommonDocPath;
		CString						m_strAppCommonDocPath2;
		CString						m_strAppCommonFormsPath;
		CString						m_strAppCommonFormsInfoPath;
		CString						m_strAppCommonFormsTemplatePath;
		CString						m_strAppFormsPath;
		CString						m_strAppFormsInfoPath;
		CString						m_strAppWPFObjsInfoPath;
		CString						m_strAppControlsInfoPath;
		CString						m_strAppFormsTemplatePath;
		CString						m_strAppCurrentFormTemplatePath;
		CString						m_strNodeSelectedText;
		CString						m_strDesignerTip1;
		CString						m_strDesignerTip2;
		CString						m_strDesignerXml;
		CString						m_strDesignerToolBarCaption;
		CString						m_strStartView;
		CString						m_strNewDocXml;
		CString						m_strStartXml;
		CString						m_strNtpXml;

		CString 					m_strConfigFile;
		CString						m_strWinAppConfigFile;
		CString						m_strDocFilters;
		CString						m_strDesignerInfo;
		CString						m_strTemplatePath;
		CString						m_strCurrentFrameID;
		CString						m_strDocTemplateStrs;
		CString						m_strDefaultTemplate;
		CString						m_strDefaultTemplate2;
		CString						m_strCurrentDocTemplateXml;
		CString						m_strCurrentKey;
		CString						m_strWorkBenchStrs;
		CString						m_strStartupCLRObj;
		CString						m_strCurrentEclipsePagePath;
		CString						m_strLogFileFormatPath;
		CString						m_strDefaultXml;
		CString						m_strLibs;
		CString						m_strAsynKeys;
		CString						m_strCreatorIDs;
		CString						m_strStartupURL;

		CStringA					m_strBridgeJavaClass;
		CString						m_strStartJarPath;


		CTangramAppProxy*			m_pActiveAppProxy;
		CTangramAppProxy*			m_pTangramAppProxy;
		CTangramAppProxy*			m_pTangramCLRAppProxy;
		CTangramPackageProxy*		m_pTangramPackageProxy;
		CTangramCLRProxyImpl*		m_pCLRProxy;
		IDispatch*					m_pMainFormDisp;
		IDispatch*					m_pAppDisp;
		IWndNode*					m_pHostViewDesignerNode;
		ITangramExtender*			m_pExtender;
		ITaskbarList3*				m_pTaskbarList3;

		map<CString, IDispatch*>	m_mapObjDic;
		map<CString, IDispatch*>	m_mapAppDispDic;
		map<CString, CComVariant>	m_mapValInfo;
		map<CString, void*>			m_mapTemplateInfo;
		map<DWORD, ITangram*>		m_mapTangramforProcess;
		map<CString, ITangram*>		m_mapRemoteTangramCore;
		map<CString, CTangramAppProxy*>			m_mapTangramAppProxy;
		map<int, TangramDocTemplateInfo*>		m_mapTangramDocTemplateInfo;
		map<CString, TangramDocTemplateInfo*>	m_mapTangramDocTemplateInfo2;
		map<CString, TangramDocTemplateInfo*>	m_mapTangramFormsTemplateInfo;
		map<int, TangramDocTemplateInfo*>		m_mapTangramFormsTemplateInfo2;
		map<CString, HWND>						m_mapTangramDesignedWindows;
		map<CString, void*>						m_mapExcludedObjects;

		virtual void AttachNode(void* pNodeEvents) {};
		virtual void TangramInit() {};
		virtual void OnEvent(IEventProxy* pEvent, IDispatch* pCtrlDisp, IDispatch* pArgDisp) {};
		virtual CString GetNewLayoutNodeName(BSTR strCnnID, IWndNode* pDesignNode) { return _T(""); };
		virtual IWndFrame* ConnectPage(HWND, CString, IWndPage* pPage, WndFrameInfo*) { return nullptr; };
		virtual IWndPage* ExtendFrame(HWND, CString strName, CString strKey) { return nullptr; };
		virtual IWndNode* ExtendCtrl(__int64 handle, CString name, CString NodeTag) { return nullptr; };
		virtual bool IsMDIFrameNode(IWndNode*) { return false; };
		virtual BOOL UpdateProjectforTangram(CString strPrjFullName) { return false; };
		virtual void TangramToolTabCtrlCreated(HWND hTabCtrl) {};
		virtual void DotNetControlCreated(MSG* lpMsg) {};
		virtual void ExportComponentInfo() {};
		virtual void ConnectDocTemplate(LPCTSTR strType, LPCTSTR strExt, void* pTemplate) {};
		virtual ITangramDoc* ConnectTangramDoc(CTangramAppProxy* AppProxy, LONGLONG docID, HWND hView, HWND hFrame, LPCTSTR strDocType) { return nullptr; };
		virtual void Log(CString strMessage) = 0;
	};

	class CTangramWndNodeProxy
	{
	public:
		CTangramWndNodeProxy() { };
		virtual ~CTangramWndNodeProxy() {};

		bool	m_bAutoDelete;

		virtual void OnExtendComplete() {};
		virtual void OnDestroy() {};
		virtual void OnNodeAddInCreated(IDispatch* pAddIndisp, CString bstrAddInID, CString bstrAddInXml) {};
		virtual void OnNodeAddInsCreated() {};
		virtual void OnNodeDocumentComplete(IDispatch* ExtenderDisp, CString bstrURL) {};
		virtual void OnControlNotify(IWndNode* sender, LONG NotifyCode, LONG CtrlID, HWND CtrlHandle, CString CtrlClassName) {};
		virtual void OnTabChange(LONG ActivePage, LONG OldPage) {};
		virtual void OnTangramDocEvent(ITangramEventObj* pEventObj) {};
	};

	class CTangramWndPageProxy
	{
	public:
		CTangramWndPageProxy() { };
		virtual ~CTangramWndPageProxy() {};

		bool	m_bAutoDelete;

		virtual void OnPageLoaded(IDispatch* sender, CString url) {};
		virtual void OnNodeCreated(IWndNode* pNodeCreated) {};
		virtual void OnAddInCreated(IWndNode* pRootNode, IDispatch* pAddIn, CString bstrID, CString bstrAddInXml) {};
		virtual void OnBeforeExtendXml(CString bstrXml, HWND hWnd) {};
		virtual void OnExtendXmlComplete(CString bstrXml, HWND hWnd, IWndNode* pRetRootNode) {};
		virtual void OnDestroy() {};
		virtual void OnNodeMouseActivate(IWndNode* pActiveNode) {};
		virtual void OnClrControlCreated(IWndNode* Node, IDispatch* Ctrl, CString CtrlName, HWND CtrlHandle) {};
		virtual void OnTabChange(IWndNode* sender, LONG ActivePage, LONG OldPage) {};
		virtual void OnEvent(IDispatch* sender, IDispatch* EventArg) {};
		virtual void OnControlNotify(IWndNode* sender, LONG NotifyCode, LONG CtrlID, HWND CtrlHandle, CString CtrlClassName) {};
		virtual void OnTangramEvent(ITangramEventObj* NotifyObj) {};
	};

	class CTangramWndFrameProxy
	{
	public:
		CTangramWndFrameProxy() { };
		virtual ~CTangramWndFrameProxy() {};

		bool	m_bAutoDelete;
		virtual void OnExtend(IWndNode* pRetNode, CString bstrKey, CString bstrXml) {};
	};

	class CTangramApplicationImpl
	{
	public:
		CTangramApplicationImpl()
		{
			m_pJVM = nullptr;
			m_pJVMenv = nullptr;
			m_pTangram = nullptr;
			m_pTangramAppProxy = nullptr;
			systemClass = nullptr;
			exitMethod = nullptr;
			loadMethod = nullptr;
			m_bUsingDefaultUI = false;
		};

		virtual ~CTangramApplicationImpl()
		{
			OutputDebugString(_T("delete CTangramApplicationImpl\n"));
			//Exit();
		};

		void Exit()
		{
			if (m_pJVMenv && systemClass != nullptr && exitMethod != nullptr)
			{
				try
				{
					OutputDebugString(_T("Exit Eclipse\n"));
					m_pJVMenv->CallStaticVoidMethod(systemClass, exitMethod, 0);
				}
				catch (...)
				{
				}
				if (m_pJVMenv->ExceptionOccurred()) {
					m_pJVMenv->ExceptionDescribe();
					m_pJVMenv->ExceptionClear();
				}
			}
		}
		virtual void OnTangramCtrlCreated(ITangramCtrl* pITangramCtrl) {};

		bool				m_bUsingDefaultUI;
		ITangram*			m_pTangram;
		JNIEnv *			m_pJVMenv;
		JavaVM * 			m_pJVM;
		jclass				systemClass;
		jmethodID			exitMethod;
		jmethodID			loadMethod;

		CTangramAppProxy*	m_pTangramAppProxy;
	};

	class CTangramDocProxy
	{
	public:
		CTangramDocProxy() {};
		virtual ~CTangramDocProxy()
		{
			m_bDocLoaded = false;
			m_bCanDestroyFrame = true;
			m_strTangramData = _T("");
			m_pDoc = nullptr;
		};

		BOOL		m_bDocLoaded;
		BOOL		m_bCanDestroyFrame;
		CString		m_strTangramID;
		CString		m_strAppProxyID;
		CString		m_strAppName;
		CString		m_strMainFrameID;
		CString		m_strDocID;
		CString		m_strTangramData;

		ITangramDoc* m_pDoc;
		virtual void SaveDoc() {};
		virtual void TangramDocEvent(ITangramEventObj* pEventObj){};
	};

	class CTangramAppProxy
	{
	public:
		CTangramAppProxy()
		{
			m_hInstance = nullptr;
			m_hMainWnd = nullptr;
			m_hCreatingView = nullptr;
			m_pTangramProxyBase = nullptr;
			m_bAutoDelete = FALSE; 
		};
		virtual ~CTangramAppProxy() {};

		BOOL								m_bAutoDelete;
		HWND								m_hMainWnd;
		HWND								m_hCreatingView;
		HINSTANCE							m_hInstance;
		LPCTSTR								m_strProxyName;
		LPCTSTR								m_strProxyID;
		LPCTSTR								m_strCreatingFrameTitle;
		LPCTSTR								m_strClosingFrameID;
		void*								m_pvoid;
		CTangramDocProxy*					m_pCurDocProxy;
		CTangramProxyBase*					m_pTangramProxyBase;

		virtual void OnActiveMainFrame(HWND) {};
		virtual int OnDestroyMainFrame(CString strID, int nMainFrameCount, int nWndType) { return -1; };
		virtual LRESULT OnForegroundIdleProc() { return 0; };
		virtual BOOL TangramPreTranslateMessage(MSG* pMsg) { return false; };
		virtual void OnTangramClose() {};
		virtual void OnExtendComplete(HWND hWnd, CString bstrUrl, IWndNode* pRootNode) {};
		virtual void OnTangramEvent(ITangramEventObj* NotifyObj) {};
		virtual void RegistWndClassToTangram() {};
		virtual void OnActiveDocument(ITangramDoc* ActiveDoc, IWndNode* pNodeInDoc, IWndNode* pNodeInCtrlBar, HWND hCtrlBar) {};
		virtual HWND CreateWindowObj(LPCTSTR strClsName, IWndNode* pNode, HWND hParent) { return nullptr; };
		virtual HWND CreateNewFrame(CString strFrameKey) { return nullptr; };
		virtual HWND GetActivePopupMenu(HWND hwnd) { return nullptr; };
		virtual HRESULT CreateTangramCtrl(void* pv, REFIID riid, LPVOID* ppv) { return S_FALSE; };
		virtual ITangramDoc* CreateNewDocument(LPCTSTR lpszFrameID, LPCTSTR lpszAppTitle, void* pDocTemplate, BOOL bNewFrame) { return nullptr; };
		virtual ITangramDoc* OpenDocument(void* pDocTemplate, CString strFile, BOOL bNewFrame) { return nullptr; };
		virtual CTangramWndNodeProxy* OnTangramNodeInit(IWndNode* pNewNode) { return nullptr; };
		virtual CTangramWndFrameProxy* OnWndFrameCreated(IWndFrame* pNewFrame) { return nullptr; };
		virtual CTangramWndPageProxy* OnWndPageCreated(IWndPage* pNewWndPage) { return nullptr; };
		virtual void MouseMoveProxy(HWND hWnd) { };
		virtual void AddDoc(LONGLONG llDocID, ITangramDoc* pDoc) {};
		virtual void RemoveDoc(LONGLONG llDocID) {};
		virtual ITangramDoc* GetDoc(LONGLONG llDocID) { return nullptr; };
		virtual ITangramDoc* NewDoc() { return nullptr; };
		virtual HWND InitTangramApp() { return NULL; };
		virtual CString GetNtpXML(CString strKey) { return _T(""); };
	};

	class CTangramWPFObj
	{
	public:
		CTangramWPFObj() 
		{
			m_pDisp = nullptr;
			m_hwndWPF = nullptr;
		};
		~CTangramWPFObj() {};
		HWND m_hwndWPF;
		IDispatch* m_pDisp;
		map<CString, IDispatch*> m_mapWPFObj;
		virtual BOOL IsVisible() { return false; };
		virtual void InvalidateVisual() {};
		virtual void ShowVisual(BOOL bShow) {};
		virtual void Focusable(BOOL bFocus) {};
	};

	class CTangramPackageProxy
	{
	public:
		CTangramPackageProxy()
		{
			m_hTangramToolWnd = nullptr;
			m_hVSGridView = nullptr;
			m_pFrame = nullptr;
			m_pProxy = nullptr;
			m_pToolBoxFrame = nullptr;
			m_pClassViewFrame = nullptr;
			m_pPropertyFrame = nullptr;

			m_strOrgs = _T("");
			m_strRepo = _T("");
			m_strBranch = _T("");
			m_strToolBoxXML = _T("");
			m_strClassViewXML = _T("");
			m_strPropertiesXML = _T("");
			m_strTangramToolWndXML = _T("");
			m_strCurrentXtmlFilePath = _T("");
		};

		HWND								m_hTangramToolWnd;
		HWND								m_hVSGridView;
		HWND								m_hPropertyWnd;
		HWND								m_hPropertyPWnd;

		CString								m_strOrgs;
		CString								m_strRepo;
		CString								m_strBranch;
		CString								m_strToolBoxXML;
		CString								m_strClassViewXML;
		CString								m_strPropertiesXML;
		CString								m_strTangramToolWndXML;
		CString								m_strCurrentXtmlFilePath;

		IWndFrame*							m_pFrame;
		CTangramProxyBase*					m_pProxy;
		map<HWND, IWndFrame*>				m_mapWinFormFrame;

		IWndFrame*							m_pToolBoxFrame;
		IWndFrame*							m_pClassViewFrame;
		IWndFrame*							m_pPropertyFrame;

		virtual HWND CreateTangramToolWnd() { return nullptr; };
		virtual HWND CreateTangramHelpToolWnd(CString strXml) { return nullptr; };
		virtual void OnSelectedObjectsChanged(IDispatch* pObj, CString strType, LPARAM hObjWnd, int nType) {};
		virtual void ShowTangramToolWnd(BOOL bShowMainToolWnd, int nShow) {};
		virtual void TangramAction(CString strXml) {};
	};

	class CTangramCLRProxyImpl
	{
	public:
		CTangramCLRProxyImpl()
		{
			m_pProxy = NULL;
			m_strObjTypeName = _T("");
		};
		CString				m_strObjTypeName;

		CTangramProxyBase*	m_pProxy;
		virtual BSTR AttachObjEvent(IDispatch* EventObj, IDispatch* SourceObj, WindowEventType EventType, IDispatch* HTMLWindow) = 0;
		virtual HRESULT ActiveCLRMethod(BSTR bstrObjID, BSTR bstrMethod, BSTR bstrParam, BSTR bstrData) = 0;
		virtual HRESULT ActiveCLRMethod(IDispatch* obj, BSTR bstrMethod, BSTR bstrParam, BSTR bstrData) = 0;
		virtual IDispatch* CreateCLRObj(BSTR bstrObjID) = 0;
		virtual HRESULT ProcessCtrlMsg(HWND hCtrl, bool bShiftKey) = 0;
		virtual BOOL ProcessFormMsg(HWND hFormWnd, LPMSG lpMsg, int nMouseButton) = 0;
		virtual IDispatch* TangramCreateObject(BSTR bstrObjID, long hParent, IWndNode* pHostNode)=0;
		virtual int IsWinForm(HWND hWnd) = 0;
		virtual int IsSpecifiedType(IUnknown* pUnknown, BSTR bstrName) = 0;
		virtual IDispatch* GetCLRControl(IDispatch* CtrlDisp, BSTR bstrNames)=0;
		virtual BSTR GetCtrlName(IDispatch* pCtrl)=0;
		virtual IDispatch* GetCtrlFromHandle(HWND hWnd)=0;
		virtual HWND GetMDIClientHandle(IDispatch* pMDICtrl)=0;
		virtual IDispatch* GetCtrlByName(IDispatch* CtrlDisp, BSTR bstrName, bool bFindInChild)=0;
		virtual HWND GetCtrlHandle(IDispatch* pCtrl)=0;
		virtual BSTR GetCtrlType(IDispatch* pCtrl) { return L""; };
		virtual HWND IsCtrlCanNavigate(IDispatch* ctrl)=0;
		virtual void TangramAction(BSTR bstrXml, IWndNode* pNode)=0;
		virtual BSTR GetCtrlValueByName(IDispatch* CtrlDisp, BSTR bstrName, bool bFindInChild)=0;
		virtual void SetCtrlValueByName(IDispatch* CtrlDisp, BSTR bstrName, bool bFindInChild, BSTR strVal)=0;
		virtual void SelectNode(IWndNode* ) { };
		virtual void SelectObj(IDispatch* ) { };
		virtual void ReleaseTangramObj(IDispatch* ) { };
		virtual void AttachVSPropertyWnd(HWND ) { };
		virtual void AttachCLRObjEvent(IDispatch* Sender, WindowEventType nType, HWND hNotifyWnd, VARIANT_BOOL bAttachEvent) { };
		virtual void WindowCreated(LPCTSTR strClassName, LPCTSTR strName, HWND hPWnd, HWND hWnd) {};
		virtual void WindowDestroy(HWND hWnd) {};
		virtual CTangramWPFObj* CreateWPFControl(IWndNode* pNode, HWND hPWnd, UINT nID) { return nullptr; };
		virtual HRESULT NavigateURL(IWndNode* pNode, CString strURL, IDispatch* dispObjforScript) { return S_FALSE; };
		virtual void OnCLRHostExit() {};
		virtual void OnDestroyChromeBrowser(IChromeWebBrowser*) {};
		virtual void ExportAllFormsInfo() {};
		virtual void SetObjectProperty(IDispatch* pObj, BSTR bstrPropertyName, BSTR bstrPropertyValue) {};
		virtual void* Extend(CString strKey, CString strData, CString strFeatures) { return nullptr; };
		virtual bool IsSupportDesigner() { return false; };
	};

	#define TGM_NAME				_T("name")
	#define TGM_CAPTION				_T("caption")
	#define TGM_NODE_TYPE			_T("id")
	#define TGM_CNN_ID				_T("cnnid")
	#define TGM_HEIGHT				_T("height")
	#define TGM_WIDTH				_T("width")
	#define TGM_STYLE				_T("style")
	#define TGM_ACTIVE_PAGE			_T("activepage")
	#define TGM_TAG					_T("tag")
	#define TGM_NODE				_T("node")

	#define TGM_ROWS				_T("rows")
	#define TGM_COLS				_T("cols")


	#define TGM_SPLITTER			_T("splitter")
	#define TGM_TABBED				_T("tab")

	#define TGM_SETTING_HEAD		_T("#$^&TANGRAM")
	#define TGM_SETTING_FOMRAT		_T("#$^&TANGRAM[%ld][%ld]")

	#define TGM_S_EXCEL_INPUT		1
};

using namespace TangramCommon;