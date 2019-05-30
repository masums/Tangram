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

// HostExtender.cpp : Implementation of CTangramNavigator

#include "stdafx.h"
#include "dteinternal.h"
#include "dllmain.h" 
#include "TangramCLRHost.h"
#include "TangramNodeCLREvent.h"
#include "ErrorCtrl.h"
#include "TangramClrProxy.h"

#include <io.h>
#include <stdio.h>
#include "Markup.h"
#include "AcquireTemplateStorageInfoForm.h"
#include "AssemblyLocalor.h"

using namespace TangramCLR;
using namespace System::Windows;
#pragma managed(push, off)
CTangramCLRApp theApp;
#pragma managed(pop)
CTangramCLRProxy theAppProxy;
CTangramApplicationImpl theAppImpl;

CTangramCLRProxy::CTangramCLRProxy():CTangramCLRProxyImpl()
{
	//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_CrtSetBreakAlloc(308);
	//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_CrtSetBreakAlloc(341);
	m_strExtendableTypes = L"|WebBrowser|Panel|TreeView|ListView|MonthCalendar|TabPage|TabControl|GroupBox|FlowLayoutPanel|TableLayoutPanel|SplitContainer|";
	m_bHostApp = false;
	m_strCurrentWinFormTemplate = _T("");
	Forms::Application::EnableVisualStyles();
	m_pPropertyGrid = nullptr;
	m_pSystemAssembly = nullptr;
	m_pOnLoad = nullptr;
	m_pOnMdiChildActivate = nullptr;
	m_pOnCtrlVisible = nullptr;
	m_htObjects = gcnew Hashtable();
	m_pTangramProxy = gcnew TangramProxy();
	Forms::Application::ApplicationExit += gcnew EventHandler(&OnApplicationExit);
	if (::GetModuleHandle(_T("TangramCore.dll")) == nullptr)
	{
		m_bHostApp = true;
		GetTangram();
		if (theApp.m_pTangram)
		{
			::PostAppMessage(::GetCurrentThreadId(), WM_TANGRAMMSG,
				(WPARAM)& theAppImpl, 20190311);
			theApp.m_pTangram->put_AppKeyValue(CComBSTR(L"CLRProxy"), CComVariant((LONGLONG)this));
			theApp.m_pTangramProxyBase = m_pProxy;
			m_pProxy->m_pTangramCLRAppProxy = &theApp;
			ITangramExtender* pExtender = nullptr;
			theApp.m_pTangram->get_Extender(&pExtender);
			if (pExtender)
			{
				CComQIPtr<IVSExtender> pVSExtender(pExtender);
				if (pVSExtender)
					theApp.m_pVSExtender = pVSExtender.Detach();
			}
		}
	}
}

CTangramCLRProxy::~CTangramCLRProxy()
{
	for (auto it : m_mapFrameInfo)
	{
		delete it.second;
	}

	if (m_pProxy)
	{
		m_pProxy->m_pCLRProxy = nullptr;
		m_pProxy = nullptr;
	}

	ATLTRACE(_T("Release CTangramCLRProxy :%p\n"), this);
	if (m_bHostApp/* && *//*::GetModuleHandle(_T("comdlg32.dll"))*/)
	{
		BOOL bUnload = ::FreeLibrary(::GetModuleHandle(_T("TangramCore.dll")));
		while(bUnload)
			bUnload = ::FreeLibrary(::GetModuleHandle(_T("TangramCore.dll")));
	}
}

CString CTangramCLRApp::GetNtpXML(CString strKey) {
	String^ strRet =  TangramCLR::Tangram::GetTangram()->Fire_OnGetTangramNtpXml(BSTR2STRING(strKey));
	if (String::IsNullOrEmpty(strRet))
		return _T("<tangram><window><node id='splitter' name='container' rows='1' cols='2' height ='100,100,' width='300,500,' borderwidth='0' splitterwidth='4' middlecolor='RGB(240,240,240)'><node name='launcher' id='ClrCtrl' cnnid='tangramclr.DefaultNTPCtrl,tangramclr' /><node name='host' caption='host' id='hostview' borderwidth='0' /></node></window></tangram>");
	return strRet;
}

bool CTangramCLRApp::DoIdleWork() {
	TangramCLR::Tangram::GetTangram()->Fire_OnCloudAppIdle();
	return false;
}

HWND CTangramCLRApp::InitTangramApp() 
{ 
	return (HWND)TangramCLR::Tangram::GetTangram()->Fire_OnInitTangramApp().ToPointer();
};

void CTangramCLRApp::ProcessMsg(MSG* msg) {
	if (msg) {
		if (msg->hwnd == 0 && msg->message == WM_TANGRAMMSG)
		{
			switch (msg->lParam)
			{
			case 20190422:
			{
				TangramCLR::Tangram::GetTangram()->Fire_OnCloudAppInit();
			}
			break;
			default:
				break;
			}
		}
		::TranslateMessage(msg);
		::DispatchMessage(msg);
	}
};

void CTangramCLRProxy::ExportCLRObjInfo(CString strPath)
{
	CString strLogMsg; strLogMsg.Format(L"Export CLR object info from %s", strPath);
	theApp.m_pTangramProxyBase->Log(strLogMsg);
	if(strPath==_T(""))
		strPath = Forms::Application::ExecutablePath->ToLower();
	Assembly^ m_pDotNetAssembly = nullptr;
	try
	{
		m_pDotNetAssembly = Assembly::LoadFile(BSTR2STRING(strPath));
		if (m_pDotNetAssembly == nullptr)
			return;
	}
	catch (ArgumentNullException^ e)
	{
		Debug::WriteLine(L"Tangram InitAppFormTypeDic: " + e->Message);
	}
	catch (ArgumentException^ e)
	{
		Debug::WriteLine(L"Tangram InitAppFormTypeDic: " + e->Message);
	}
	catch (FileNotFoundException^ e)
	{
		Debug::WriteLine(L"Tangram InitAppFormTypeDic: " + e->Message);
	}
	catch (FileLoadException^ e)
	{
		Debug::WriteLine(L"Tangram InitAppFormTypeDic: " + e->Message);
	}
	catch (BadImageFormatException^ e)
	{
		Debug::WriteLine(L"Tangram InitAppFormTypeDic: " + e->Message);
	}
	finally
	{
		if (m_pDotNetAssembly != nullptr)
		{
			CComBSTR bstrAssemblyFullName = STRING2BSTR(m_pDotNetAssembly->FullName);
			CString strAssemblyFullName = OLE2T(bstrAssemblyFullName);
			if (theApp.m_pTangramProxyBase->m_mapExcludedObjects.find(strAssemblyFullName) != theApp.m_pTangramProxyBase->m_mapExcludedObjects.end())
			{
				// Skip it.
			}
			else
			{
				cli::array<Type^>^ pArray = m_pDotNetAssembly->GetExportedTypes();
				for each (Type^ type in pArray)
				{
					CComBSTR bstrTypeFullName = STRING2BSTR(type->FullName);
					CString strTypeFullName = OLE2T(bstrTypeFullName);
					if (theApp.m_pTangramProxyBase->m_mapExcludedObjects.find(strTypeFullName) != theApp.m_pTangramProxyBase->m_mapExcludedObjects.end())
					{
						// Skip it.
						continue;
					}
					if (type->IsSubclassOf(Form::typeid))
					{
						Form^ m_pObj = nullptr;
						try
						{
							CString strLogMsg; strLogMsg.Format(L"Create instance type %s", strTypeFullName);
							theApp.m_pTangramProxyBase->Log(strLogMsg);
							m_pObj = (Form^)Activator::CreateInstance(type);
							if (m_pObj && (m_pObj->FormBorderStyle != FormBorderStyle::FixedToolWindow || m_pObj->FormBorderStyle != FormBorderStyle::None || m_pObj->FormBorderStyle != FormBorderStyle::SizableToolWindow))
							{
								if (m_pObj->Controls->Count)
								{
									HICON hIcon = (HICON)m_pObj->Icon->Handle.ToPointer();
									if (hIcon)
									{
										CString strPath2 = theAppProxy.m_pProxy->m_strAppFormsInfoPath;
										strPath2 += STRING2BSTR(type->AssemblyQualifiedName);
										strPath2 += _T(".ico");
										//Write Icon to File Stream
										System::IO::FileStream^ fs = gcnew System::IO::FileStream(BSTR2STRING(strPath2), System::IO::FileMode::OpenOrCreate);
										m_pObj->Icon->Save(fs);
										fs->Close();
									}
								}
							}
						}
						catch (Exception^ e)
						{
						}
						finally
						{
							if (m_pObj)
								m_pObj->Close();
						}
					}
					else if (type->IsSubclassOf(Control::typeid))
					{
						try
						{
							CString strPath2 = theAppProxy.m_pProxy->m_strAppControlsInfoPath;
							strPath2 += STRING2BSTR(type->AssemblyQualifiedName);
							strPath2 += _T(".xml");
							CString strXml = _T("<control></control>");
							CTangramXmlParse m_Parse;
							m_Parse.LoadXml(strXml);
							m_Parse.SaveFile(strPath2);
						}
						catch (Exception^ e)
						{
						}
						finally
						{
						}
					}
					else if (type->IsSubclassOf(FrameworkElement::typeid))
					{
						try
						{
							CString strPath2 = theAppProxy.m_pProxy->m_strAppWPFObjsInfoPath;
							strPath2 += STRING2BSTR(type->AssemblyQualifiedName);
							strPath2 += _T(".xml");
							CString strXml = _T("<control></control>");
							CTangramXmlParse m_Parse;
							m_Parse.LoadXml(strXml);
							m_Parse.SaveFile(strPath2);
						}
						catch (Exception^ e)
						{
						}
						finally
						{
						}
					}
				}
			}
		}
	}
}

