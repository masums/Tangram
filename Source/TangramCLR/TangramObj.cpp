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

#include "StdAfx.h"
#include "dllmain.h"
#include "TangramNodeCLREvent.h"
#include "TangramObj.h"
#include "ChromeWebBrowser.h"
#include "Markup.h"

using namespace System::Threading;
using namespace System::Diagnostics;
using namespace System::Reflection;
using namespace System::Runtime::InteropServices;

namespace TangramCLR
{
	TangramAppProxy::TangramAppProxy()
	{
		m_pTangramAppProxy = nullptr;
	}

	TangramAppProxy::~TangramAppProxy()
	{

	}

	void TangramAppProxy::Init()
	{
		//if (m_pTangramAppProxy)
		//	m_pTangramAppProxy->Init();
	}

	WndNode^ WndNodeCollection::default::get(int iIndex)
	{
		WndNode^ Node = nullptr;
		IWndNode* pNode = nullptr;
		m_pNodeCollection->get_Item(iIndex,&pNode);
		return theAppProxy._createObject<IWndNode, WndNode>(pNode);
	}

	WndNode::WndNode(IWndNode* pNode)
	{
		LONGLONG m_nConnector = 0;
		m_hWnd = NULL;
		m_pTangramNodeEvent = new CTangramNodeEvent();
		m_pTangramNodeEvent->m_pWndNode = pNode;
		m_pTangramNodeEvent->m_pTangramNodeCLREvent = new CWndNodeCLREvent();
		m_pTangramNodeCLREvent = m_pTangramNodeEvent->m_pTangramNodeCLREvent;
		m_pTangramNodeEvent->m_pTangramNodeCLREvent->m_pWndNode = this;
		HRESULT hr = m_pTangramNodeEvent->DispEventAdvise(pNode);
		if(theAppProxy.m_pProxy)
			theAppProxy.m_pProxy->AttachNode(m_pTangramNodeEvent);
		m_pChildNodes = nullptr;
		SetNewNode(pNode);
		LONGLONG nValue = (LONGLONG)pNode;
		theAppProxy._insertObject(nValue, this);
		m_pChromeBrowserProxy = nullptr;
	}

	WndNode::~WndNode()
	{
		if (m_pChildNodes)
		{
			delete m_pChildNodes;
		}
		delete m_pTangramNodeCLREvent;
		//LONGLONG nValue = (LONGLONG)m_pWndNode;
		//theAppProxy._removeObject(nValue);
		SetNewNode(NULL);
	}

	WndNodeCollection^ WndNode::ChildNodes::get()
	{
		if (m_pChildNodes == nullptr)
		{
			CComPtr<IWndNodeCollection> pNodes;

			m_pWndNode->get_ChildNodes(&pNodes);
			m_pChildNodes = gcnew WndNodeCollection(pNodes);
		}
		return m_pChildNodes;
	}

	WndPage^ WndNode::WndPage::get()
	{
		IWndPage* pPage = nullptr;
		m_pWndNode->get_WndPage(&pPage);

		if (pPage)
		{
			return theAppProxy._createObject<IWndPage, TangramCLR::WndPage>(pPage);
		}
		return nullptr;
	}

	String^ WndNode::Caption::get()
	{
		if(m_pWndNode)
		{
			CComBSTR bstrCap("");
			m_pWndNode->get_Caption(&bstrCap);
			String^ strCap = Marshal::PtrToStringUni((System::IntPtr)LPTSTR(LPCTSTR(bstrCap)));
			return strCap;
		}
		return "";
	}

	String^ WndNode::URL::get()
	{
		if (m_pWndNode)
		{
			ViewType nType;
			m_pWndNode->get_NodeType(&nType);
			CComBSTR bstrCap("");
			switch (nType)
			{
			case BlankView:
				{
					m_pWndNode->get_URL(&bstrCap);
					return BSTR2STRING(bstrCap);
				}
				break;
			case ActiveX:
				{
					CComVariant var;
					m_pWndNode->get_XObject(&var);
					if (var.vt == VT_DISPATCH)
					{
						CComQIPtr<IWebBrowser2> pWebCtrl(var.pdispVal);
						if (pWebCtrl)
						{
							m_pWndNode->get_Attribute(CComBSTR("id"), &bstrCap);
							return BSTR2STRING(bstrCap);
						}
					}
				}
				break;
			default:
				break;
			}
		}
		return "";
	}

	void WndNode::URL::set(String^ newVal)
	{
		if (m_pWndNode)
		{
			ViewType nType;
			m_pWndNode->get_NodeType(&nType);
			switch (nType)
			{
			case BlankView:
				if (nType == BlankView)
				{
					m_pWndNode->put_URL(STRING2BSTR(newVal));

				}
				break;
			case ActiveX:
				{
					CComVariant var;
					m_pWndNode->get_XObject(&var);
					if (var.vt == VT_DISPATCH)
					{
						CComQIPtr<IWebBrowser2> pWebCtrl(var.pdispVal);
						if (pWebCtrl)
						{
							m_pWndNode->put_Attribute(CComBSTR("id"), STRING2BSTR(newVal));
						}
					}
				}
				break;
			default:
				break;
			}
		}
	}

	void WndNode::Init()
	{
		LONGLONG h = 0;
		if (m_pWndNode)
		{ 
			m_pWndNode->get_Handle(&h);
			::SendMessage((HWND)h, WM_TANGRAMMSG, 1, 0);
		}
	}

