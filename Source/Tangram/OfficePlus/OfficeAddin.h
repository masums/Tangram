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
* OUTLINED IN THE TANGRAM LICENSE AGREEMENT.TANGRAM TEAM
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:tangramteam@outlook.com
* https://www.tangramteam.com
*
********************************************************************************/

// TangramAddin.h : Declaration of the COfficeAddin
#include "..\TangramCore.h"
#include "..\TangramCtrl.h"
#pragma once

typedef map<LONG, Office::_CustomTaskPane*> CTaskPaneMap;
typedef CTaskPaneMap::iterator TaskPaneMapIT;

namespace OfficePlus
{
	class COfficeObject;

	class COfficeDocument
	{
	public:
		COfficeDocument()
		{
			m_strDocXml = _T("");
			m_strTaskPaneXml = _T("");
			m_strTaskPaneTitle = _T("");

			m_pDocPage = nullptr;
			m_pFrame = nullptr;
			m_pTaskPanePage = nullptr;
			m_pTaskPaneFrame = nullptr;
			m_nMsoCTPDockPosition = msoCTPDockPositionRight;
			m_nMsoCTPDockPositionRestrict = msoCTPDockPositionRestrictNone;
		}

		int								m_nWidth;
		int								m_nHeight;
		MsoCTPDockPosition				m_nMsoCTPDockPosition;
		MsoCTPDockPositionRestrict		m_nMsoCTPDockPositionRestrict;
		CString							m_strDocXml;
		CString							m_strTaskPaneXml;
		CString							m_strTaskPaneTitle;

		CWndPage*						m_pDocPage;
		CWndPage*						m_pTaskPanePage;
		CWndFrame*						m_pFrame;
		CWndFrame*						m_pTaskPaneFrame;
		map<CString, CString>			m_mapUserFormScript;
	};

	// COfficeAddin
	class ATL_NO_VTABLE COfficeAddin :
		public CTangram
	{
	public:
		COfficeAddin();
		virtual ~COfficeAddin();

		CString							m_strUser;
		CString							m_strRibbonXml;
		CString							m_strRibbonXmlFile;

		CComPtr<ICTPFactory>			m_pCTPFactory;
		CTaskPaneMap					m_mapTaskPaneMap;
		map<HWND, CWndFrame*>			m_mapVBAForm;
		map<HWND, COfficeObject*>		m_mapOfficeObjects;
		map<HWND, COfficeObject*>		m_mapOfficeObjects2;

		void OnCloseOfficeObj(CString strName, HWND hWnd);
		void _AddDocXml(_CustomXMLParts* pCustomXMLParts, BSTR bstrXml, BSTR bstrKey);
		BEGIN_COM_MAP(COfficeAddin)
			COM_INTERFACE_ENTRY(ITangram)
			COM_INTERFACE_ENTRY2(IDispatch, ITangram)
			COM_INTERFACE_ENTRY(IConnectionPointContainer)
		END_COM_MAP()

		HRESULT HrGetResource(CString strLib, int nId, LPCTSTR lpType, LPVOID* ppvResourceData, DWORD* pdwSizeInBytes);

		virtual void SetFocus(HWND) {};
		virtual void ConnectOfficeObj(HWND hWnd) {};
		virtual void OnVbaFormInit(HWND, CWndFrame*) {};
		virtual bool OnActiveOfficeObj(HWND hWnd) { return false; };
		virtual HRESULT Tangram_OnLoad(IDispatch* RibbonControl) { return S_OK; };
		virtual HRESULT Tangram_GetItemCount(IDispatch* RibbonControl, long* nCount) { return S_OK; };
		virtual HRESULT Tangram_GetItemLabel(IDispatch* RibbonControl, long nIndex, BSTR* bstrLabel) { return S_OK; };
		virtual HRESULT Tangram_GetItemID(IDispatch* RibbonControl, long nIndex, BSTR* bstrID) { return S_OK; };
		virtual HRESULT OnConnection(IDispatch* pHostApp, int ConnectMode);
		virtual HRESULT OnDisconnection(int DisConnectMode) 
		{
			return S_OK;
		};
		virtual HRESULT OnUpdate(void) { return S_OK; };
		virtual HRESULT StartupComplete(void) { return S_OK; };
		//virtual HRESULT BeginShutdown(void) { return S_OK; };
		virtual CString GetFormXml(CString strFormName) { return _T(""); };

		virtual HRESULT CreateTangramCtrl(void* pv, REFIID riid, LPVOID* ppv) { return S_FALSE; };
		virtual void CreateCommonDesignerToolBar();

	protected:
		CString					m_strLib;
		CComQIPtr<IRibbonUI>	m_spRibbonUI;
		CString _GetDocXmlByKey(_CustomXMLParts* pCustomXMLParts, BSTR bstrKey);
	private:
		STDMETHOD(GetCustomUI)(BSTR RibbonID, BSTR * RibbonXml);
		//IDTExtensibility2 implementation:
		STDMETHOD(OnConnection)(IDispatch * Application, AddInDesignerObjects::ext_ConnectMode ConnectMode, IDispatch *AddInInst, SAFEARRAY **custom);
		STDMETHOD(OnDisconnection)(AddInDesignerObjects::ext_DisconnectMode RemoveMode, SAFEARRAY **custom);
		STDMETHOD(OnAddInsUpdate)(SAFEARRAY **custom);
		STDMETHOD(OnStartupComplete)(SAFEARRAY **custom);
		STDMETHOD(OnBeginShutdown)(SAFEARRAY **custom);
		//IRibbonExtensibility implementation

		STDMETHOD(CTPFactoryAvailable)(ICTPFactory * CTPFactoryInst);

		CString GetDocXmlByKey(IDispatch* pDocdisp, BSTR bstrKey) { return _T(""); };
		STDMETHOD(TangramCommand)(IDispatch* RibbonControl);
		STDMETHOD(TangramGetImage)(BSTR strValue, IPictureDisp ** ppDispImage);
		STDMETHOD(TangramGetVisible)(IDispatch* RibbonControl, VARIANT* varVisible);
		STDMETHOD(TangramOnLoad)(IDispatch* RibbonControl);
		STDMETHOD(TangramGetItemCount)(IDispatch* RibbonControl, long* nCount);
		STDMETHOD(TangramGetItemLabel)(IDispatch* RibbonControl, long nIndex, BSTR* bstrLabel);
		STDMETHOD(TangramGetItemID)(IDispatch* RibbonControl, long nIndex, BSTR* bstrID);
		STDMETHOD(get_RemoteHelperHWND)(LONGLONG* pVal);

		void AddDocXml(IDispatch* pDocdisp, BSTR bstrXml, BSTR bstrKey) {};
	};