void CTangramCLRProxy::ExportAllCLRObjInfo(CString _strPath)
{
	CString strPath = _strPath;
	strPath += _T("\\");
	strPath.Replace(_T("\\\\"), _T("\\"));

	if (::PathIsDirectory(strPath)==false)
		return ;
	HANDLE hFind; // file handle
	WIN32_FIND_DATA FindFileData;

	hFind = FindFirstFile(strPath + _T("*.*"), &FindFileData); // find the first file
	if (hFind == INVALID_HANDLE_VALUE)
	{
		return;
	}

	bool bSearch = true;
	while (bSearch) // until we finds an entry
	{
		if (FindNextFile(hFind, &FindFileData))
		{
			if ((_tcscmp(FindFileData.cFileName, _T(".")) == 0) ||
				(_tcscmp(FindFileData.cFileName, _T("..")) == 0))
				continue;

			// We have found a directory
			if ((FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
			{
				CString strPath2 = strPath + FindFileData.cFileName + _T("\\");
				ExportAllCLRObjInfo(strPath2);
			}
			else
			{
				CString str = FindFileData.cFileName;
				int nPos = str.ReverseFind('.');
				if (nPos != -1)
				{
					CString s = str.Mid(nPos);
					if(s.CompareNoCase(_T(".dll"))==0)
						ExportCLRObjInfo(strPath + FindFileData.cFileName);
				}
			}

		}//FindNextFile
		else
		{
			if (GetLastError() == ERROR_NO_MORE_FILES) // no more files there
				bSearch = false;
			else {
				// some error occured, close the handle and return false
				FindClose(hFind);
				return ;
			}
		}
	}//while

	FindClose(hFind); // closing file handle
	return;
}

IDispatch* CTangramCLRProxy::CreateFormAsMdiChild(BSTR bstrObjID, IDispatch* pMdiParent)
{
	Object^ pMdiObj = (Object^)Marshal::GetObjectForIUnknown((IntPtr)pMdiParent);
	if (pMdiObj&&pMdiObj->GetType()->IsSubclassOf(Form::typeid))
	{
		Object^ pObj = TangramCLR::Tangram::CreateObject(BSTR2STRING(bstrObjID));
		if (pObj && pObj->GetType()->IsSubclassOf(Form::typeid))
		{
			((Form^)pObj)->MdiParent = (Form^)pMdiObj;
			((Form^)pObj)->Show();
			return (IDispatch*)Marshal::GetIUnknownForObject(pObj).ToPointer();
		}
	}
	return nullptr;
}

void CTangramCLRProxy::AttachVSPropertyWnd(HWND hVSPropertyGrid)
{ 
	m_pPropertyGrid = (PropertyGrid^)(Control^)Control::FromHandle((IntPtr)hVSPropertyGrid);
	if (m_pPropertyGrid)
	{
		if (m_pPropertyGrid->SelectedObject != nullptr)
		{
			OnSelectedObjectsChanged(nullptr, nullptr);
		}
		m_pPropertyGrid->SelectedObjectsChanged += gcnew System::EventHandler(&OnSelectedObjectsChanged);
	}
}

void CTangramCLRProxy::AttachCLRObjEvent(IDispatch* Sender, WindowEventType nType, HWND hNotifyWnd, VARIANT_BOOL bAttachEvent)
{
	Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)Sender);
	if (pCtrl != nullptr)
	{
		HWND hWnd = (HWND)pCtrl->Handle.ToInt64();
		if (bAttachEvent)
		{
		}
		else
		{

		}
	}
}

BSTR CTangramCLRProxy::AttachObjEvent(IDispatch* EventObj, IDispatch* SourceObj, WindowEventType EventType, IDispatch* HTMLWindow)
{
	BSTR bstrRet = L"";
	Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)SourceObj);
	if (pCtrl != nullptr)
	{
		bstrRet = STRING2BSTR(pCtrl->Name);
		LONGLONG nIndex = (LONGLONG)HTMLWindow;
		HWND hWnd = (HWND)pCtrl->Handle.ToInt64();
		ObjectEventInfo* pInfo = (ObjectEventInfo*)::GetWindowLongPtr(hWnd, GWLP_USERDATA);
		if (pInfo == nullptr)
		{
			m_pTangramProxy->AttachHandleDestroyedEvent(pCtrl);
			pInfo = new ObjectEventInfo();
			::SetWindowLongPtr(hWnd, GWLP_USERDATA, (LONG_PTR)pInfo);
		}
		CComQIPtr<IEventProxy> pTangramEvent(EventObj);
		if (pTangramEvent)
		{
			if (pInfo)
			{
				ObjectEventInfo2* pObjectEventInfo2 = nullptr;
				auto it2 = pInfo->m_mapEventObj2.find(nIndex);
				if (it2 == pInfo->m_mapEventObj2.end())
				{
					pObjectEventInfo2 = new ObjectEventInfo2();
					pInfo->m_mapEventObj2[nIndex] = pObjectEventInfo2;
				}
				else
					pObjectEventInfo2 = it2->second;
				auto it = pObjectEventInfo2->m_mapEventObj.find(EventType);
				if (it == pObjectEventInfo2->m_mapEventObj.end())
				{
					pObjectEventInfo2->m_mapEventObj[EventType] = pTangramEvent.p;
					m_pTangramProxy->AttachEvent(pCtrl, EventType);
				}
			}
		}
	}
	return bstrRet;
}

bool CTangramCLRProxy::IsSupportDesigner() 
{ 
	return true; 
}

void CTangramCLRProxy::OnDestroyChromeBrowser(IChromeWebBrowser* pChromeWebBrowser) 
{
	auto it = m_mapChromeWebBrowser.find(pChromeWebBrowser);
	if (it != theAppProxy.m_mapChromeWebBrowser.end())
	{
		it->second->m_pChromeWebBrowserHost = nullptr;
		theAppProxy.m_mapChromeWebBrowser.erase(it);
	}
};

CTangramWPFObj* CTangramCLRProxy::CreateWPFControl(IWndNode* pNode, HWND hPWnd, UINT nID)
{
	if (pNode)
	{
		CComBSTR bstrCnnID(L"");
		pNode->get_Attribute(CComBSTR(L"cnnid"), &bstrCnnID);

		Type^ pType = TangramCLR::Tangram::GetType(BSTR2STRING(bstrCnnID));
		::SysFreeString(bstrCnnID);

		CTangramWPFObjWrapper* pWpfControlWrapper = nullptr;
		try
		{
			//System::Windows::Forms::Integration::ElementHost^ pElementHost = gcnew System::Windows::Forms::Integration::ElementHost();
			//pElementHost->Child = (FrameworkElement^)_pObj;
			//IDispatch* pDisp = (IDispatch*)(Marshal::GetIUnknownForObject(pElementHost).ToInt64());
			//_pNode->m_pHostObj = pElementHost;
			//return pDisp;

			//FrameworkElement^ m_pUIElement = (FrameworkElement^)Activator::CreateInstance(pType);
			//m_pDisp = (IDispatch*)(System::Runtime::InteropServices::Marshal::GetIUnknownForObject(m_pUIElement).ToInt64());
			pWpfControlWrapper = new CTangramWPFObjWrapper();
			if (pWpfControlWrapper->CreateControl(pType, hPWnd, WS_CHILD | WS_VISIBLE, 0, 0, 0, 0))
			{
				WndNode^ _pNode = (WndNode^)theAppProxy._createObject<IWndNode, TangramCLR::WndNode>(pNode);
				TangramCLR::Tangram::m_pFrameworkElementDic[pWpfControlWrapper->m_pUIElement] = _pNode;
				::SetWindowLongPtr(pWpfControlWrapper->m_hwndWPF, GWLP_ID, nID);
				m_mapWpfControlWrapper[pWpfControlWrapper->m_hwndWPF] = pWpfControlWrapper;
				try {
					pWpfControlWrapper->m_pSource->RootVisual = pWpfControlWrapper->m_pUIElement;
				}
				catch (Markup::XamlParseException^ e)
				{
					Debug::WriteLine(L"Tangram WPFControlWrapper Exception 1: " + e->Message);
					Debug::WriteLine(L"Tangram WPFControlWrapper Exception 1: " + e->InnerException->Message);
				}
			}
		}
		catch (System::Exception^ ex)
		{
			Debug::WriteLine(L"Tangram WPFControlWrapper Exception 1: " + ex->Message);
			Debug::WriteLine(L"Tangram WPFControlWrapper Exception 1: " + ex->InnerException->Message);
		}

		if(pWpfControlWrapper!=nullptr)
			return pWpfControlWrapper;
	}
	return nullptr; 
}

HRESULT CTangramCLRProxy::NavigateURL(IWndNode* pNode, CString strURL, IDispatch* dispObjforScript)
{ 
	return S_FALSE; 
}

void CTangramCLRProxy::WindowCreated(LPCTSTR strClassName, LPCTSTR strName, HWND hPWnd, HWND hWnd)
{
	if (hWnd != hPWnd)
	{
		auto it = m_mapForm.find(hPWnd);
		if (it == m_mapForm.end())
		{
			Control^  pPForm = Form::FromHandle((IntPtr)hPWnd);
			if (pPForm!=nullptr)
			{
				if (IsWinForm(hPWnd))
				{
					Form^ _pForm = static_cast<Form^>(pPForm);
					auto it = m_mapForm.find(hPWnd);
					if (it == m_mapForm.end())
					{
						m_mapForm[hPWnd] = _pForm;
						if(m_pOnLoad)
						{ 
						}
						else
							m_pOnLoad = gcnew EventHandler(CTangramCLRProxy::OnLoad);
						_pForm->Load += m_pOnLoad;
						::SendMessage(theAppProxy.m_pProxy->m_hTangramWnd, WM_WINFORMCREATED, (WPARAM)hPWnd, (LPARAM)0);
					}
				}
			}
		}
	}
}