	Object^ WndNode::PlugIn::get(String^ strObjName)
	{
		Object^ pObj = nullptr;
		if(m_pWndNode)
		{
			WndNode^ pRootNode = this->RootNode;
			if (pRootNode->m_pTangramPlugInDic == nullptr)
			{
				pRootNode->m_pTangramPlugInDic = gcnew Dictionary<String^, Object^>();
			}
			if (pRootNode->m_pTangramPlugInDic->TryGetValue(strObjName, pObj) == false)
			{
				IDispatch* pDisp = nullptr;
				LRESULT hr = m_pWndNode->get_AxPlugIn(STRING2BSTR(strObjName),&pDisp);
				if(SUCCEEDED(hr)&&pDisp)
				{
					Object^ pObj = reinterpret_cast<Object^>(Marshal::GetObjectForIUnknown((System::IntPtr)(pDisp)));
					pRootNode->m_pTangramPlugInDic[strObjName] = pObj;
					return pObj;
				}

			}
		}
		return pObj;
	}

	Tangram::Tangram()
	{
		m_pHostTangram = nullptr;
		m_pTangramAppProxy = nullptr;
	}

	Tangram::Tangram(ITangram* pTangram)
	{
		m_pHostTangram = pTangram;
	}

	Tangram::~Tangram(void)
	{
		for each (KeyValuePair<String^, Object^>^ dic in TangramCLR::Tangram::m_pTangramCLRObjDic)
		{
			if (dic->Value != nullptr)
			{
				Object^ cmd = dic->Value;
				if (dic->Key != L"HttpApplication")
					delete cmd;
			}
		}
	}

	Tangram^ Tangram::InitCloudApp(bool bSupportCrashReporting)
	{
		if (m_pManager == nullptr)
			m_pManager = gcnew Tangram();
		theApp.InitCloudApp(bSupportCrashReporting);
		return m_pManager;
	}

	String^ Tangram::ComputeHash(String^ source)
	{
		BSTR bstrSRC = STRING2BSTR(source);
		LPCWSTR srcInfo = OLE2T(bstrSRC);
		std::string strSrc = (LPCSTR)CW2A(srcInfo, CP_UTF8);
		int nSrcLen = strSrc.length();
		CString strRet = _T("");
		theApp.CalculateByteMD5((BYTE*)strSrc.c_str(), nSrcLen, strRet);
		::SysFreeString(bstrSRC);
		return BSTR2STRING(strRet);
	}

	bool Tangram::CloudAppSupport::get()
	{
		if (::PathFileExists(_T("tangramchromecore.dll")))
			return true;
		return false;
	}

	Tangram^ Tangram::TangramCore::get()
	{
		return GetTangram();
	}

	Object^ Tangram::Application::get()
	{
		Object^ pRetObject = nullptr;
		if (theApp.m_pTangram)
		{
			try
			{
				IDispatch* pApp = nullptr;
				theApp.m_pTangram->get_Application(&pApp);

				if (pApp)
				{
					pRetObject = Marshal::GetObjectForIUnknown((System::IntPtr)pApp);
				}
			}
			catch (InvalidOleVariantTypeException^e)
			{
				Debug::Write(e->Message+L"\n");
			}
			catch (NotSupportedException^ e)
			{
				Debug::Write(e->Message+L"\n");
			}
		}
		return pRetObject;
	}

	void Tangram::Application::set(Object^ obj)
	{
		if (theApp.m_pTangram)
		{
			try
			{
				IntPtr nDisp = Marshal::GetIDispatchForObject(obj);
				theApp.m_pTangram->put_Application((IDispatch*)nDisp.ToPointer());
			}
			catch (ArgumentException^ e)
			{
				Debug::Write(e->Message+L"\n");
			}
		}
	}

	String^ Tangram::CurrentDesigningTangramXml::get()
	{
		IWndNode* pDesignerNode = nullptr;
		theApp.m_pTangram->get_DesignNode(&pDesignerNode);
		if (pDesignerNode == NULL)
			return L"";
		if (pDesignerNode)
		{
			CComBSTR bstrXml(L"");
			pDesignerNode->get_DocXml(&bstrXml);
			return BSTR2STRING(bstrXml);
		}
		return nullptr;
	}

	WndNode^ Tangram::CreatingNode::get()
	{
		Object^ pRetObject = nullptr;
		if (theApp.m_pTangram)
		{
			IWndNode* pNode = nullptr;
			theApp.m_pTangram->get_CreatingNode(&pNode);
			if (pNode)
				return theAppProxy._createObject<IWndNode, WndNode>(pNode);
		}
		return nullptr;
	}

	WndFrame^ Tangram::ActiveEclipseTopFrame::get()
	{
		Object^ pRetObject = nullptr;
		if (theApp.m_pTangram)
		{
			IWorkBenchWindow* pTopWnd = nullptr;
			ITangramExtender* pExtender = nullptr;
			theApp.m_pTangram->get_Extender(&pExtender);
			if (pExtender)
			{
				CComQIPtr<IEclipseExtender> pEclipse(pExtender);
				if(pEclipse)
					pEclipse->get_ActiveWorkBenchWindow(CComBSTR(L""),&pTopWnd);
				if (pTopWnd)
				{
					IWndFrame* pFrame = nullptr;
					pTopWnd->get_WndFrame(&pFrame);
					if(pFrame)
						return theAppProxy._createObject<IWndFrame, WndFrame>(pFrame);
				}
			}
		}
		return nullptr;
	}

	Tangram^ Tangram::RemoteTangram::get(String^ strID)
	{
		if (theApp.m_pTangram)
		{
			ITangram* pTangram = nullptr;
			BSTR bstrID = STRING2BSTR(strID);
			theApp.m_pTangram->get_RemoteTangram(bstrID, &pTangram);
			if (pTangram)
			{
				Tangram^ _pTangram = theAppProxy._createObject<ITangram, Tangram>(pTangram);
				return _pTangram;
			}
		}
		return nullptr;
	}

