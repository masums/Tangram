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
// TangramAddin.cpp : Declaration of the COfficeAddin 

#include "../stdafx.h"
#include "../TangramApp.h"
#include "../WndFrame.h"
#include "../WndNode.h"
#include "../TangramHtmlTreeWnd.h"
#include "../CloudUtilities/TangramDownLoad.h"
#include "../VisualStudioPlus/VSAddin.h"
#include "fm20.h"
#include "OfficeAddin.h"
#include "excelplus\excel.h"
#include "wordplus\msword.h"
#include "outlookplus\msoutl.h"

#include <io.h>
#include <stdio.h>
using namespace VBIDE;
/*
Private Sub MDIForm_Load()
Set TangramCore = CreateObject("tangram.tangram")
Dim tangram As Object
Set tangram = TangramCore.CreateWndPage(Me.hWnd)
Dim frameX As Object
Set frameX = tangram.CreateFrame(0, 0, "test")
frameX.Extend "", "d:\AppDoc1.APPXml"
End Sub
*/
namespace OfficePlus
{
	// COfficeAddin
	COfficeAddin::COfficeAddin()
	{
		if (m_hCBTHook == NULL)
		{
			m_hCBTHook = SetWindowsHookEx(WH_CBT, CTangramApp::CBTProc, NULL, GetCurrentThreadId());
		}
		m_hHostWnd = NULL;
		m_strLib = _T("");
		m_strUser = _T("");
		m_strRibbonXml = _T("");
		m_strRibbonXmlFile = _T("");
		m_bOfficeApp = true;
		WNDCLASSEX wcex;
		wcex.cbSize = sizeof(WNDCLASSEX);
		wcex.style = CS_HREDRAW | CS_VREDRAW;
		wcex.lpfnWndProc = ::DefWindowProc;
		wcex.cbClsExtra = 0;
		wcex.cbWndExtra = 0;
		wcex.hInstance = theApp.m_hInstance;
		wcex.hIcon = NULL;
		wcex.hCursor = NULL;
		wcex.hbrBackground = NULL;
		wcex.lpszMenuName = NULL;
		wcex.lpszClassName = L"Tangram Remote Helper Window";
		wcex.hIconSm = NULL;
		RegisterClassEx(&wcex);
		COfficeExtender* pExtender = new CComObject<COfficeExtender>;
		pExtender->m_pAddin = this;
		m_pExtender = pExtender;
	}

	COfficeAddin::~COfficeAddin()
	{
		m_strLib = _T("");
		m_bEnableProcessFormTabKey = false;
		ATLTRACE(_T("**********COfficeAddin::~COfficeAddin: %x*********************\n"), this);
	}

	STDMETHODIMP COfficeAddin::OnConnection(IDispatch *pApplication, AddInDesignerObjects::ext_ConnectMode ConnectMode, IDispatch *pAddInInst, SAFEARRAY ** /*custom*/)
	{
		return S_OK;
	}

	STDMETHODIMP COfficeAddin::OnDisconnection(AddInDesignerObjects::ext_DisconnectMode RemoveMode, SAFEARRAY ** /*custom*/)
	{
		m_bOfficeAddinUnLoad = true;
		g_pTangram->m_pActiveAppProxy = nullptr;

		g_pTangram->m_pDesignerWndPage = nullptr;
		if (::IsWindow(m_hHostWnd))
			::DestroyWindow(m_hHostWnd);
		if (::IsWindow(m_hTangramWnd))
			::DestroyWindow(m_hTangramWnd);
		return S_OK;
	}

	STDMETHODIMP COfficeAddin::OnAddInsUpdate(SAFEARRAY ** /*custom*/)
	{
		return OnUpdate();
	}

	STDMETHODIMP COfficeAddin::OnStartupComplete(SAFEARRAY ** /*custom*/)
	{
		StartupComplete();
		//::PostAppMessage(::GetCurrentThreadId(), WM_TANGRAMMSG, 0, 20190416);
		return S_OK;
	}