void CTangramCLRProxy::WindowDestroy(HWND hWnd) 
{
	auto it2 = this->m_mapWpfControlWrapper.find(hWnd);
	if (it2 != m_mapWpfControlWrapper.end())
	{
		delete it2->second;
		m_mapWpfControlWrapper.erase(it2);
	}
	auto it3 = m_mapFrameInfo.find(hWnd);
	if (it3 != m_mapFrameInfo.end())
	{
		delete it3->second;
		m_mapFrameInfo.erase(it3);
	}
	auto it = m_mapForm.find(hWnd);
	if (it != m_mapForm.end())
	{
		m_mapForm.erase(it);
		if (m_mapForm.size()==0)
		{
			//if (::IsWindow(m_hMsgWnd))
			//	::DestroyWindow(m_hMsgWnd);
			//if (::IsWindow(m_pProxy->m_hHostWnd))
			//	::DestroyWindow(m_pProxy->m_hHostWnd);
			//Forms::Application::Exit();
			//PostQuitMessage(0);
			::PostAppMessage(::GetCurrentThreadId(), WM_TANGRAMMSG, theAppProxy.m_bHostApp?1:0, 20190511);
		}
	}
}

void CTangramCLRProxy::OnVisibleChanged(System::Object ^sender, System::EventArgs ^e)
{
	Control^ pChild = (Control^)sender;
	if (pChild->Visible)
	{
		LONG_PTR lp=::GetWindowLongPtr((HWND)pChild->Handle.ToInt64(), GWLP_USERDATA);
		if (lp)
		{
			Form^ pForm = (Form^)Form::FromHandle((IntPtr)lp);
			if (pForm)
			{
				Type^ pType = pChild->GetType();
				String^ strType = pType->FullName;
				WndPage^ pWndPage = TangramCLR::Tangram::CreateWndPage(pForm, nullptr);
				String^ strType2 = strType->Replace(L"System.Windows.Forms.", L"");
				if ((theAppProxy.m_strExtendableTypes->IndexOf(L"|" + strType2 + L"|") != -1 && pChild->Dock == DockStyle::None) || pChild->Dock == DockStyle::Fill)
				{
					bool bExtendable = (pChild->Tag == nullptr);// false;// ;
					if (pChild->Tag != nullptr)
					{
						String^ strTag = pChild->Tag->ToString();
						bExtendable = (strTag->IndexOf(L"|Extendable|") >= 0);
					}
					if (bExtendable)
					{
						BSTR bstrIndex = STRING2BSTR(pForm->GetType()->FullName);
						CString strIndex = OLE2T(bstrIndex);
						strIndex.MakeLower();
						pChild->VisibleChanged += theAppProxy.m_pOnCtrlVisible;

						String^ name = pChild->Name;
						if (String::IsNullOrEmpty(name))
							name = strType;
						BSTR strName = STRING2BSTR(name->ToLower());
						WndFrameInfo* pInfo = new WndFrameInfo;
						pInfo->m_hCtrlHandle = (HWND)pChild->Handle.ToInt64();
						theAppProxy.m_mapFrameInfo[pInfo->m_hCtrlHandle] = pInfo;
						pInfo->m_strCtrlName = pChild->Name->ToLower();
						pInfo->m_strParentCtrlName = pChild->Name->ToLower();
						theAppProxy.m_pProxy->ConnectPage((HWND)pChild->Handle.ToInt64(), OLE2T(strName), pWndPage->m_pPage, pInfo);
						::SysFreeString(strName);
					}
				}
				::SetWindowLongPtr((HWND)pChild->Handle.ToInt64(), GWLP_USERDATA, 0);
				return;
			}
			else
			{
				IWndNode* pNode = (IWndNode*)lp;
			}
		}
		BSTR bstrName = STRING2BSTR(pChild->Name);
		IWndPage* pNode = theAppProxy.m_pProxy->ExtendFrame((HWND)pChild->Handle.ToInt64(), OLE2T(bstrName), _T("default"));
		::SysFreeString(bstrName);
	}
}

void CTangramCLRProxy::OnItemSelectionChanged(System::Object ^sender, Forms::ListViewItemSelectionChangedEventArgs ^e)
{
	if (e->Item->Tag != nullptr)
	{
		String^ strTag = e->Item->Tag->ToString();
		if (String::IsNullOrEmpty(strTag) == false)
		{
			if (strTag->IndexOf(L"|TangramNode|") != -1)
			{
				String^ strIndex = strTag->Substring(strTag->IndexOf(L":") + 1);
				if (String::IsNullOrEmpty(strIndex) == false)
				{
					Control^ pCtrl = (Control^)sender;
					Control^ pTop = pCtrl->TopLevelControl;
					Type^ pType = pTop->GetType();
					if (pType->IsSubclassOf(Form::typeid))
					{
						String^ name = pType->Name + pCtrl->Name;
						theAppProxy.m_pProxy->ExtendCtrl(pCtrl->Handle.ToInt64(), name, strIndex);
					}
					pCtrl->Select();
				}
			}
		}
	}
}

void CTangramCLRProxy::OnAfterSelect(System::Object ^sender, Forms::TreeViewEventArgs ^e)
{
	if (e->Node->Tag != nullptr)
	{
		String^ strTag = e->Node->Tag->ToString();
		if (String::IsNullOrEmpty(strTag) == false)
		{
			if (strTag->IndexOf(L"|TangramNode|") != -1)
			{
				String^ strIndex = strTag->Substring(strTag->IndexOf(L":") + 1);
				if (String::IsNullOrEmpty(strIndex) == false)
				{
					Control^ pCtrl = (Control^)sender;
					Control^ pTop = pCtrl->TopLevelControl;
					Type^ pType = pTop->GetType();
					if (pType->IsSubclassOf(Form::typeid))
					{
						String^ name = pType->Name + pCtrl->Name;
						theAppProxy.m_pProxy->ExtendCtrl(pCtrl->Handle.ToInt64(), name, strIndex);
					}
					pCtrl->Select();
				}
			}
		}
	}
}

void CTangramCLRProxy::SetObjectProperty(IDispatch* pDisp, BSTR bstrPropertyName, BSTR bstrPropertyValue)
{
	try
	{
		Object^ pObj = (Object^)Marshal::GetObjectForIUnknown((IntPtr)pDisp);
		if (pObj != nullptr)
		{
			PropertyInfo^ ppi = pObj->GetType()->GetProperty(BSTR2STRING(bstrPropertyName));
			if (ppi != nullptr)
			{
				ppi->SetValue(pObj, BSTR2STRING(bstrPropertyValue), nullptr);
			}
		}
	}
	catch (System::Exception^)
	{

	}
}