	TangramAppProxy^ Tangram::AppProxy::get(String^ strKey)
	{
		String^ _strKey = strKey->ToLower()->Trim();
		TangramAppProxy^ _pProxy = nullptr;
		if (m_pTangramAppProxyDic->TryGetValue(_strKey, _pProxy) != true)
		{
			CComBSTR bstrKey(STRING2BSTR(_strKey));
			LONGLONG llProxy = 0;
			theApp.m_pTangram->LoadDocComponent(bstrKey, &llProxy);
			if (llProxy)
			{
				CTangramAppProxy* pProxy = (CTangramAppProxy*)llProxy;
				_pProxy = gcnew TangramAppProxy();
				_pProxy->m_pTangramAppProxy = pProxy;
				m_pTangramAppProxyDic[_strKey] = _pProxy;
			}
		}
		
		return _pProxy;
	}

	WorkBenchWindow^ Tangram::ActiveWorkBenchWindow::get()
	{
		Object^ pRetObject = nullptr;
		if (theApp.m_pTangram)
		{
			IWorkBenchWindow* pTopWnd = nullptr;
			ITangramExtender* pExtender = nullptr;
			theApp.m_pTangram->get_Extender(&pExtender);
			if (pExtender)
			{
				CComQIPtr<IEclipseExtender> pEclipse(pExtender);
				if(pEclipse)
					pEclipse->get_ActiveWorkBenchWindow(CComBSTR(L""),&pTopWnd);
				if (pTopWnd)
				{
					return theAppProxy._createObject<IWorkBenchWindow, WorkBenchWindow>(pTopWnd);
				}
			}
		}
		return nullptr;
	}

	String^ Tangram::AppKeyValue::get(String^ iIndex)
	{
		CComVariant bstrVal(::SysAllocString(L""));
		theApp.m_pTangram->get_AppKeyValue(STRING2BSTR(iIndex), &bstrVal);
		String^ strVal = BSTR2STRING(bstrVal.bstrVal);
		//::SysFreeString(bstrVal);
		return strVal;
	}

	void Tangram::AppKeyValue::set(String^ iIndex, String^ newVal)
	{
		theApp.m_pTangram->put_AppKeyValue(STRING2BSTR(iIndex), CComVariant(STRING2BSTR(newVal)));
	}

	void Tangram::Fire_OnCloudAppIdle()
	{
		OnCloudAppIdle();
	}

	//void Tangram::Fire_OnCloudAppInit()
	//{
	//	OnCloudAppInit();
	//}

	//IntPtr Tangram::Fire_OnInitTangramApp()
	//{
	//	return OnInitTangramApp();
	//}

	String^ Tangram::Fire_OnGetTangramNtpXml(String^ strKey)
	{
		return OnGetTangramNtpXml(strKey);
	}

	void Tangram::Fire_OnClose()
	{
		OnClose();
	}

	Control^ Tangram::GetMDIClient(Form^ pForm)
	{	
		if (pForm&&pForm->IsMdiContainer)
		{
			String^ strTag = L"";
			Object^ tag = pForm->Tag;
			if (tag != nullptr)
				strTag = tag->ToString();
			CString _strTag = _T("");
			if(String::IsNullOrEmpty(strTag)==false)
				_strTag = STRING2BSTR(strTag);
			if (_strTag == _T(""))
				_strTag = _T("default");
			int nCount = pForm->Controls->Count;
			String^ strName = L"";
			for (int i = nCount - 1; i >= 0; i--)
			{
				Control^ pCtrl = pForm->Controls[i];
				strName = pCtrl->GetType()->Name->ToLower();
				if (strName == L"mdiclient")
				{
					return pCtrl;
				}
			}
		}
		return nullptr;
	}

	WndNode^ Tangram::ExtendMDIClient(Form^ pForm, String^ strKey, String^ strXml)
	{
		Control^ mdiclient = Tangram::GetMDIClient(pForm);
		if (mdiclient)
		{
			WndPage^ page = Tangram::CreateWndPage(pForm, nullptr);
			WndFrame^ frame = page->CreateFrame(mdiclient, L"default");
			if (frame)
			{
				if (strKey == L"newdoc")
				{
					return frame->Extend(strKey, BSTR2STRING(theAppProxy.m_pProxy->m_strNewDocXml));
				}
				return frame->Extend(strKey, strXml);
			}
		}
		return nullptr;
	}

	ChromeWebBrowser^ Tangram::ActiveBrowser()
	{
		IChromeWebBrowser* pChromeWebBrowser = nullptr;
		theApp.m_pTangram->get_ActiveChromeBrowserWnd(&pChromeWebBrowser);
		if (pChromeWebBrowser)
		{
			auto it = theAppProxy.m_mapChromeWebBrowser.find(pChromeWebBrowser);
			if (it != theAppProxy.m_mapChromeWebBrowser.end())
				return it->second;
			else
			{
				ChromeWebBrowser^ pBrowser = gcnew ChromeWebBrowser(pChromeWebBrowser);
				theAppProxy.m_mapChromeWebBrowser[pChromeWebBrowser] = pBrowser;
				return pBrowser;
			}
		}
		return nullptr;
	}