	STDMETHODIMP COfficeAddin::OnBeginShutdown(SAFEARRAY ** /*custom*/)
	{
		//if (m_hCBTHook)
		//{
		//	UnhookWindowsHookEx(m_hCBTHook);
		//	m_hCBTHook = nullptr;
		//}
		if (::IsWindow(m_hHostWnd))
		{
			::DestroyWindow(m_hHostWnd);
			m_hHostWnd = NULL;
		}
		return S_OK;
	}

	void COfficeAddin::OnCloseOfficeObj(CString strName, HWND hWnd)
	{
	}

	void COfficeAddin::_AddDocXml(Office::_CustomXMLParts* pCustomXMLParts, BSTR bstrXml, BSTR bstrKey)
	{
	}

	HRESULT COfficeAddin::OnConnection(IDispatch* pHostApp, int ConnectMode)
	{
		m_bOfficeAddinUnLoad = false;
		m_strRibbonXmlFile = m_strAppCommonDocPath + _T("OfficeRibbon\\") + m_strExeName + _T("\\ribbon.xml");
		if (!::PathFileExists(m_strRibbonXmlFile))
		{
			m_strRibbonXmlFile = m_strProgramFilePath + _T("\\tangram\\officeribbon\\") + m_strExeName + _T("\\ribbon.xml");
		}

		if (::PathFileExists(m_strRibbonXmlFile))
		{
			CTangramXmlParse m_Parse;
			if (m_Parse.LoadFile(m_strRibbonXmlFile))
			{
				m_strRibbonXml = m_Parse.xml();
			}
		}
		//auto task = create_task([this,strPath]()
		//{
		//	if (PathIsDirectory(strPath))
		//	{
		//		map<CString, CString> m_mapRibbon;
		//		_wfinddata_t fd;
		//		fd.attrib = FILE_ATTRIBUTE_DIRECTORY;
		//		CString _strPath = strPath + _T("*.ribbonxml");
		//		intptr_t pf = _wfindfirst(_strPath, &fd);
		//		if (pf != -1)
		//		{ 
		//			while (pf != -1)
		//			{
		//				if ((fd.attrib&FILE_ATTRIBUTE_DIRECTORY) == 0 /*&& (fd.attrib&FILE_ATTRIBUTE_HIDDEN) == 0*/)
		//				{
		//					CString str = strPath + fd.name;
		//					if (str != _T(".."))
		//					{
		//						CTangramXmlParse m_Parse;
		//						if (m_Parse.LoadFile(str))
		//						{
		//							ATLTRACE(_T("COfficeAddin::OnConnection:%s\n"), str);

		//						}
		//					}
		//				}
		//				int nVal = _wfindnext(pf, &fd);
		//				ATLTRACE(_T("_wfindnext:%d\n"), nVal);
		//				if (nVal == -1)
		//					break;
		//			}
		//		}
		//		_findclose(pf);
		//	}
		//});
		return S_OK;
	};

	CString COfficeAddin::_GetDocXmlByKey(Office::_CustomXMLParts* pCustomXMLParts, BSTR bstrKey)
	{
		return _T("");
	}

	// ICustomTaskPaneConsumer Methods
	STDMETHODIMP COfficeAddin::CTPFactoryAvailable(ICTPFactory * CTPFactoryInst)
	{
		//m_pCTPFactory.Detach();
		if(m_pCTPFactory==nullptr)
			return CTPFactoryInst->QueryInterface(Office::IID_ICTPFactory, (void**)&m_pCTPFactory);
		//if (m_pCTPFactory == nullptr)
		//else
		//{
		//	m_pCTPFactory.Detach
		//	return S_OK;
		//}
		return S_OK;
	};


	STDMETHODIMP COfficeAddin::GetCustomUI(BSTR RibbonID, BSTR * RibbonXml)
	{
		return S_OK;
	}