Object^ CTangramCLRProxy::InitTangramCtrl(Form^ pForm, Control^ pCtrl, bool bSave)
{
	if (pForm->Tag != nullptr && pForm->Tag->Equals(L"__NEWVERSION__"))
	{
		return nullptr;
	}
	WndPage^ pWndPage = TangramCLR::Tangram::CreateWndPage(pForm, nullptr);
	if (pCtrl&&pForm)
	{
		if (m_strCurrentWinFormTemplate!=_T(""))
		{
			::SendMessage((HWND)pForm->Handle.ToInt64(), WM_TANGRAMDATA, (WPARAM)m_strCurrentWinFormTemplate.GetBuffer(), 3);
			m_strCurrentWinFormTemplate = _T("");
		}
		else if (m_pProxy->m_strAppCurrentFormTemplatePath!=_T(""))
		{
			::SendMessage((HWND)pForm->Handle.ToInt64(), WM_TANGRAMDATA, (WPARAM)m_pProxy->m_strAppCurrentFormTemplatePath.GetBuffer(), 3);
		}
		m_pProxy->m_strAppCurrentFormTemplatePath = _T("");
		BSTR bstrIndex = STRING2BSTR(pForm->GetType()->FullName);
		Control^ pActiveCtrl = nullptr;
		String^ strTypeName = pCtrl->GetType()->FullName;
		if (strTypeName == L"System.Windows.Forms.TabControl" || pCtrl->GetType()->IsSubclassOf(Forms::TabControl::typeid))
		{
			TabControl^ pTabCtrl = (TabControl^)pCtrl;
			pActiveCtrl = pTabCtrl->SelectedTab;
		}
		if (pCtrl->GetType()==Forms::ToolStrip::typeid)
		{
			Forms::ToolStrip^ pToolStrip = (Forms::ToolStrip^)pCtrl;
			Forms::ToolStripItem^ button = (Forms::ToolStripItem^)pToolStrip->Items[L"newToolStripButton"];
			if (button != nullptr)
			{
				button->Click += gcnew System::EventHandler(&OnClick);
			}
		}
		if (pCtrl->GetType()==Forms::MenuStrip::typeid)
		{
			Forms::MenuStrip^ pMenuStrip = (Forms::MenuStrip^)pCtrl;
			Forms::ToolStripMenuItem^ fileMenu = (Forms::ToolStripMenuItem^)pMenuStrip->Items[L"fileMenu"];
			if (fileMenu != nullptr)
			{
				Forms::ToolStripMenuItem^ item = (Forms::ToolStripMenuItem^)fileMenu->DropDownItems[L"newToolStripMenuItem"];
				if (item != nullptr)
				{
					item->Click+= gcnew System::EventHandler(&OnClick);
				}
			}
		}


		CString strIndex = OLE2T(bstrIndex);
		strIndex.MakeLower();
		for each (Control^ pChild in pCtrl->Controls)
		{
			if (pChild != pActiveCtrl)
			{
				Type^ pType = pChild->GetType();
				if (pActiveCtrl == nullptr)
				{
					String^ strType = pType->FullName;
					if (strType->IndexOf(L"System.Drawing") == 0||strType->IndexOf(L"System.Windows.Forms.Button") == 0||strType->IndexOf(L"System.Windows.Forms.Label") == 0||strType->IndexOf(L"System.Windows.Forms.Text") == 0)
						continue;
					String^ strType2 = strType->Replace(L"System.Windows.Forms.", L"");
					if ((m_strExtendableTypes->IndexOf(L"|" + strType2 + L"|") != -1 && pChild->Dock == DockStyle::None) || pChild->Dock == DockStyle::Fill)
					{
						bool bExtendable = (pChild->Tag == nullptr);
						if (pChild->Tag != nullptr)
						{
							String^ strTag = pChild->Tag->ToString();
							bExtendable = (strTag->IndexOf(L"|Extendable|") >= 0);
						}
						if (bExtendable)
						{
							if (m_pOnCtrlVisible)
							{
							}
							else
							{
								m_pOnCtrlVisible = gcnew EventHandler(CTangramCLRProxy::OnVisibleChanged);
							}
							pChild->VisibleChanged += m_pOnCtrlVisible;
							String^ name = pChild->Name;
							if (strType == L"System.Windows.Forms.MdiClient")
							{
								name = "MdiClient";
								::SendMessage((HWND)pForm->Handle.ToPointer(), WM_TANGRAMDATA, 0, 4);
								if (m_pOnMdiChildActivate)
								{
								}
								else
								{
									m_pOnMdiChildActivate = gcnew EventHandler(CTangramCLRProxy::OnMdiChildActivate);
								}
								pForm->MdiChildActivate += m_pOnMdiChildActivate;
							}
							else if (strType == L"System.Windows.Forms.TreeView")
							{
								TreeView^ pTreeView = (TreeView^)pChild;
								pTreeView->AfterSelect += gcnew Forms::TreeViewEventHandler(&OnAfterSelect);
							}
							else if (strType == L"System.Windows.Forms.ListView")
							{
								ListView^ pListView = (ListView^)pChild;
								pListView->ItemSelectionChanged += gcnew Forms::ListViewItemSelectionChangedEventHandler(&OnItemSelectionChanged);
							}

							if (String::IsNullOrEmpty(name))
								name = strType;
							BSTR strName = STRING2BSTR(name->ToLower());
							WndFrameInfo* pInfo = new WndFrameInfo;
							pInfo->m_hCtrlHandle = (HWND)pChild->Handle.ToInt64();
							m_mapFrameInfo[pInfo->m_hCtrlHandle] = pInfo;
							pInfo->m_strCtrlName = name->ToLower();
							pInfo->m_strParentCtrlName = pCtrl->Name->ToLower();
							IWndFrame* _pFrame = m_pProxy->ConnectPage((HWND)pChild->Handle.ToInt64(), OLE2T(strName), pWndPage->m_pPage, pInfo);
							::SysFreeString(strName);
						}
					}
				}
				else
				{
					::SetWindowLongPtr((HWND)pChild->Handle.ToInt64(), GWLP_USERDATA, pForm->Handle.ToInt64());
					if (m_pOnCtrlVisible)
					{
					}
					else
					{
						m_pOnCtrlVisible = gcnew EventHandler(CTangramCLRProxy::OnVisibleChanged);
					}
					pChild->VisibleChanged += m_pOnCtrlVisible;
				}
				if (pType->IsSubclassOf(UserControl::typeid) == false)
					InitTangramCtrl(pForm, pChild,bSave);
			}
		}
		if (pActiveCtrl != nullptr)
		{
			Control^ pChild = pActiveCtrl;
			Type^ pType = pChild->GetType();
			String^ strType = pType->FullName;
			String^ strType2 = strType->Replace(L"System.Windows.Forms.", L"");
			if ((m_strExtendableTypes->IndexOf(L"|" + strType2 + L"|") != -1 && pChild->Dock == DockStyle::None) || pChild->Dock == DockStyle::Fill)
			{
				bool bExtendable = (pChild->Tag == nullptr);
				if (pChild->Tag != nullptr)
				{
					String^ strTag = pChild->Tag->ToString();
					bExtendable = (strTag->IndexOf(L"|Extendable|") >= 0);
				}
				if (bExtendable)
				{
					if (m_pOnCtrlVisible)
					{
					}
					else
					{
						m_pOnCtrlVisible = gcnew EventHandler(CTangramCLRProxy::OnVisibleChanged);
					}
					pChild->VisibleChanged += m_pOnCtrlVisible;

					String^ name = pChild->Name;
					if (String::IsNullOrEmpty(name))
						name = strType;
					BSTR strName = STRING2BSTR(name->ToLower());
					WndFrameInfo* pInfo = new WndFrameInfo;
					pInfo->m_hCtrlHandle = (HWND)pChild->Handle.ToInt64();
					m_mapFrameInfo[pInfo->m_hCtrlHandle] = pInfo;
					pInfo->m_strCtrlName = pChild->Name->ToLower();
					pInfo->m_strParentCtrlName = pCtrl->Name->ToLower();
					IWndFrame* _pFrame = m_pProxy->ConnectPage((HWND)pChild->Handle.ToInt64(), OLE2T(strName), pWndPage->m_pPage, pInfo);
					::SysFreeString(strName);
				}
			}
			if (pType->IsSubclassOf(UserControl::typeid) == false)
				InitTangramCtrl(pForm, pChild, bSave);
		}
		::SysFreeString(bstrIndex);
	}
	long nCount = 0;
	pWndPage->m_pPage->get_Count(&nCount);
	if (nCount == 0)
	{
		delete pWndPage;
		return nullptr;
	}
	return pWndPage;
}

Object^ CTangramCLRProxy::InitTangramNode(IWndNode* _pNode, Control^ pCtrl, bool bSave)
{
	if (::IsChild(m_pProxy->m_hHostWnd, (HWND)pCtrl->Handle.ToInt64()))
		return nullptr;
	WndPage^ pWndPage = nullptr;
	WndNode^ pNode = (WndNode^)theAppProxy._createObject<IWndNode, TangramCLR::WndNode>(_pNode);
	if (pNode)
	{
		pWndPage = pNode->WndPage;
		IWndPage* pPage = pWndPage->m_pPage;
		for each (Control^ pChild in pCtrl->Controls)
		{
			Type^ pType = pChild->GetType();
			String^ strType = pType->FullName;
			if (strType->IndexOf(L"System.Drawing") == 0 || strType->IndexOf(L"System.Windows.Forms.Button") == 0 || strType->IndexOf(L"System.Windows.Forms.Label") == 0 || strType->IndexOf(L"System.Windows.Forms.Text") == 0)
				break;
			String^ strType2 = strType->Replace(L"System.Windows.Forms.", L"");
			if ((m_strExtendableTypes->IndexOf(L"|" + strType2 + L"|") != -1 && pChild->Dock == DockStyle::None) || pChild->Dock == DockStyle::Fill)
			{
				bool bExtendable = (pChild->Tag == nullptr);
				if (pChild->Tag != nullptr)
				{
					String^ strTag = pChild->Tag->ToString();
					bExtendable = (strTag->IndexOf(L"|Extendable|") >= 0);
				}
				if (bExtendable)
				{
					IWndFrame* pFrame = nullptr;
					_pNode->get_Frame(&pFrame);
					CComBSTR bstrName("");
					pFrame->get_Name(&bstrName);
					String^ name = pNode->Name + L".";
					if (String::IsNullOrEmpty(pChild->Name))
						name += strType;
					else
						name += pChild->Name;
					name += L"." + BSTR2STRING(bstrName);
					BSTR strName = STRING2BSTR(name->ToLower());
					WndFrameInfo* pInfo = new WndFrameInfo;
					pInfo->m_hCtrlHandle = (HWND)pChild->Handle.ToInt64();
					m_mapFrameInfo[pInfo->m_hCtrlHandle] = pInfo;
					pInfo->m_strCtrlName = pChild->Name->ToLower();
					pInfo->m_strParentCtrlName = pCtrl->Name->ToLower();
					IWndFrame* _pFrame = m_pProxy->ConnectPage((HWND)pChild->Handle.ToInt64(), OLE2T(strName), pWndPage->m_pPage, pInfo);
					if (m_pOnCtrlVisible)
					{
					}
					else
					{
						m_pOnCtrlVisible = gcnew EventHandler(CTangramCLRProxy::OnVisibleChanged);
					}
					pChild->VisibleChanged += m_pOnCtrlVisible;
					if (strType == L"System.Windows.Forms.TreeView")
					{
						TreeView^ pTreeView = (TreeView^)pChild;
						pTreeView->AfterSelect += gcnew TreeViewEventHandler(&OnAfterSelect);
					}
					else if (strType == L"System.Windows.Forms.ListView")
					{
						ListView^ pListView = (ListView^)pChild;
						pListView->ItemSelectionChanged += gcnew ListViewItemSelectionChangedEventHandler(&OnItemSelectionChanged);
					}

					::SysFreeString(strName);
				}
			}
			InitTangramNode(_pNode, pChild, bSave);
		}
	}

	return pWndPage;
}

void CTangramCLRProxy::OnMdiChildActivate(System::Object ^sender, System::EventArgs ^e)
{
	Form^ pForm = static_cast<Form^>(sender);
	String^ strKey = L"";
	if (pForm->ActiveMdiChild != nullptr)
	{
		strKey = pForm->ActiveMdiChild->GetType()->FullName->ToLower();
		LRESULT l = ::SendMessage((HWND)pForm->ActiveMdiChild->Handle.ToPointer(), WM_TANGRAMDATA, 0, 2);
		if (l)
		{
			CString strPath = (LPCTSTR)l;
			strKey = BSTR2STRING(strPath);
			theApp.m_pTangram->ExtendFrames(pForm->Handle.ToInt64(), CComBSTR(L""), STRING2BSTR(strKey), CComBSTR(L""), false);
			return;
		}
		Object^ objTag = pForm->Tag;
		if (objTag != nullptr)
		{
			String^ strTag = objTag->ToString();
			if (String::IsNullOrEmpty(strTag)==false)
			{
				int nIndex = strTag->IndexOf("|");
				if (nIndex != -1)
				{
					String^ strKey2 = strTag->Substring(0, nIndex);
					if (String::IsNullOrEmpty(strKey2) == false)
					{
						strKey += L"_";
						strKey += strKey2;
					}
				}
			}
		}
	}
	theApp.m_pTangram->ExtendFrames(pForm->Handle.ToInt64(), CComBSTR(L""), STRING2BSTR(strKey), CComBSTR(L""), true);
}