	List<String^>^ Tangram::FindFiles(String^ rootPath, String^ fileSpec, bool recursive)
	{
		List<String^>^ pFiles = gcnew List<String^>();
		BSTR bstrRootPath = STRING2BSTR(rootPath);
		BSTR bstrFileSpec = STRING2BSTR(fileSpec);
		CString strRootPath = OLE2T(bstrRootPath);
		CString strFileSpec = OLE2T(bstrFileSpec);
		wchar_t strSearch[MAX_PATH] = L"";
		::PathCombineW(strSearch, (LPCTSTR)strRootPath, (LPCTSTR)strFileSpec);
		_wfinddata_t fd;
		intptr_t pf = _wfindfirst(strSearch, &fd);
		if (pf != -1)
		{
			do
			{
				CString strFileName = fd.name;
				if (strFileName != _T(".."))
				{
					if (fd.attrib ^ FILE_ATTRIBUTE_DIRECTORY)
					{
						CString strFullName = rootPath + L"\\" + strFileName;
						String^ fullName = BSTR2STRING(CComBSTR(strFullName));
						pFiles->Add(fullName);
					}
				}
			} while (!_wfindnext(pf, &fd));
		}
		return pFiles;
	}

	Dictionary<String^, Type^>^ Tangram::GetFormTypesFromDirectory(String^ directoryPath)
	{
		Dictionary<String^, Type^>^ pFormTypes = gcnew Dictionary<String^, Type^>();
		List<String^>^ pFiles = FindFiles(directoryPath, "*.dll", false);
		for each (String^ file in pFiles)
		{
			Dictionary<String^, Type^>^ _pFormTypes = GetFormTypesFromAssembly(file);
			for each (KeyValuePair<String^, Type^>^ formType in _pFormTypes)
			{
				pFormTypes[formType->Key] = formType->Value;
			}
		}
		return pFormTypes;
	}

	Dictionary<String^, Type^>^ Tangram::GetFormTypesFromAssembly(String^ assemblyFilePath)
	{
		Dictionary<String^, Type^>^ pFormTypes = gcnew Dictionary<String^, Type^>();
		BSTR bstrFile = STRING2BSTR(assemblyFilePath);
		CString strFile = OLE2T(bstrFile);
		CString strXMLFile = strFile + L".xml";
		CMarkup xml;
		if (xml.Load(strXMLFile) && xml.FindElem())
		{
			CString tagName = xml.GetTagName();
			if (tagName.CompareNoCase(L"FORMS") == 0)
			{
				Assembly^ pAssembly = nullptr;
				try
				{
					pAssembly = Assembly::LoadFile(assemblyFilePath);
					if (pAssembly != nullptr)
					{
						while (xml.FindChildElem())
						{
							CString tagName = xml.GetChildTagName();
							if (tagName.CompareNoCase(L"FORM") == 0)
							{
								CString strType = xml.GetChildAttrib(L"type");
								BSTR bstrType = strType.AllocSysString();
								String^ type = BSTR2STRING(bstrType);
								Type^ pType = pAssembly->GetType(type);
								SysFreeString(bstrType);
								if (pType != nullptr)
								{
									pFormTypes[pType->FullName] = pType;
								}
							}
						}
					}
				}
				catch (Exception^ e)
				{
					Debug::WriteLine(L"GetFormTypesFromAssembly: {0}", e->Message);
				}
			}
		}
		else
		{
			CMarkup xml;
			xml.AddElem(L"forms");
			xml.IntoElem();
			BSTR bstrAssemblyFilePath = STRING2BSTR(assemblyFilePath);
			CString filePath = OLE2T(bstrAssemblyFilePath);
			Assembly^ pAssembly = nullptr;
			try
			{
				pAssembly = Assembly::LoadFile(assemblyFilePath);
			}
			catch (Exception^ e)
			{
				Debug::WriteLine(L"GetFormTypesFromAssembly: {0}", e->Message);
			}
			if (pAssembly != nullptr)
			{
				cli::array<Type^>^ pTypes = pAssembly->GetExportedTypes();
				for each (Type^ type in pTypes)
				{
					if (type->IsSubclassOf(Form::typeid))
					{
						Form^ pTempInstance = nullptr;
						try
						{
							pTempInstance = (Form^)Activator::CreateInstance(type);
						}
						finally
						{
							if (pTempInstance)
							{
								if (pTempInstance->FormBorderStyle == FormBorderStyle::FixedToolWindow ||
									pTempInstance->FormBorderStyle == FormBorderStyle::None ||
									pTempInstance->FormBorderStyle == FormBorderStyle::SizableToolWindow)
								{
									// Nothing to do.
								}
								else
								{
									pFormTypes[type->FullName] = type;
									BSTR bstrFormType = STRING2BSTR(type->FullName);
									CString strFormType = OLE2T(bstrFormType);
									xml.AddElem(L"form");
									xml.SetAttrib(L"type", strFormType);
								}
								pTempInstance->Close();
							}
						}
					}
				}
			}
			xml.OutOfElem();
			xml.Save(strXMLFile);
		}
		return pFormTypes;
	}