	STDMETHODIMP COfficeAddin::TangramCommand(IDispatch* RibbonControl)
	{
		return S_OK;
	}

	STDMETHODIMP COfficeAddin::TangramOnLoad(IDispatch* RibbonControl)
	{
		m_spRibbonUI = RibbonControl;
		Tangram_OnLoad(RibbonControl);
		return S_OK;
	}

	HRESULT COfficeAddin::HrGetResource(CString strLib, int nId, LPCTSTR lpType, LPVOID* ppvResourceData, DWORD* pdwSizeInBytes)
	{
		HMODULE hModule = ::LoadLibraryEx(strLib, nullptr, LOAD_LIBRARY_AS_DATAFILE);
		if (!hModule)
			return E_UNEXPECTED;
		HRSRC hRsrc = FindResource(hModule, MAKEINTRESOURCE(nId), lpType);
		if (!hRsrc)
			return HRESULT_FROM_WIN32(GetLastError());
		HGLOBAL hGlobal = LoadResource(hModule, hRsrc);
		if (!hGlobal)
			return HRESULT_FROM_WIN32(GetLastError());
		*pdwSizeInBytes = SizeofResource(hModule, hRsrc);
		*ppvResourceData = LockResource(hGlobal);
		::FreeLibrary(hModule);
		return S_OK;
	}

	STDMETHODIMP COfficeAddin::TangramGetImage(BSTR strValue, IPictureDisp ** ppDispImage)
	{
		return S_OK;
	}

	STDMETHODIMP COfficeAddin::TangramGetItemCount(IDispatch* RibbonControl, long* nCount)
	{
		return Tangram_GetItemCount(RibbonControl, nCount);
	}

	STDMETHODIMP COfficeAddin::TangramGetItemLabel(IDispatch* RibbonControl, long nIndex, BSTR* bstrLabel)
	{
		return Tangram_GetItemLabel(RibbonControl, nIndex, bstrLabel);
	}

	STDMETHODIMP COfficeAddin::TangramGetItemID(IDispatch* RibbonControl, long nIndex, BSTR* bstrID)
	{
		return Tangram_GetItemID(RibbonControl, nIndex, bstrID);
	}

	STDMETHODIMP COfficeAddin::TangramGetVisible(IDispatch* RibbonControl, VARIANT* varVisible)
	{
		return S_OK;
	}

	STDMETHODIMP COfficeAddin::get_RemoteHelperHWND(LONGLONG* pVal)
	{
		if (::IsWindow(m_hHostWnd))
			*pVal = (LONGLONG)m_hHostWnd;
		return S_OK;
	}