void CTangramCLRProxy::OnLoad(System::Object ^sender, System::EventArgs ^e)
{
	Form^ pForm = static_cast<Form^>(sender);
	WndPage^ pWndPage = static_cast<WndPage^>(theAppProxy.InitTangramCtrl(pForm, pForm, true));
	if (pWndPage)
		pWndPage->Fire_OnPageLoad(pWndPage);
	Control^ ctrl = TangramCLR::Tangram::GetMDIClient(pForm);
	if (ctrl != nullptr)
	{
		Form^ pForm2 = pForm->ActiveMdiChild;
		if (pForm2 != nullptr)
		{
			String^ strKey = pForm2->GetType()->FullName;
			Object^ objTag = pForm2->Tag;
			if (objTag != nullptr)
			{
				String^ strTag = objTag->ToString();
				if (String::IsNullOrEmpty(strTag) == false)
				{
					int nIndex = strTag->IndexOf("|");
					if (nIndex != -1)
					{
						String^ strKey2 = strTag->Substring(0, nIndex);
						if (String::IsNullOrEmpty(strKey2) == false)
						{
							strKey += L"_";
							strKey += strKey2;
						}
					}
				}
			}
			theApp.m_pTangram->ExtendFrames(pForm->Handle.ToInt64(), CComBSTR(L""), STRING2BSTR(strKey), CComBSTR(L""), true);
		}
	}
	pForm->Load -= theAppProxy.m_pOnLoad;
}

void CTangramCLRProxy::OnCLRHostExit() 
{
	Forms::Application::Exit();
}

Tuple<String^, String^>^ AcquireTemplateStorageInfo()
{
	AcquireTemplateStorageInfoForm^ pForm = gcnew AcquireTemplateStorageInfoForm();
	if (pForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		Tuple<String^, String^>^ pResult = gcnew Tuple<String^, String^>(pForm->strTemplateCategory, pForm->strTemplateName);
		return pResult;
	}
	return nullptr;
}