	class ATL_NO_VTABLE COfficeExtender :
		public CComObjectRootEx<CComSingleThreadModel>,
		public IDispatchImpl<IOfficeExtender, &IID_IOfficeExtender, &LIBID_Tangram, /*wMajor =*/ 1, /*wMinor =*/ 0>
	{
	public:
		COfficeExtender(void);
		~COfficeExtender(void);
		COfficeAddin* m_pAddin;
		BEGIN_COM_MAP(COfficeExtender)
			COM_INTERFACE_ENTRY(IOfficeExtender)
			COM_INTERFACE_ENTRY(IDispatch)
		END_COM_MAP()
	protected:
	public:
		STDMETHOD(Close)();
		STDMETHOD(get_ActiveWorkBenchWindow)(BSTR bstrID, IWorkBenchWindow** pVal);
		STDMETHOD(InitVBAForm)(IDispatch*, long, BSTR bstrXml, IWndNode** ppRetNode);
		STDMETHOD(AddVBAFormsScript)(IDispatch* OfficeObject, BSTR bstrKey, BSTR bstrXml);
		STDMETHOD(GetFrameFromVBAForm)(IDispatch* pForm, IWndFrame** ppFrame);
		STDMETHOD(GetActiveTopWndNode)(IDispatch* pForm, IWndNode** WndNode);
		STDMETHOD(GetObjectFromWnd)(LONG hWnd, IDispatch** ppObjFromWnd);
	};

	class COfficeObject :
		public CComObjectRootBase,
		public IDispatchImpl<IOfficeObject, &IID_IOfficeObject, &LIBID_Tangram, 1, 0>
	{
	public:
		COfficeObject(void);
		virtual ~COfficeObject(void);

		BOOL				m_bMDIClient;
		HWND				m_hForm;
		HWND				m_hClient;
		HWND				m_hChildClient;
		HWND				m_hTaskPane;
		HWND				m_hTaskPaneWnd;
		HWND				m_hTaskPaneChildWnd;
		CWndPage*			m_pPage;
		IWndFrame*			m_pFrame;
		IDispatch*			m_pOfficeObj;

		BEGIN_COM_MAP(COfficeObject)
			COM_INTERFACE_ENTRY(IOfficeObject)
			COM_INTERFACE_ENTRY(IDispatch)
		END_COM_MAP()

		STDMETHOD(Show)(VARIANT_BOOL bShow);
		STDMETHOD(Extend)(BSTR bstrKey, BSTR bstrXml, IWndNode** ppNode);
		STDMETHOD(UnloadTangram)();

		void Lock() {}
		void Unlock() {}
		virtual void OnObjDestory() {};
	protected:
		ULONG InternalAddRef() { return 1; }
		ULONG InternalRelease() { return 1; }
	};
}