	void COfficeAddin::CreateCommonDesignerToolBar()
	{
		CString strName = this->m_strExeName;
		if (::IsWindow(m_hHostWnd) == false)
		{
			auto it = m_mapValInfo.find(_T("designertoolcaption"));
			if (it != m_mapValInfo.end())
				m_strDesignerToolBarCaption = OLE2T(it->second.bstrVal);
			m_hHostWnd = ::CreateWindowEx(WS_EX_WINDOWEDGE | WS_EX_TOOLWINDOW, _T("Tangram Window Class"), m_strDesignerToolBarCaption, WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN | WS_CLIPSIBLINGS, 0, 0, 400, 400, NULL, 0, theApp.m_hInstance, NULL);
			m_hChildHostWnd = ::CreateWindowEx(NULL, _T("Tangram Window Class"), _T(""), WS_VISIBLE | WS_CHILD, 0, 0, 0, 0, m_hHostWnd, 0, theApp.m_hInstance, NULL);
		}
		if (m_hHostWnd&&m_pDesignerWndPage == nullptr)
		{
			HWND hwnd = ::GetActiveWindow();
			RECT rc;
			::GetWindowRect(hwnd, &rc);
			::SetWindowPos(m_hHostWnd, NULL, rc.left + 40, rc.top + 40, 300, 700, SWP_NOACTIVATE | SWP_NOREDRAW);

			if (m_pDesignerWndPage == nullptr)
			{
				auto it = m_mapWindowPage.find(m_hHostWnd);
				if (it != m_mapWindowPage.end())
					m_pDesignerWndPage = it->second;
				else
				{
					m_pDesignerWndPage = new CComObject<CWndPage>();
					m_pDesignerWndPage->m_hWnd = m_hHostWnd;
					m_mapWindowPage[m_hHostWnd] = m_pDesignerWndPage;
				}

				CString strPath = m_strExeName + _T(".designer");
				CTangramXmlParse m_Parse;
				if (m_Parse.LoadFile(strPath))
				{
					m_strDesignerXml = m_Parse.xml();
					if (m_strDesignerXml != _T(""))
					{
						auto it = m_pDesignerWndPage->m_mapFrame.find(m_hChildHostWnd);
						if (it == m_pDesignerWndPage->m_mapFrame.end())
						{
							IWndFrame* pFrame = nullptr;
							HRESULT hr = m_pDesignerWndPage->CreateFrame(CComVariant(0), CComVariant((__int64)m_hChildHostWnd), CComBSTR(L"DeignerTool"), &pFrame);
							if (pFrame)
							{
								IWndNode* pNode = nullptr;
								pFrame->Extend(CComBSTR(L"DeignerToolBox"), CComBSTR(m_strDesignerXml), &pNode);
								m_pDesignerFrame = (CWndFrame*)pFrame;
								m_pDesignerFrame->m_bDesignerState = false;
							}
						}
					}
				}
				//CComBSTR bstrURL(L"");
				//CString strPath = m_strTangramURLBase;
				//strPath += m_strExeName;
				//strPath += _T("/designertoolbar.htm?x=");

				//CString str = _T("");
				//str.Format(_T("%x"), this);
				//strPath += str;
				//bstrURL = strPath.AllocSysString();
				//m_pDesignerWndPage->put_URL(bstrURL);
			}
		}
		::ShowWindow(m_hHostWnd, SW_SHOW);
		::UpdateWindow(m_hHostWnd);
	}

	COfficeExtender::COfficeExtender(void)
	{
	}

	COfficeExtender::~COfficeExtender(void)
	{
	}

	STDMETHODIMP COfficeExtender::Close()
	{
		g_pTangram->m_pExtender = nullptr;
		delete this;
		return S_OK;
	}

	STDMETHODIMP COfficeExtender::get_ActiveWorkBenchWindow(BSTR bstrID, IWorkBenchWindow** pVal)
	{
		CString strID = OLE2T(bstrID);
		strID.Trim();
		if (strID != _T(""))
		{
			ITangram* pTangram = nullptr;
			m_pAddin->get_RemoteTangram(bstrID, &pTangram);
			if (pTangram)
			{
				IWorkBenchWindow* pRet = nullptr;
				ITangramExtender* pExtender = nullptr;
				pTangram->get_Extender(&pExtender);
				if (pExtender)
				{
					CComQIPtr<IEclipseExtender> pEclipse(pExtender);
					if (pEclipse)
						pEclipse->get_ActiveWorkBenchWindow(bstrID, &pRet);
					if (pRet)
					{
						*pVal = pRet;
						(*pVal)->AddRef();
					}
				}
			}
		}

		return S_OK;
	}

	STDMETHODIMP COfficeExtender::InitVBAForm(IDispatch* pFormDisp, long nStyle, BSTR bstrXml, IWndNode** ppNode)
	{
		return S_OK;
	}

	STDMETHODIMP COfficeExtender::AddVBAFormsScript(IDispatch* OfficeObject, BSTR bstrKey, BSTR bstrXml)
	{
		return S_OK;
	}