void* CTangramCLRProxy::Extend(CString strKey, CString strData, CString strFeatures)
{
	if (strFeatures.CompareNoCase(_T("tangram:creatingform")) == 0)
	{
		int nPos = strKey.Find(_T(","));
		if (nPos != -1)
		{
			Object^ pObj = TangramCLR::Tangram::CreateObject(BSTR2STRING(strKey));
			if (pObj&&pObj->GetType()->IsSubclassOf(Form::typeid))
			{
				Form^ pForm = (Form^)pObj;
				pForm->Show();
			}
		}
	}
	else if (strFeatures.CompareNoCase(_T("tangram:creatingmdichildform")) == 0)
	{
		int nPos = strKey.Find(_T(":"));
		Form^ pParentForm = (Form^)Form::FromHandle((IntPtr)_wtol(strKey.Mid(nPos + 1)));
		if (pParentForm&&pParentForm->IsMdiContainer)
		{
			strKey = strKey.Left(nPos);
			nPos = strKey.Find(_T(","));
			if (nPos != -1)
			{
				Object^ pObj = TangramCLR::Tangram::CreateObject(BSTR2STRING(strKey));
				if (pObj&&pObj->GetType()->IsSubclassOf(Form::typeid))
				{
					Form^ pForm = (Form^)pObj;
					pForm->MdiParent = pParentForm;
					m_strCurrentWinFormTemplate = strData;
					pForm->Show();
				}
			}
		}
	}
	else if (strFeatures.CompareNoCase(_T("tangram:creatingmdichildform:design")) == 0)
	{
		int nPos = strKey.Find(_T(":"));
		Form^ pParentForm = (Form^)Form::FromHandle((IntPtr)_wtol(strKey.Mid(nPos + 1)));
		if (pParentForm&&pParentForm->IsMdiContainer)
		{
			auto it = m_pProxy->m_mapTangramDesignedWindows.find(strData);
			if (it != m_pProxy->m_mapTangramDesignedWindows.end())
			{
				HWND h = it->second;
				if(::IsWindow(h))
					::BringWindowToTop(h);
				else
				{
					strKey = strKey.Left(nPos);
					nPos = strKey.Find(_T(","));
					if (nPos != -1)
					{
						Object^ pObj = TangramCLR::Tangram::CreateObject(BSTR2STRING(strKey));
						if (pObj&&pObj->GetType()->IsSubclassOf(Form::typeid))
						{
							Form^ pForm = (Form^)pObj;
							if (pForm->IsMdiContainer)
								pForm->IsMdiContainer = false;
							pForm->MdiParent = pParentForm;
							m_strCurrentWinFormTemplate = strData;
							pForm->Text += L"-[design]";
							pForm->Show();
							HWND hWnd = (HWND)pForm->Handle.ToInt64();
							m_pProxy->m_mapTangramDesignedWindows[strData] = hWnd;
							LRESULT l = ::SendMessage((HWND)pForm->Handle.ToInt64(), WM_TANGRAMDATA, (WPARAM)strData.GetBuffer(), 3);
						}
					}
				}
			}
			else
			{
				strKey = strKey.Left(nPos);
				nPos = strKey.Find(_T(","));
				if (nPos != -1)
				{
					Object^ pObj = TangramCLR::Tangram::CreateObject(BSTR2STRING(strKey));
					if (pObj&&pObj->GetType()->IsSubclassOf(Form::typeid))
					{
						Form^ pForm = (Form^)pObj;
						if (pForm->IsMdiContainer)
							pForm->IsMdiContainer = false;
						pForm->MdiParent = pParentForm;
						m_strCurrentWinFormTemplate = strData;
						pForm->Text += L"-[design]";
						pForm->Show();
						HWND hWnd = (HWND)pForm->Handle.ToInt64();
						m_pProxy->m_mapTangramDesignedWindows[strData] = hWnd;
						LRESULT l = ::SendMessage((HWND)pForm->Handle.ToInt64(), WM_TANGRAMDATA, (WPARAM)strData.GetBuffer(), 3);
					}
				}
			}
		}
	}
	else if (strFeatures.Find(_T("tangram:creatingform:design")) != -1)
	{
		auto it = m_pProxy->m_mapTangramDesignedWindows.find(strData);
		if (it != m_pProxy->m_mapTangramDesignedWindows.end() && ::IsWindow(it->second))
		{
			::BringWindowToTop(it->second);
		}
		else
		{
			int nPos = strKey.Find(_T(","));
			if (nPos != -1)
			{
				Object^ pObj = TangramCLR::Tangram::CreateObject(BSTR2STRING(strKey));
				if (pObj&&pObj->GetType()->IsSubclassOf(Form::typeid))
				{
					Form^ pForm = (Form^)pObj;
					HWND hWnd = (HWND)pForm->Handle.ToInt64();
					m_pProxy->m_mapTangramDesignedWindows[strData] = hWnd;
					if (strFeatures.Find(L"new") != -1)
					{
						AcquireTemplateStorageInfoForm^ pInfoForm = gcnew AcquireTemplateStorageInfoForm();
						if (pInfoForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
						{
							Tuple<String^, String^>^ pResult = gcnew Tuple<String^, String^>(pInfoForm->strTemplateCategory, pInfoForm->strTemplateName);
							//return pResult;
							strData += STRING2BSTR(pInfoForm->strTemplateCategory);
							strData += _T("\\");
							strData += STRING2BSTR(pInfoForm->strTemplateName);
							strData += _T(".formxml");
							pForm->Text = pForm->Text + L"-[Design]";
							pForm->Show();
							return (void*)::SendMessage(hWnd, WM_TANGRAMDATA, (WPARAM)strData.GetBuffer(), 0);
						}
						return nullptr;
					}
					else
					{
						CMarkup xml;
						if (xml.Load(strData))
						{
							pForm->Text = pForm->Text + L"-[Design]";
							::SendMessage(hWnd, WM_TANGRAMDATA, (WPARAM)strData.GetBuffer(), 1);
						}
					}
					pForm->Show();
				}
			}
		}
	}
	
	return nullptr;
}


CString CTangramCLRProxy::GetNtpXML(CString strKey) {
	return _T("<tangram><window><node id='splitter' name='container' rows='1' cols='2' height ='100,100,' width='300,500,' borderwidth='0' splitterwidth='4' middlecolor='RGB(240,240,240)'><node name='launcher' id='ClrCtrl' cnnid='hostapp.hostctrl,hostapp' caption='' borderwidth='0' /><node name='host' caption='host' id='hostview' borderwidth='0' /></node></window></tangram>");
}

HRESULT CTangramCLRProxy::ActiveCLRMethod(BSTR bstrObjID, BSTR bstrMethod, BSTR bstrParam, BSTR bstrData)
{
	String^ strObjID = BSTR2STRING(bstrObjID);
	String^ strMethod = BSTR2STRING(bstrMethod);
	String^ strData = BSTR2STRING(bstrData);
	cli::array<Object^, 1>^ pObjs = { BSTR2STRING(bstrParam), BSTR2STRING(bstrData) };
	TangramCLR::Tangram::ActiveMethod(strObjID, strMethod, pObjs);
	return S_OK;
}

HRESULT CTangramCLRProxy::ActiveCLRMethod(IDispatch* pCLRObj, BSTR bstrMethod, BSTR bstrParam, BSTR bstrData)
{
	Object^ obj = Marshal::GetObjectForIUnknown((IntPtr)pCLRObj);
	String^ strMethod = BSTR2STRING(bstrMethod);
	String^ strData = BSTR2STRING(bstrData);
	cli::array<Object^, 1>^ pObjs = {};
	TangramCLR::Tangram::ActiveObjectMethod(obj, strMethod, pObjs);
	return S_OK;
}

IDispatch* CTangramCLRProxy::CreateCLRObj(BSTR bstrObjID)
{
	Object^ pObj = TangramCLR::Tangram::CreateObject(BSTR2STRING(bstrObjID));
	::SysFreeString(bstrObjID);
	if (pObj != nullptr)
	{
		if (pObj->GetType()->IsSubclassOf(Form::typeid))
		{
			Form^ thisForm = (Form^)pObj;
		}
		return (IDispatch*)Marshal::GetIUnknownForObject(pObj).ToPointer();
	}
	return nullptr;
}

Control^ CTangramCLRProxy::GetCanSelect(Control^ ctrl, bool direct)
{
	int nCount = ctrl->Controls->Count;
	Control^ pCtrl = nullptr;
	if (nCount)
	{
		for (int i = direct ? (nCount - 1):0; direct ? i >= 0 : i <= nCount - 1; direct ? i-- : i++)
		{
			pCtrl = ctrl->Controls[i];
if (direct && pCtrl->TabStop && pCtrl->Visible && pCtrl->Enabled)
return pCtrl;
pCtrl = GetCanSelect(pCtrl, direct);
if (pCtrl != nullptr)
return pCtrl;
		}
	}
	else if ((ctrl->CanSelect || ctrl->TabStop) && ctrl->Visible&&ctrl->Enabled)
	return ctrl;
	return nullptr;
}

HRESULT CTangramCLRProxy::ProcessCtrlMsg(HWND hCtrl, bool bShiftKey)
{
	Control^ pCtrl = (Control^)Control::FromHandle((IntPtr)hCtrl);
	if (pCtrl == nullptr)
		return S_FALSE;
	Control^ pChildCtrl = GetCanSelect(pCtrl, !bShiftKey);

	if (pChildCtrl)
		pChildCtrl->Select();
	return S_OK;
}

BOOL CTangramCLRProxy::ProcessFormMsg(HWND hFormWnd, LPMSG lpMSG, int nMouseButton)
{
	Control^ Ctrl = Form::FromHandle((IntPtr)hFormWnd);
	if (Ctrl == nullptr)
		return false;
	System::Windows::Forms::Message Msg;
	Msg.HWnd = (IntPtr)lpMSG->hwnd;
	Msg.Msg = lpMSG->message;
	Msg.WParam = (IntPtr)((LONG)lpMSG->wParam);
	Msg.LParam = (IntPtr)lpMSG->lParam;
	Form^ pForm = static_cast<Form^>(Ctrl);
	if (pForm == nullptr)
		return Ctrl->PreProcessMessage(Msg);
	if (pForm->IsMdiContainer)
	{
		Ctrl = pForm->ActiveControl;
		if (Ctrl != nullptr)
			return Ctrl->PreProcessMessage(Msg);
	}
	return pForm->PreProcessMessage(Msg);
}

HWND CTangramCLRProxy::GetHwnd(HWND parent, int x, int y, int width, int height)
{
	System::Windows::Interop::HwndSourceParameters hwsPars;
	hwsPars.ParentWindow = System::IntPtr(parent);
	hwsPars.WindowStyle = WS_CHILD | WS_VISIBLE;
	hwsPars.PositionX = x;
	hwsPars.PositionY = y;
	hwsPars.Width = width;
	hwsPars.Height = height;
	System::Windows::Interop::HwndSource^ hws = gcnew System::Windows::Interop::HwndSource(hwsPars);
	return nullptr;
}

void CTangramCLRProxy::SelectNode(IWndNode* pNode)
{
	if (pNode == nullptr)
	{
		return;
	}
	Object^ pObj = nullptr;
	try
	{
		if (pNode)
			pObj = theAppProxy._createObject<IWndNode, TangramCLR::WndNode>(pNode);
	}
	catch (...)
	{

	}
	finally
	{
		if (pObj != nullptr)
		{
			try
			{
				m_pPropertyGrid->SelectedObject = pObj;
			}
			catch (...)
			{

			}
		}
		else
		{
			m_pPropertyGrid->SelectedObject = nullptr;
		}
	}
}

IDispatch* CTangramCLRProxy::TangramCreateObject(BSTR bstrObjID, long hParent, IWndNode* pHostNode)
{
	String^ strID = BSTR2STRING(bstrObjID);
	Object^ _pObj = TangramCLR::Tangram::CreateObject(strID);
	WndNode^ _pNode = (WndNode^)_createObject<IWndNode, TangramCLR::WndNode>(pHostNode);
	if (_pObj == nullptr)
	{
		TangramCLR::ErrorCtrl^ pObj = gcnew TangramCLR::ErrorCtrl();
		CString strInfo = _T("");
		strInfo.Format(_T("Error Information: the Component \"%s\" don't exists,Please install it correctly."), OLE2T(bstrObjID));
		((TangramCLR::ErrorCtrl^)pObj)->ErrorInfoText = BSTR2STRING(strInfo);
		TangramCLR::Tangram::m_pFrameworkElementDic[pObj] = _pNode;
		return (IDispatch*)(Marshal::GetIUnknownForObject(pObj).ToInt64());
	}
	if (_pObj->GetType()->IsSubclassOf(Control::typeid))
	{
		Control^ pObj = static_cast<Control^>(_pObj);
		if (pObj != nullptr&&pHostNode)
		{
			__int64 h = 0;
			pHostNode->get_Handle(&h);
			if(h)
				::SendMessage((HWND)h, WM_TANGRAMMSG, 0, 19920612);
			IWndNode* pRootNode = NULL;
			pHostNode->get_RootNode(&pRootNode);
			m_pTangramProxy->DelegateEvent(pObj, pHostNode);
			CComBSTR bstrName(L"");
			pHostNode->get_Name(&bstrName);
			CString strName = OLE2T(bstrName);
			bool bProperty = false;
			if (strName.CompareNoCase(_T("TangramPropertyGrid")) == 0)
			{
				bProperty = true;
				m_pPropertyGrid = (PropertyGrid^)pObj;
				m_pPropertyGrid->ToolbarVisible = false;
				m_pPropertyGrid->PropertySort = PropertySort::Alphabetical;
			}
			HWND hWnd = (HWND)pObj->Handle.ToInt64();
			if (pObj->GetType()->IsSubclassOf(Form::typeid))
			{
				::SetParent(hWnd, (HWND)hParent);
				auto it = m_mapForm.find(hWnd);
				if (it != m_mapForm.end())
					m_mapForm.erase(it);
				m_pProxy->m_hFormNodeWnd = hWnd;
				::SetWindowLongPtr(hWnd, GWL_STYLE, ::GetWindowLongPtr(hWnd, GWL_STYLE) & ~(WS_SIZEBOX | WS_BORDER | WS_OVERLAPPED | WS_MAXIMIZEBOX | WS_MINIMIZEBOX | WS_THICKFRAME | WS_CAPTION) | WS_CHILD | WS_VISIBLE);
				::SetWindowLongPtr(hWnd, GWL_EXSTYLE, ::GetWindowLongPtr(hWnd, GWL_EXSTYLE)& ~(WS_EX_APPWINDOW/*|WS_EX_CLIENTEDGE*/));
				((Form^)pObj)->Show();
			}
			IDispatch* pDisp = (IDispatch*)(Marshal::GetIUnknownForObject(pObj).ToInt64());
			_pNode->m_pHostObj = pObj;
			if( m_pProxy->IsMDIFrameNode(pHostNode)==false&&bProperty==false)
				InitTangramNode(pHostNode, pObj, true);
			return pDisp;
		}
	}
	else
	{
		if (_pObj->GetType()->IsSubclassOf(System::Windows::FrameworkElement::typeid))
		{
			TangramCLR::Tangram::m_pFrameworkElementDic[_pObj] = _pNode;
			try
			{
				System::Windows::Forms::Integration::ElementHost^ pElementHost = gcnew System::Windows::Forms::Integration::ElementHost();
				pElementHost->Child = (FrameworkElement^)_pObj;
				IDispatch* pDisp = (IDispatch*)(Marshal::GetIUnknownForObject(pElementHost).ToInt64());
				_pNode->m_pHostObj = pElementHost;
				return pDisp;
			}
			catch (System::Exception^ ex)
			{
				Debug::WriteLine(L"Tangram WPFControlWrapper Exception 1: " + ex->Message);
				Debug::WriteLine(L"Tangram WPFControlWrapper Exception 1: " + ex->InnerException->Message);
			}
		}
	}
	return nullptr;
}

int CTangramCLRProxy::IsWinForm(HWND hWnd)
{
	if (hWnd == 0)
		return false;
	IntPtr handle = (IntPtr)hWnd;
	Control^  pControl = Control::FromHandle(handle);
	if (pControl != nullptr)
	{
		if (pControl->GetType()->IsSubclassOf(Form::typeid))
		{
			Form^ pForm = (Form^)pControl;
			if (pForm->IsMdiContainer)
				return 2;
			else
				return 1;
		}
		else if (::GetWindowLong(hWnd, GWL_EXSTYLE)&WS_EX_APPWINDOW)
		{
			int nCount = pControl->Controls->Count;
			String^ strName = L"";
			for (int i = nCount - 1; i >= 0; i--)
			{
				Control^ pCtrl = pControl->Controls[i];
				strName = pCtrl->GetType()->Name->ToLower();
				if (strName == L"mdiclient")
				{
					return 2;
				}
			}
			return 1;
		}
	}
	return 0;
}

IDispatch* CTangramCLRProxy::GetCLRControl(IDispatch* CtrlDisp, BSTR bstrNames)
{
	CString strNames = OLE2T(bstrNames);
	if (strNames != _T(""))
	{
		int nPos = strNames.Find(_T(","));
		if (nPos == -1)
		{
			Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)CtrlDisp);
			if (pCtrl != nullptr)
			{
				Control::ControlCollection^ Ctrls = pCtrl->Controls;
				pCtrl = Ctrls[BSTR2STRING(bstrNames)];
				if (pCtrl == nullptr)
				{
					int nIndex = _wtoi(OLE2T(bstrNames));
					pCtrl = Ctrls[nIndex];
				}
				if (pCtrl != nullptr)
					return (IDispatch*)Marshal::GetIDispatchForObject(pCtrl).ToPointer();
			}
			return S_OK;
		}

		Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)CtrlDisp);
		while (nPos != -1)
		{
			CString strName = strNames.Left(nPos);
			if (strName != _T(""))
			{
				if (pCtrl != nullptr)
				{
					Control^ pCtrl2 = pCtrl->Controls[BSTR2STRING(strName)];
					if (pCtrl2 == nullptr)
					{
						if (pCtrl->Controls->Count > 0)
							pCtrl2 = pCtrl->Controls[_wtoi(strName)];
					}
					if (pCtrl2 != nullptr)
						pCtrl = pCtrl2;
					else
						return S_OK;
				}
				else
					return S_OK;
			}
			strNames = strNames.Mid(nPos + 1);
			nPos = strNames.Find(_T(","));
			if (nPos == -1)
			{
				if (pCtrl != nullptr)
				{
					Control^ pCtrl2 = pCtrl->Controls[BSTR2STRING(strNames)];
					if (pCtrl2 == nullptr)
					{
						if (pCtrl->Controls->Count > 0)
							pCtrl2 = pCtrl->Controls[_wtoi(strName)];
					}
					if (pCtrl2 == nullptr)
						return S_OK;
					if (pCtrl2 != nullptr)
						return (IDispatch*)Marshal::GetIDispatchForObject(pCtrl2).ToPointer();
				}
			}
		}
	}
	return NULL;
}