	Dictionary<String^, Type^>^ Tangram::InitAppFormTypeDic()
	{
		if (m_pAppFormTypeDic == nullptr)
		{
			m_pAppFormTypeDic = gcnew Dictionary<String^, Type^>();
			CString filePath = System::Windows::Forms::Application::ExecutablePath->ToLower();
			int nPos = filePath.ReverseFind('.');
			CString strLib = filePath.Left(nPos).MakeLower();
			CString strAssemblys = _T("");
			String^ _strLib = BSTR2STRING(filePath);
			String^ strAssemblyLib = L"";
			strLib = filePath.MakeLower();
			Assembly^ m_pDotNetAssembly = nullptr;
			try
			{
				m_pDotNetAssembly = Assembly::LoadFile(System::Windows::Forms::Application::ExecutablePath->ToLower());
				if (m_pDotNetAssembly == nullptr)
					return nullptr;
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
					cli::array<Type^>^ pArray = m_pDotNetAssembly->GetExportedTypes();
					for each (Type^ type in pArray)
					{
						if (type->IsSubclassOf(Form::typeid))
						{
							Form^ m_pObj = nullptr;
							try
							{
								m_pObj = (Form^)Activator::CreateInstance(type);
								HICON hIcon = (HICON)m_pObj->Icon->Handle.ToPointer();
								if (hIcon)
								{
									int nPos = filePath.ReverseFind('.');
									CString strLib = filePath.Left(nPos).MakeLower();
									CString strPath2 = strLib;
									nPos = strPath2.ReverseFind('\\');
									CString strPath = strPath2.Left(nPos + 1);
									CString strNmae = strPath2.Mid(nPos + 1);
									strPath2 = strPath;
									strPath2 += STRING2BSTR(type->FullName);
									strPath2 += _T(" ");
									strPath2 += strNmae;
									strPath2 += _T(".ico");
									//Write Icon to File Stream
									System::IO::FileStream^ fs = gcnew System::IO::FileStream(BSTR2STRING(strPath2), System::IO::FileMode::OpenOrCreate);
									m_pObj->Icon->Save(fs);
									fs->Close();
									//System::IO::Stream^ p = nullptr;
									//m_pObj->Icon->Save(p);
									//if (p)
									//{
									//	p->Close();
									//}
									//CString strPath = strLib;
									//strPath += STRING2BSTR(type->FullName);
									//strPath += _T(".ico");
									//theAppProxy.SaveIcon(hIcon, strPath);
								}
							}
							catch (Exception^ e)
							{

							}
							finally
							{
								if (m_pObj&&m_pObj->IsMdiContainer)
								{
									if (m_pAppMDIFormTypeDic == nullptr)
									{
										m_pAppMDIFormTypeDic = gcnew Dictionary<String^, Type^>();
									}
									m_pAppMDIFormTypeDic[type->FullName] = type;
								}
								else
								{
									if (m_pObj&&(m_pObj->FormBorderStyle == FormBorderStyle::FixedToolWindow || m_pObj->FormBorderStyle == FormBorderStyle::None || m_pObj->FormBorderStyle == FormBorderStyle::SizableToolWindow))
									{
									}
									else
										m_pAppFormTypeDic[type->FullName] = type;
								}
								if(m_pObj)
									m_pObj->Close();
							}
						}
					}
				}
			}
			if (m_pDotNetAssembly == nullptr)
			{
				return nullptr;
			}
		}
		return m_pAppFormTypeDic;
	}

	void Tangram::SetControlRelation(Control^ ctrl, String^ strTypes)
	{
		if(m_pControlRelationDic==nullptr)
			m_pControlRelationDic = gcnew Dictionary<Control^, String^>();

		String^ strIDs = nullptr;
		if (m_pControlRelationDic->TryGetValue(ctrl, strIDs) == false)
		{
			m_pControlRelationDic[ctrl] = strTypes;
		}
		else
		{
			CString str1 = strIDs;
			str1 += _T(";");
			str1 += STRING2BSTR(strTypes);
			str1 += _T(";");
			str1 += _T(";") + str1;
			str1.Replace(_T(";;"), _T(";"));
		}
	}

	Object^ Tangram::ActiveMethod(String^ strObjID, String^ strMethod, cli::array<Object^, 1>^ p)
	{
		Object^ pRetObj = nullptr;
		Tangram^ pApp = Tangram::GetTangram();
		String^ strIndex = strObjID + L"|" + strMethod;
		MethodInfo^ mi = nullptr;
		Object^ pObj = nullptr;
		if (pApp->m_pTangramCLRMethodDic->TryGetValue(strIndex, mi) == true)
		{
			try
			{
				pRetObj = mi->Invoke(pObj, p);
			}
			finally
			{
			}
			return pRetObj;
		}

		if (pApp->m_pTangramCLRObjDic->TryGetValue(strObjID, pObj) == false)
		{
			pObj = CreateObject(strObjID);
			pApp->m_pTangramCLRObjDic[strObjID] = pObj;
		}
		if (pObj != nullptr)
		{
			MethodInfo^ mi = nullptr;
			try
			{
				mi = pObj->GetType()->GetMethod(strMethod);
				pApp->m_pTangramCLRMethodDic[strIndex] = mi;
			}
			catch (AmbiguousMatchException^ e)
			{
				Debug::WriteLine(L"Tangram::ActiveMethod GetMethod: " + e->Message);
			}
			catch (ArgumentNullException^ e)
			{
				Debug::WriteLine(L"Tangram::ActiveMethod GetMethod: " + e->Message);
			}
			finally
			{
				if (mi != nullptr)
				{
					try
					{
						pRetObj = mi->Invoke(pObj, p);
					}
					finally
					{
					}
				}
			}
		}

		return pRetObj;
	}
			
	WorkBenchWindow^ Tangram::RemoteActiveWorkBenchWindow(String^ appID)
	{
		BSTR _strID = STRING2BSTR(appID);
		ITangram* pTangram = nullptr;
		theApp.m_pTangram->get_RemoteTangram(_strID, &pTangram);
		::SysFreeString(_strID);
		if (pTangram)
		{
			IWorkBenchWindow* pTopWnd = nullptr;
			ITangramExtender* pExtender = nullptr;
			pTangram->get_Extender(&pExtender);
			if (pExtender)
			{
				CComQIPtr<IEclipseExtender> pEclipse(pExtender);
				if(pEclipse)
					pEclipse->get_ActiveWorkBenchWindow(_strID, &pTopWnd);
				if (pTopWnd)
				{
					return theAppProxy._createObject<IWorkBenchWindow, WorkBenchWindow>(pTopWnd);
				}
			}
		}
		return nullptr;
	}
			
	void Tangram::StartApplication(String^ appID,String^ strXml)
	{
		BSTR _strID = STRING2BSTR(appID);
		BSTR _strXml = STRING2BSTR(strXml);

		theApp.m_pTangram->StartApplication(_strID, _strXml);
		::SysFreeString(_strID);
		::SysFreeString(_strXml);
	}

	Object^ Tangram::ActiveObjectMethod(Object^ pObj, String^ strMethod, cli::array<Object^, 1>^ p)
	{
		Object^ pRetObj = nullptr;

		if (pObj != nullptr)
		{
			MethodInfo^ mi = nullptr;
			try
			{
				mi = pObj->GetType()->GetMethod(strMethod, gcnew cli::array<Type^, 1>(0));
			}
			catch (AmbiguousMatchException^ e)
			{
				Debug::WriteLine(L"Tangram::ActiveMethod GetMethod: " + e->Message);
			}
			catch (ArgumentNullException^ e)
			{
				Debug::WriteLine(L"Tangram::ActiveMethod GetMethod: " + e->Message);
			}
			finally
			{
				if (mi != nullptr)
				{
					try
					{
						pRetObj = mi->Invoke(pObj, p);
					}
					finally
					{
					}
				}
			}
		}

		return pRetObj;
	}

	WndPage^ Tangram::CreateWndPage(Control^ ctrl, Object^ ExternalObj)
	{
		if (ctrl != nullptr)
		{
			LONGLONG hWnd = ctrl->Handle.ToInt64();
			IWndPage* pPage = nullptr;
			theApp.m_pTangram->CreateWndPage(hWnd, &pPage);
			if (pPage)
			{
				WndPage^ _pWndPage =  theAppProxy._createObject<IWndPage, WndPage>(pPage);
				if (_pWndPage != nullptr&&ExternalObj != nullptr)
				{
					_pWndPage->External = ExternalObj; 
				}
				return _pWndPage;
			}
		}
		return nullptr;
	}

	Type^ Tangram::GetType(String^ strObjID)
	{
		if (String::IsNullOrEmpty(strObjID) == true)
			return nullptr;

		String^ m_strID = strObjID->ToLower()->Replace(L" ", L"");
		String^ strLib = nullptr;
		if (m_strID != L"")
		{
			Type^ pType = nullptr;
			Tangram^ pApp = Tangram::GetTangram();
			Monitor::Enter(pApp->m_pTangramCLRTypeDic);
			String^ strID = nullptr;
			if (pApp->m_pTangramCLRTypeDic->TryGetValue(m_strID, pType) == false)
			{
				BSTR bstrID = STRING2BSTR(m_strID);
				CString _strID = OLE2T(bstrID);
				::SysFreeString(bstrID);
				_strID = theApp.GetLibPathFromAssemblyQualifiedName(_strID);
				if (_strID != _T(""))
				{
					int nPos = _strID.Find(_T("|"));
					CString strObjName = _strID.Left(nPos);
					_strID = _strID.Mid(nPos + 1);
					nPos = _strID.Find(_T("|"));
					strID = BSTR2STRING(_strID);
					CString strLibName = _strID.Left(nPos);
					strLib = BSTR2STRING(_strID.Mid(nPos + 1));
					Assembly^ m_pDotNetAssembly = nullptr;
					bool bSystemObj = false;
					int nIndex = m_strID->IndexOf(L"system.windows.forms");;
					if (nIndex != -1)
					{
						bSystemObj = true;
						Control^ pObj = gcnew Control();
						m_pDotNetAssembly = pObj->GetType()->Assembly;
					}
					else
					{
						try
						{
							if (strLibName.CompareNoCase(_T("tangramclr")) == 0)
								m_pDotNetAssembly = pApp->GetType()->Assembly;
							else
							{
								auto it = theAppProxy.m_mapAssembly.find(strLib);
								if (it != theAppProxy.m_mapAssembly.end())
									m_pDotNetAssembly = it->second;
								else
								{
									m_pDotNetAssembly = Assembly::LoadFile(strLib);
									theAppProxy.m_mapAssembly[strLib] = m_pDotNetAssembly;
								}
							}
						}
						catch (ArgumentNullException^ e)
						{
							Debug::WriteLine(L"Tangram CreateObject: " + e->Message);
						}
						catch (ArgumentException^ e)
						{
							Debug::WriteLine(L"Tangram CreateObject: " + e->Message);
						}
						catch (FileNotFoundException^ e)
						{
							Debug::WriteLine(L"Tangram CreateObject: " + e->Message);
						}
						catch (FileLoadException^ e)
						{
							Debug::WriteLine(L"Tangram CreateObject: " + e->Message);
						}
						catch (BadImageFormatException^ e)
						{
							Debug::WriteLine(L"Tangram CreateObject: " + e->Message);
						}
					}
					if (m_pDotNetAssembly != nullptr)
					{
						try
						{
							pType = m_pDotNetAssembly->GetType(BSTR2STRING(strObjName), true, true);
						}
						catch (TypeLoadException^ e)
						{
							Debug::WriteLine(L"Tangram CreateObject Assembly->GetType: " + e->Message);
						}
						catch (ArgumentNullException^ e)
						{
							Debug::WriteLine(L"Tangram CreateObject Assembly->GetType: " + e->Message);
						}
						catch (ArgumentException^ e)
						{
							Debug::WriteLine(L"Tangram CreateObject Assembly->GetType: " + e->Message);
						}
						catch (FileNotFoundException^ e)
						{
							Debug::WriteLine(L"Tangram CreateObject Assembly->GetType: " + e->Message);
						}
						catch (FileLoadException^ e)
						{
							Debug::WriteLine(L"Tangram CreateObject Assembly->GetType: " + e->Message);
						}
						catch (BadImageFormatException^ e)
						{
							Debug::WriteLine(L"Tangram CreateObject Assembly->GetType: " + e->Message);
						}
						finally
						{
							if (pType != nullptr)
							{
								pApp->m_pTangramCLRTypeDic->Add(m_strID, pType);
							}
						}
					}
				}
			}
			Monitor::Exit(pApp->m_pTangramCLRTypeDic);
			if (pType)
			{
				return pType;
			}
		}
		return nullptr;
	}

	ChromeWebBrowser^ Tangram::CreateBrowser(IntPtr ParentHandle, String^ strUrls)
	{
		HWND hPWnd = (HWND)ParentHandle.ToPointer();
		if (theApp.m_pTangramProxyBase->m_pCreatorImpl)
		{
			HWND hWnd = theApp.m_pTangramProxyBase->m_pCreatorImpl->CreateBrowser(hPWnd, strUrls);
			IChromeWebBrowser* pBrowser = (IChromeWebBrowser*)::SendMessage(hWnd, WM_TANGRAMMSG, 20190527, 0);
			auto it = theAppProxy.m_mapChromeWebBrowser.find(pBrowser);
			if (it != theAppProxy.m_mapChromeWebBrowser.end())
				return it->second;
			else
				return gcnew ChromeWebBrowser(pBrowser);
		}
		return nullptr;
	}

	Object^ Tangram::CreateObject(String^ strObjID)
	{
		Object^ m_pObj = nullptr;
		Type^ pType = GetType(strObjID);
		if (pType)
		{
			try
			{
				m_pObj = (Object^)Activator::CreateInstance(pType);
			}
			catch (TypeLoadException^ e)
			{
				Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
			}
			catch (ArgumentNullException^ e)
			{
				Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
			}
			catch (ArgumentException^ e)
			{
				Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
			}
			catch (NotSupportedException^ e)
			{
				Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
			}
			catch (TargetInvocationException^ e)
			{
				Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
			}
			catch (MethodAccessException^ e)
			{
				Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
			}
			catch (InvalidComObjectException^ e)
			{
				Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
			}
			catch (MissingMethodException^ e)
			{
				Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
			}
			catch (COMException^ e)
			{
				Debug::WriteLine(L"Tangram CreateObject Activator::CreateInstance: " + e->Message);
			}
		}
		
		return m_pObj;
	}

	WndNode^ WndNode::Extend(String^ layerName, String^ layerXML)
	{
		if (m_pWndNode)
		{
			BSTR blayerName = STRING2BSTR(layerName);
			BSTR blayerXML = STRING2BSTR(layerXML);
			IWndNode* pNode = nullptr;
			m_pWndNode->Extend(blayerName, blayerXML, &pNode);
			::SysFreeString(blayerName);
			::SysFreeString(blayerXML);
			if (pNode)
			{
				return theAppProxy._createObject<IWndNode, WndNode>(pNode);
			}
		}
		return nullptr;
	}

	WndNode^ WndNode::ExtendChild(int rowNum, int colName, String^ layerName, String^ layerXML)
	{
		if (m_pWndNode)
		{
			BSTR blayerName = STRING2BSTR(layerName);
			BSTR blayerXML = STRING2BSTR(layerXML);
			IWndNode* pNode = nullptr;
			m_pWndNode->ExtendEx( rowNum, colName, blayerName, blayerXML, &pNode);
			::SysFreeString(blayerName);
			::SysFreeString(blayerXML);
			if (pNode)
			{
				return theAppProxy._createObject<IWndNode, WndNode>(pNode);
			}
		}
		return nullptr;
	}

	void WndNode::SendToAll(String^ arg1, String^ arg2)
	{
		IWndFrame* pFrame = nullptr;
		m_pWndNode->get_Frame(&pFrame);
		if (pFrame)
		{
			BSTR bstrArg1 = STRING2BSTR(arg1);
			BSTR bstrArg2 = STRING2BSTR(arg2);
			
			BSTR bstrFrameName;
			pFrame->get_Name(&bstrFrameName);
			BSTR bstrLayerName;
			pFrame->get_CurrentNavigateKey(&bstrLayerName);
			BSTR bstrNodeName;
			m_pWndNode->get_Name(&bstrNodeName);

			pFrame->Dispatch(bstrFrameName, bstrLayerName, bstrNodeName, CComBSTR("NODE_MESSAGE:ALL"), bstrArg1, bstrArg2);
		}
	}

	void WndNode::OpenURL(String^ strURL, Disposition nDisposition, String^ strKey, String^ strXml)
	{
		IWndFrame* pFrame = nullptr;
		m_pWndNode->get_Frame(&pFrame);
		if (pFrame)
		{
			BSTR bstrArg1 = STRING2BSTR(String::Format(L"{0}|{1}|{2}", strKey, Convert::ToString((BrowserWndOpenDisposition)nDisposition), strURL));
			BSTR bstrArg2 = STRING2BSTR(strXml);

			pFrame->SendToBackgroundWebProxy(CComBSTR("NODE_MESSAGE:OPENURL"), bstrArg1, bstrArg2);
		}
	};

	Object^ WndNode::ActiveMethod(String^ strMethod, cli::array<Object^, 1>^ p)
	{
		Object^ pRetObj = nullptr;
		if (m_pHostObj != nullptr)
		{
			MethodInfo^ mi = nullptr;
			if (m_pTangramCLRMethodDic==nullptr)
				m_pTangramCLRMethodDic = gcnew Dictionary<String^, MethodInfo^>();
			Object^ pObj = nullptr;
			if (m_pTangramCLRMethodDic->TryGetValue(strMethod, mi) == true)
			{
				try
				{
					pRetObj = mi->Invoke(m_pHostObj, p);
				}
				finally
				{
				}
				return pRetObj;
			}
			try
			{
				mi = m_pHostObj->GetType()->GetMethod(strMethod);
				m_pTangramCLRMethodDic[strMethod] = mi;
			}
			catch (AmbiguousMatchException^ e)
			{
				Debug::WriteLine(L"Tangram::ActiveMethod GetMethod: " + e->Message);
			}
			catch (ArgumentNullException^ e)
			{
				Debug::WriteLine(L"Tangram::ActiveMethod GetMethod: " + e->Message);
			}
			finally
			{
				if (mi != nullptr)
				{
					try
					{
						pRetObj = mi->Invoke(m_pHostObj, p);
					}
					finally
					{
					}
				}
			}
		}

		return pRetObj;
	}

	WndPage::WndPage(void)
	{
	}

	WndPage::WndPage(IWndPage* pPage)
	{
		m_pPage = pPage;
		LONGLONG nValue = (LONGLONG)m_pPage;
		theAppProxy._insertObject(nValue, this);
		m_pTangramClrEvent = new CWndPageClrEvent();
		m_pTangramClrEvent->DispEventAdvise(m_pPage);
		m_pTangramClrEvent->m_pPage = this;
	}

	WndPage::~WndPage()
	{
		m_pTangramClrEvent->DispEventUnadvise(m_pPage);
		LONGLONG nValue = (LONGLONG)m_pPage;
		theAppProxy._removeObject(nValue);
		delete m_pTangramClrEvent;
	}

	void WndPage::ExtendFrames(String^ strFrames, String^ strKey, String^ bstrXml, bool bSaveToConfigFile)
	{
		m_pPage->ExtendFrames(STRING2BSTR(strFrames), STRING2BSTR(strKey), STRING2BSTR(bstrXml), bSaveToConfigFile);
	}

	WndNode^ WndPage::GetWndNode(String^ strXml, String^ strFrameName)
	{
		if (String::IsNullOrEmpty(strXml) || String::IsNullOrEmpty(strFrameName))
			return nullptr;
		BSTR bstrXml = STRING2BSTR(strXml);
		BSTR bstrFrameName = STRING2BSTR(strFrameName);
		CComPtr<IWndNode> pNode;
		m_pPage->GetWndNode(bstrXml, bstrFrameName, &pNode);
		WndNode^ pRetNode = nullptr;
		if (pNode)
		{
			pRetNode = theAppProxy._createObject<IWndNode, WndNode>(pNode);
		}
		::SysFreeString(bstrXml);
		::SysFreeString(bstrFrameName);
		return pRetNode;
	}

	void WndPage::AddObjToHtml(String^ strObjName, bool bConnectEvent, Object^ pObj)
	{
		if (String::IsNullOrEmpty(strObjName) || pObj == nullptr)
			return;

		BSTR bstrName = STRING2BSTR(strObjName);
		m_pPage->AddObjToHtml(bstrName, bConnectEvent, (IDispatch*)Marshal::GetIUnknownForObject(pObj).ToPointer());
		::SysFreeString(bstrName);
	}

	String^ WndPage::GetPageXML()
	{
		BSTR bstrXML;
		m_pPage->get_PageXML(&bstrXML);
		String^ strXML = BSTR2STRING(bstrXML);
		return strXML;
	}

	void WndPage::RegisterExtendableTarget(String^ targetID, Control^ ctrl)
	{
		BSTR bstrTargetID = STRING2BSTR(targetID);
		IDispatch* pCtrl = (IDispatch*)Marshal::GetIUnknownForObject(ctrl).ToPointer();
		m_pPage->RegisterExtendableTarget(bstrTargetID, pCtrl);
	}

	void WndFrame::SendToHostNode(String^ arg1, String^ arg2)
	{
		//BSTR bstrChannel = STRING2BSTR();
		BSTR bstrArg1 = STRING2BSTR(arg1);
		BSTR bstrArg2 = STRING2BSTR(arg2);
		m_pWndFrame->SendToBackgroundWebProxy(CComBSTR("NODE_MESSAGE:HOST_NODE"), bstrArg1, bstrArg2);
	}

	WndNode^ WndFrame::Extend(String^  layerName, String^ layerXML)
	{
		WndNode^ pRetNode = nullptr;
    BSTR blayerName = STRING2BSTR(layerName);
		BSTR blayerXML = STRING2BSTR(layerXML);		
		CComPtr<IWndNode> pNode;
		m_pWndFrame->Extend(blayerName, blayerXML, &pNode);
		if (pNode)
		{
			pRetNode = theAppProxy._createObject<IWndNode, WndNode>(pNode);
			WndNode^ pRetNode2 = nullptr;
			if (!TryGetValue(layerName, pRetNode2))
			{
				Add(layerName, pRetNode);
			}
		}
		::SysFreeString(blayerName);
		::SysFreeString(blayerXML);
		return pRetNode;
	}

	Object^ WndFrame::FrameData::get(String^ iIndex)
	{
		CComVariant bstrVal(::SysAllocString(L""));
		m_pWndFrame->get_FrameData(STRING2BSTR(iIndex), &bstrVal);
		return Marshal::GetObjectForNativeVariant((IntPtr)&bstrVal);;
	}

	void WndFrame::FrameData::set(String^ iIndex, Object^ newVal)
	{
		IntPtr nPtr = (IntPtr)0;
		Marshal::GetNativeVariantForObject(newVal, nPtr);
		m_pWndFrame->put_FrameData(STRING2BSTR(iIndex), *(VARIANT*)nPtr.ToInt64());
	}
}