	STDMETHODIMP COfficeExtender::GetFrameFromVBAForm(IDispatch* pForm, IWndFrame** ppFrame)
	{
		CComQIPtr<IOleWindow> pOleWnd(pForm);
		if (pOleWnd)
		{
			HWND hWnd = NULL;
			pOleWnd->GetWindow(&hWnd);
			auto it = m_pAddin->m_mapVBAForm.find(hWnd);
			if (it != m_pAddin->m_mapVBAForm.end())
			{
				*ppFrame = it->second;
			}
		}

		return S_OK;
	}

	STDMETHODIMP COfficeExtender::GetActiveTopWndNode(IDispatch* pForm, IWndNode** WndNode)
	{
		CComQIPtr<IOleWindow> pOleWnd(pForm);
		if (pOleWnd)
		{
			HWND hWnd = NULL;
			pOleWnd->GetWindow(&hWnd);
			auto it = m_pAddin->m_mapVBAForm.find(hWnd);
			if (it != m_pAddin->m_mapVBAForm.end())
			{
				*WndNode = it->second->m_pWorkNode;
			}
		}
		return S_OK;
	}

	STDMETHODIMP COfficeExtender::GetObjectFromWnd(LONG hWnd, IDispatch** ppObjFromWnd)
	{
		return S_OK;
	}

	COfficeObject::COfficeObject(void)
	{
		m_bMDIClient = false;
		m_hClient = NULL;
		m_hTaskPane = NULL;
		m_hTaskPaneWnd = NULL;
		m_hTaskPaneChildWnd = NULL;
		m_pPage = nullptr;
		m_pFrame = nullptr;
		m_pOfficeObj = nullptr;
	}

	COfficeObject::~COfficeObject(void)
	{
	}

	STDMETHODIMP COfficeObject::Show(VARIANT_BOOL bShow)
	{
		if (m_pPage == nullptr)
			return S_OK;
		if (bShow)
		{
			HWND h = ::GetParent(m_hForm);
			m_pFrame->ModifyHost((LONGLONG)h);
		}
		else
		{
			m_pFrame->ModifyHost((LONGLONG)m_hChildClient);
		}

		return S_OK;
	}

	STDMETHODIMP COfficeObject::Extend(BSTR bstrKey, BSTR bstrXml, IWndNode** ppNode)
	{
		CString strKey = OLE2T(bstrKey);
		strKey.Trim();
		if (strKey == _T(""))
			return S_FALSE;

		strKey = OLE2T(bstrXml);
		strKey.Trim();
		if (strKey == _T(""))
			return S_FALSE;

		if (m_pPage == nullptr/*&&m_bMDIClient == false*/)
		{
			m_hClient = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram Office Plus Addin Helper Window"), WS_CHILD, 0, 0, 0, 0, (HWND)m_hForm, NULL, theApp.m_hInstance, NULL);
			m_hChildClient = ::CreateWindowEx(NULL, L"Tangram Remote Helper Window", _T("Tangram Excel Helper Window"), WS_CHILD, 0, 0, 0, 0, (HWND)m_hClient, NULL, AfxGetInstanceHandle(), NULL);

			auto it = g_pTangram->m_mapWindowPage.find(m_hClient);
			if (it != g_pTangram->m_mapWindowPage.end())
				m_pPage = it->second;
			else
			{
				m_pPage = new CComObject<CWndPage>();
				m_pPage->m_hWnd = m_hClient;
				g_pTangram->m_mapWindowPage[m_hClient] = m_pPage;
			}

			if (m_pPage == nullptr)
				return S_FALSE;
			if (m_pFrame == nullptr)
			{
				m_pPage->CreateFrame(CComVariant(0), CComVariant((long)m_hChildClient), CComBSTR(L"Default"), &m_pFrame);
				if (m_pFrame == nullptr)
				{
					delete m_pPage;
					m_pPage = nullptr;
					return S_FALSE;
				}
			}
		}

		return m_pFrame->Extend(bstrKey, bstrXml, ppNode);
	}

	STDMETHODIMP COfficeObject::UnloadTangram()
	{
		return S_OK;
	}
}