BSTR CTangramCLRProxy::GetCtrlName(IDispatch* _pCtrl)
{
	Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)_pCtrl);
	if (pCtrl != nullptr)
		return STRING2BSTR(pCtrl->Name);
	return L"";
}

void CTangramCLRProxy::ReleaseTangramObj(IDispatch* pDisp)
{
	LONGLONG nValue = (LONGLONG)pDisp;
	_removeObject(nValue);
}

HWND CTangramCLRProxy::GetMDIClientHandle(IDispatch* pMDICtrl)
{
	Form^ pCtrl = (Form^)Marshal::GetObjectForIUnknown((IntPtr)pMDICtrl);
	if (pCtrl != nullptr)
	{
		Control^ ctrl = TangramCLR::Tangram::GetMDIClient(pCtrl);
		if (ctrl != nullptr)
			return (HWND)ctrl->Handle.ToInt64();
	}
	return NULL;
}

IDispatch* CTangramCLRProxy::GetCtrlByName(IDispatch* CtrlDisp, BSTR bstrName, bool bFindInChild)
{
	try
	{
		Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)CtrlDisp);
		if (pCtrl != nullptr)
		{
			cli::array<Control^, 1>^ pArray = pCtrl->Controls->Find(BSTR2STRING(bstrName), bFindInChild);
			if (pArray != nullptr&&pArray->Length)
				return (IDispatch*)Marshal::GetIDispatchForObject(pArray[0]).ToPointer();
		}

	}
	catch (System::Exception^)
	{

	}
	return NULL;
}

int CTangramCLRProxy::IsSpecifiedType(IUnknown* pUnknown, BSTR bstrName)
{
	Object^ pObj = Marshal::GetObjectForIUnknown((IntPtr)pUnknown);
	if (pObj&&pObj->GetType()->FullName->Equals(BSTR2STRING(bstrName)))
	{
		return 1;
	}
	return 0;
}

void CTangramCLRProxy::SelectObj(IDispatch* CtrlDisp)
{
	try
	{
		Object^ pCtrl = (Object^)Marshal::GetObjectForIUnknown((IntPtr)CtrlDisp);
		if (pCtrl != nullptr)
		{
			m_pPropertyGrid->SelectedObject = pCtrl;
		}

	}
	catch (System::Exception^ e)
	{
		String^ strInfo = e->Message;
	}
}

BSTR CTangramCLRProxy::GetCtrlValueByName(IDispatch* CtrlDisp, BSTR bstrName, bool bFindInChild)
{
	try
	{
		Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)CtrlDisp);
		if (pCtrl != nullptr)
		{
			cli::array<Control^, 1>^ pArray = pCtrl->Controls->Find(BSTR2STRING(bstrName), bFindInChild);
			if (pArray != nullptr&&pArray->Length)
			{
				return STRING2BSTR(pArray[0]->Text);
			}
		}
	}
	catch (System::Exception^)
	{

	}
	return NULL;
}

void CTangramCLRProxy::SetCtrlValueByName(IDispatch* CtrlDisp, BSTR bstrName, bool bFindInChild, BSTR strVal)
{
	try
	{
		Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)CtrlDisp);
		if (pCtrl != nullptr)
		{
			cli::array<Control^, 1>^ pArray = pCtrl->Controls->Find(BSTR2STRING(bstrName), bFindInChild);
			if (pArray != nullptr&&pArray->Length)
			{
				pArray[0]->Text = BSTR2STRING(strVal);
				return;
			}
		}
	}
	catch (System::Exception^)
	{

	}
}

HWND CTangramCLRProxy::GetCtrlHandle(IDispatch* _pCtrl)
{
	Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)_pCtrl);
	if (pCtrl != nullptr)
		return (HWND)pCtrl->Handle.ToInt64();
	return 0;
}

BSTR CTangramCLRProxy::GetCtrlType(IDispatch* _pCtrl)
{
	Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)_pCtrl);
	if (pCtrl != nullptr)
		return STRING2BSTR(pCtrl->GetType()->FullName);
	return L"";
}

IDispatch* CTangramCLRProxy::GetCtrlFromHandle(HWND hWnd)
{
	Control^ pCtrl = Control::FromHandle((IntPtr)hWnd);
	if (pCtrl != nullptr) {
		return (IDispatch*)Marshal::GetIUnknownForObject(pCtrl).ToPointer();
	}
	return nullptr;
}

HWND CTangramCLRProxy::IsCtrlCanNavigate(IDispatch* ctrl)
{
	Control^ pCtrl = (Control^)Marshal::GetObjectForIUnknown((IntPtr)ctrl);
	if (pCtrl != nullptr)
	{
		if (pCtrl->Dock == DockStyle::Fill)
			return (HWND)pCtrl->Handle.ToInt64();
	}
	return 0;
}

void CTangramCLRProxy::TangramAction(BSTR bstrXml, IWndNode* pNode)
{
	CString strXml = OLE2T(bstrXml);
	if (strXml != _T(""))
	{
		CTangramXmlParse m_Parse;
		if (m_Parse.LoadXml(strXml))
		{
			if (pNode == nullptr)
			{
			}
			else
			{
				WndNode^ pWindowNode = (WndNode^)theAppProxy._createObject<IWndNode, WndNode>(pNode);
				if (pWindowNode)
				{
					int nType = m_Parse.attrInt(_T("Type"), 0);
					switch (nType)
					{
					case 5:
						if (pWindowNode != nullptr)
						{
						}
						break;
					default:
						{
							CString strID = m_Parse.attr(_T("ObjID"), _T(""));
							CString strMethod = m_Parse.attr(_T("Method"), _T(""));
							if (strID != _T("") && strMethod != _T(""))
							{
								cli::array<Object^, 1>^ pObjs = { BSTR2STRING(strXml), pWindowNode };
								TangramCLR::Tangram::ActiveMethod(BSTR2STRING(strID), BSTR2STRING(strMethod), pObjs);
							}
						}
						break;
					}
				}
			}
		}
	}
}

bool CTangramCLRProxy::_insertObject(Object^ key, Object^ val)
{
	Hashtable^ htObjects = (Hashtable^)m_htObjects;
	htObjects[key] = val;
	return true;
}

Object^ CTangramCLRProxy::_getObject(Object^ key)
{
	Hashtable^ htObjects = (Hashtable^)m_htObjects;
	return htObjects[key];
}

bool CTangramCLRProxy::_removeObject(Object^ key)
{
	Hashtable^ htObjects = (Hashtable^)m_htObjects;

	if (htObjects->ContainsKey(key))
	{
		htObjects->Remove(key);
		return true;
	}
	return false;
}

void CTangramNodeEvent::OnExtendComplete()
{
	if (m_pTangramNodeCLREvent)
		m_pTangramNodeCLREvent->OnExtendComplete(NULL);
}

void CTangramNodeEvent::OnTabChange(int nActivePage, int nOldPage)
{
	if (m_pWndNode != nullptr)
		m_pTangramNodeCLREvent->OnTabChange(nActivePage, nOldPage);
}

void CTangramNodeEvent::OnMessageReceived(BSTR barg1, BSTR barg2)
{
	if (m_pWndNode != nullptr)
		m_pTangramNodeCLREvent->OnMessageReceived(barg1, barg2);
}

void CTangramNodeEvent::OnDestroy()
{
	LONGLONG nValue = (LONGLONG)m_pWndNode;
	theAppProxy._removeObject(nValue);
	if (m_pTangramNodeCLREvent)
	{
		m_pTangramNodeCLREvent->OnDestroy();
		delete m_pTangramNodeCLREvent;
		m_pTangramNodeCLREvent = nullptr;
	}
	this->DispEventUnadvise(m_pWndNode);
}

void CTangramNodeEvent::OnDocumentComplete(IDispatch* pDocdisp, BSTR bstrUrl)
{
	if (m_pWndNode!=nullptr)
		m_pTangramNodeCLREvent->OnDocumentComplete(pDocdisp, bstrUrl);
}

void CTangramNodeEvent::OnNodeAddInCreated(IDispatch* pAddIndisp, BSTR bstrAddInID, BSTR bstrAddInXml)
{
	if (m_pWndNode != nullptr)
		m_pTangramNodeCLREvent->OnNodeAddInCreated(pAddIndisp, bstrAddInID, bstrAddInXml);
}

void CTangramCLRApp::OnTangramClose()
{
	AtlTrace(_T("*************Begin CTangramCLRApp::OnClose:  ****************\n"));
	TangramCLR::Tangram::GetTangram()->Fire_OnClose();
	FormCollection^ pCollection = Forms::Application::OpenForms;
	int nCount = pCollection->Count;
	while (pCollection->Count>0)
	{
		Form^ pForm = pCollection[0];
		pForm->Close();
	}
	if (theApp.m_pTangram)
	{
		theApp.m_pTangram->put_AppKeyValue(CComBSTR(L"CLRProxy"), CComVariant((LONGLONG)0));
	}
	Object^ pPro = (Object^)theAppProxy.m_pPropertyGrid;
	if (pPro&&theAppProxy.m_pPropertyGrid->SelectedObject)
		theAppProxy.m_pPropertyGrid->SelectedObject = nullptr;
	//EnterCriticalSection(&theApp.m_csTaskRecycleCriticalSection);
	//LeaveCriticalSection(&theApp.m_csTaskRecycleCriticalSection);
	AtlTrace(_T("*************End CTangramCLRApp::OnClose:  ****************\n"));
}

void CTangramCLRApp::OnExtendComplete(long hWnd, BSTR bstrUrl, IWndNode* pRootNode)
{
	TangramCLR::Tangram^ pManager = TangramCLR::Tangram::GetTangram();
	WndNode^ _pRootNode = theAppProxy._createObject<IWndNode, WndNode>(pRootNode);
	IntPtr nHandle = (IntPtr)hWnd;
	pManager->Fire_OnExtendComplete(nHandle, BSTR2STRING(bstrUrl), _pRootNode);
}

CWndPageClrEvent::CWndPageClrEvent()
{

}

CWndPageClrEvent::~CWndPageClrEvent()
{
}

void __stdcall  CWndPageClrEvent::OnDestroy()
{
	if (m_pPage)
		delete m_pPage;
}

void __stdcall  CWndPageClrEvent::OnTabChange(IWndNode* sender, int nActivePage, int nOldPage)
{
	Object^ pObj = m_pPage;
	TangramCLR::WndPage^ pPage = static_cast<TangramCLR::WndPage^>(pObj);
	WndNode^ pWindowNode = (WndNode^)theAppProxy._createObject<IWndNode, WndNode>(sender);
	pPage->Fire_OnTabChange(pWindowNode, nActivePage, nOldPage);
}

void CWndPageClrEvent::OnInitialize(IDispatch* pHtmlWnd, BSTR bstrUrl)
{
	Object^ pObj = m_pPage;
	TangramCLR::WndPage^ pPage = static_cast<TangramCLR::WndPage^>(pObj);
	pPage->Fire_OnDocumentComplete(pPage, Marshal::GetObjectForIUnknown((IntPtr)pHtmlWnd), BSTR2STRING(bstrUrl));
}

void CWndPageClrEvent::OnIPCMsg(IWndFrame* sender, BSTR bstrType, BSTR bstrContent, BSTR bstrFeature)
{
	Object^ pObj = m_pPage;
	TangramCLR::WndPage^ pPage = static_cast<TangramCLR::WndPage^>(pObj);
	WndFrame^ pWndFrame = (WndFrame^)theAppProxy._createObject<IWndFrame, WndFrame>(sender);
	pPage->Fire_OnIPCMsg(pWndFrame, BSTR2STRING(bstrType), BSTR2STRING(bstrContent), BSTR2STRING(bstrFeature));
}

void CTangramCLRProxy::OnApplicationExit(System::Object ^sender, System::EventArgs ^e)
{
	for each (KeyValuePair<String^, TangramAppProxy^>^ obj in TangramCLR::Tangram::m_pTangramAppProxyDic)
	{
		if (obj->Value != nullptr)
		{
			TangramAppProxy^ proxy = obj->Value;
			if (proxy->m_pTangramAppProxy&&::IsWindow(proxy->m_pTangramAppProxy->m_hMainWnd))
				::DestroyWindow(proxy->m_pTangramAppProxy->m_hMainWnd);
		}
	}
}


CTangramWPFObjWrapper::~CTangramWPFObjWrapper(void)
{
	WndNode^ pNode = nullptr;
	if (TangramCLR::Tangram::m_pFrameworkElementDic->TryGetValue(m_pUIElement, pNode))
	{
		TangramCLR::Tangram::m_pFrameworkElementDic->Remove(m_pUIElement);
	}
}

void CTangramWPFObjWrapper::ShowVisual(BOOL bShow) 
{
	if (bShow)
	{
		m_pUIElement->Visibility = System::Windows::Visibility::Visible;
	}
	else
	{
		m_pUIElement->Visibility = System::Windows::Visibility::Hidden;
	}
}

void CTangramWPFObjWrapper::Focusable(BOOL bFocus)
{
	m_pUIElement->Focusable = bFocus;
}

void CTangramWPFObjWrapper::InvalidateVisual() 
{
	if (m_pUIElement)
	{
		m_pUIElement->InvalidateVisual();
	}
}

BOOL CTangramWPFObjWrapper::IsVisible()
{
	return m_pUIElement->IsVisible;
}

CTangramWPFObj* CTangramWPFObjWrapper::CreateControl(Type^ type, HWND parent, DWORD style, int x, int y, int width, int height)
{
	m_pUIElement = (FrameworkElement^)Activator::CreateInstance(type);
	m_pDisp = (IDispatch*)(System::Runtime::InteropServices::Marshal::GetIUnknownForObject(m_pUIElement).ToInt64());
	if (m_pDisp)
	{
		Interop::HwndSourceParameters^ sourceParams = gcnew Interop::HwndSourceParameters("Tangram WpfControlWrapper");
		sourceParams->PositionX = x;
		sourceParams->PositionY = y;
		sourceParams->Height = height;
		sourceParams->Width = width;
		sourceParams->WindowStyle = style;
		sourceParams->ParentWindow = IntPtr(parent);

		m_pSource = gcnew Interop::HwndSource(*sourceParams);
		m_pSource->AddHook(gcnew Interop::HwndSourceHook(&ChildHwndSourceHook));
		m_hwndWPF = (HWND)m_pSource->Handle.ToPointer();
	}

	return m_hwndWPF == NULL ? nullptr : this;
}


void CTangramCLRProxy::OnSelectedObjectsChanged(Object ^sender, EventArgs ^e)
{
	if (theAppProxy.m_pPropertyGrid->SelectedObject != nullptr)
	{
		int nType = 100;
		IDispatch* pDisp = (IDispatch*)(Marshal::GetIUnknownForObject(theAppProxy.m_pPropertyGrid->SelectedObject).ToInt64());
		if (pDisp)
		{
			HWND hWnd = nullptr;
			String^ s = theAppProxy.m_pPropertyGrid->SelectedObject->GetType()->ToString();
			if (s == L"System.Windows.Forms.Form")
			{
				Form^ pForm = (Form^)theAppProxy.m_pPropertyGrid->SelectedObject;
				hWnd = (HWND)pForm->Handle.ToInt64();
				auto it = theAppProxy.m_mapDesigningForm.find(hWnd);
				if (it == theAppProxy.m_mapDesigningForm.end())
				{
					pForm->ControlAdded += gcnew ControlEventHandler(&OnControlAdded);
					pForm->ControlRemoved += gcnew ControlEventHandler(&OnControlRemoved);
					pForm->HandleDestroyed += gcnew EventHandler(&OnHandleDestroyed);
				}
				nType = 2;
				if (pForm->IsMdiContainer)
				{
					nType = 3;
					theAppProxy.GetMDIClientHandle(pDisp);
					Control^ ctrl = TangramCLR::Tangram::GetMDIClient(pForm);
					__int64 nHandle = ctrl->Handle.ToInt64();
					::SetWindowLongPtr(hWnd, GWLP_USERDATA, nHandle);
				}
			}
			else if(s == L"System.Windows.Forms.UserControl")
			{
				nType = 1;
				UserControl^ pCtrl = (UserControl^)theAppProxy.m_pPropertyGrid->SelectedObject;
				hWnd = (HWND)pCtrl->Handle.ToInt64();
			}
			else if (theAppProxy.m_pPropertyGrid->SelectedObject->GetType()->IsSubclassOf(Control::typeid))
			{
				nType = 4;
				Control^ ctrl = (Control^)theAppProxy.m_pPropertyGrid->SelectedObject;
				hWnd = (HWND)ctrl->Handle.ToInt64();
			}
			else
			{
				CComQIPtr<VxDTE::CodeElement> pCodeElement(pDisp);
				if (pCodeElement)
				{
					BSTR bstrName = ::SysAllocString(L"");
					pCodeElement->get_FullName(&bstrName);
					theAppProxy.m_pProxy->m_pTangramPackageProxy->OnSelectedObjectsChanged(pDisp, OLE2T(bstrName), 1, 0);
					::SysFreeString(bstrName);
					return;
				}
			}
			BSTR strType = STRING2BSTR(s);
			theAppProxy.m_pProxy->m_pTangramPackageProxy->OnSelectedObjectsChanged(pDisp, OLE2T(strType), (LPARAM)hWnd, nType);
			::SysFreeString(strType);
		}
	}
}

void CTangramCLRProxy::OnControlAdded(Object ^sender, ControlEventArgs ^e)
{
	String^ strType = e->Control->GetType()->ToString();//System.Windows.Forms.MdiClient
	if (strType == L"System.Windows.Forms.MdiClient")
	{
		__int64 nHandle = e->Control->Handle.ToInt64();
		HWND hWnd = (HWND)((Form^)sender)->Handle.ToInt64();
		::SetWindowLongPtr(hWnd, GWLP_USERDATA, nHandle);
		::SendMessage(hWnd, WM_TANGRAMMSG, nHandle, 20170907);
	}
}

void CTangramCLRProxy::OnControlRemoved(Object ^sender, ControlEventArgs ^e)
{
	String^ strType = e->Control->GetType()->ToString();
	if (strType == L"System.Windows.Forms.MdiClient")
	{
		__int64 nHandle = e->Control->Handle.ToInt64();
		::SetWindowLongPtr((HWND)((Form^)sender)->Handle.ToInt64(), GWLP_USERDATA, 0);
	}
}

void CTangramCLRProxy::OnHandleDestroyed(Object ^sender, EventArgs ^e)
{
	Form^ pForm = (Form^)sender;
	HWND hWnd = (HWND)pForm->Handle.ToInt64();
	auto it = theAppProxy.m_mapDesigningForm.find(hWnd);
	if (it != theAppProxy.m_mapDesigningForm.end())
	{
		theAppProxy.m_mapDesigningForm.erase(it);
	}
}

void CTangramCLRProxy::OnClick(Object ^sender, EventArgs ^e)
{
	if (sender->GetType()->IsSubclassOf(ToolStripItem::typeid))
	{
		ToolStripItem^ button = (ToolStripItem^)sender;
		if (button)
		{
			Form^ form = (Form^)button->Owner->Parent;
			if (form == nullptr)
			{
				form = (Form^)button->OwnerItem->Owner->Parent;
			}
			if (form&&form->IsMdiContainer)
				TangramCLR::Tangram::ExtendMDIClient(form, L"newdoc", L"");
			return;
		}

	}
	Form^ form = (Form^)Form::FromHandle((IntPtr)::GetActiveWindow());
	if(form&&form->IsMdiContainer)
		TangramCLR::Tangram::ExtendMDIClient(form, L"newdoc", L"");
}
