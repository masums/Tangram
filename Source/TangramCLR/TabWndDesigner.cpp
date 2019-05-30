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

#include "stdafx.h"
#include "dllmain.h"
#include "TangramBase.h"
#include "CommonFunction.h"
#include "TabWndDesigner.h"
#include "TangramCategory.h"
#include "AXCtrlDesigner.h"
#include "CppDesigner.h"
#include "TangramClrProxy.h"
#include "CLRCtrlDesigner.h"
#include <io.h>
#include <stdio.h>

extern CTangramCLRProxy theAppProxy;

using namespace System::Runtime::InteropServices;

namespace TangramDesigner
{
	System::Void TabWndDesigner::TabWndDesigner_Load(System::Object^  sender, System::EventArgs^  e)
	{
		CATID m_catid = CATID_CloudUIContainerCategory;
		ULONG lFetched;
		CLSID ClsID;

		ICatInformation * pICatInformation = NULL;
		HRESULT hr = CoCreateInstance(CLSID_StdComponentCategoriesMgr,
			NULL,
			CLSCTX_INPROC_SERVER,
			IID_ICatInformation,
			(void**)&pICatInformation);
		if (SUCCEEDED(hr))
		{
			IEnumGUID * pIEnumGUID = 0;
			hr = pICatInformation->EnumClassesOfCategories(
				1,
				&m_catid,
				0,
				0,
				&pIEnumGUID);
			if (SUCCEEDED(hr))
			{
				//hr = pIEnumGUID->Reset();
				CString m_strLayouts = _T("");
				while (S_OK == pIEnumGUID->Next(1, &ClsID, &lFetched))
				{
					BSTR bstrID = ::SysAllocString(L"");
					hr = ::ProgIDFromCLSID(ClsID, &bstrID);
					if (S_OK == hr)
					{
						CString strID = OLE2T(bstrID);
						CString strID2 = _T(",");
						strID2 += strID;
						strID2 += _T(",");
						if (m_strLayouts.Find(strID2) == -1)
						{
							m_strLayouts += strID;
							m_strLayouts += _T(",");
							this->comboBoxTabs->Items->Add(BSTR2STRING(strID));
						}
					}
				}
				pIEnumGUID->Release();
			}
			pICatInformation->Release();
			comboBoxTabs->SelectedIndex = 0;
		}
	}

	System::Void TabWndDesigner::comboBoxTabs_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		String^ strTabsID = comboBoxTabs->SelectedItem->ToString();
		CString strID = strTabsID;
		
		CString strNames = _T("");
		auto it = theApp.m_mapName.find(strID);
		if (it == theApp.m_mapName.end())
		{
			if (strID.ReverseFind('.') != -1)
			{
				CComPtr<IDispatch> pDisp;
				pDisp.CoCreateInstance(CComBSTR(strID));
				if (pDisp)
				{
					CComQIPtr<ICreator> p(pDisp);
					if (p)
					{
						CComBSTR bstrNames(L"");
						p->get_Names(&bstrNames);
						strNames = OLE2T(bstrNames);
						strNames += _T(",");
						strNames.Replace(_T(",,"), _T(","));
						CString _strNames = strNames;
						int nPos = _strNames.Find(_T(","));
						CComBSTR bstrStyles(L"");
						while (nPos != -1)
						{
							CString strName = _strNames.Left(nPos);
							_strNames = _strNames.Mid(nPos + 1);
							nPos = _strNames.Find(_T(","));
							CString strKey = strID;
							strKey += _T("-");
							strKey += strName;
							{
								p->get_Tags(strName.AllocSysString(), &bstrStyles);
								CString strStyles = OLE2T(bstrStyles);
								strStyles += _T(",");
								strStyles.Replace(_T(",,"), _T(","));
								theApp.m_mapStyle[strKey] = strStyles;
							}
						}
					}
				}
			}
		}
		else
		{
			strNames = it->second;
		}
		if (strNames != _T(""))
		{
			comboBoxLayouts->Items->Clear();
			theApp.m_mapName[strID] = strNames;
			int nPos = strNames.Find(_T(","));
			while (nPos != -1)
			{
				CString strName = strNames.Left(nPos);
				strNames = strNames.Mid(nPos + 1);
				nPos = strNames.Find(_T(","));
				comboBoxLayouts->Items->Add(BSTR2STRING(strName));
			}
			comboBoxLayouts->SelectedIndex = 0;//.SetCurSel(0);
			CString strName = comboBoxLayouts->SelectedItem->ToString();
			CString strKey = strID;
			strKey += _T("-");
			strKey += strName;
			auto it = theApp.m_mapStyle.find(strKey);
			if (it != theApp.m_mapStyle.end())
			{
				comboBoxStyle->Items->Clear();
				CString strStyles = it->second;
				if (strStyles != _T(""))
				{
					int nPos = strStyles.Find(_T(","));
					while (nPos != -1)
					{
						CString strStyle = strStyles.Left(nPos);
						strStyles = strStyles.Mid(nPos + 1);
						nPos = strStyles.Find(_T(","));
						comboBoxStyle->Items->Add(BSTR2STRING(strStyle));
					}
					comboBoxStyle->SelectedIndex=0;
				}
			}
		}
		else
		{
			comboBoxLayouts->Items->Clear();
			comboBoxStyle->Items->Clear();
		}
	}

	System::Void TabWndDesigner::comboBoxLayouts_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
	}

	System::Void TabWndDesigner::btnCreate_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (comboBoxTabs->SelectedItem == nullptr || comboBoxLayouts->SelectedItem == nullptr)
			return;
		IWndNode* pDesignerNode = NULL;
		theApp.m_pTangram->get_DesignNode(&pDesignerNode);
		if (pDesignerNode == NULL)
			return;
		ViewType nType = ViewType::BlankView;
		pDesignerNode->get_NodeType(&nType);
		if (nType != ViewType::BlankView)
			return;
		IWndNode* pRootNode = NULL;
		pDesignerNode->get_RootNode(&pRootNode);
		LONGLONG hRoot = 0;
		pRootNode->get_Handle(&hRoot);
		HWND _hwnd = (HWND)hRoot;
		LONGLONG h = 0;
		HWND hWnd = NULL;
		HWND hPWnd = NULL;
		CString strID = _T("");
		CString strVal = _T("");
		int nPages = (int)PagessUpDown->Value;

		String^ strTabID = comboBoxTabs->SelectedItem->ToString();
		strID = strTabID;
		String^ _strObjID = comboBoxLayouts->SelectedItem->ToString();
		CString strObjID = _strObjID;

		String^ _strVal = L"";
		if(comboBoxStyle->SelectedItem!=nullptr)
			_strVal = comboBoxStyle->SelectedItem->ToString();
		strVal = _strVal;

		CTangramXmlParse m_Parse;
		BOOL b = m_Parse.LoadXml(_T("<splitter><window></window></splitter>"));
		if (b)
		{
			CComBSTR bstrName(L"");
			pDesignerNode->get_Name(&bstrName);
			CTangramXmlParse* pWndNode = m_Parse.GetChild(_T("window"));
			pDesignerNode->get_Handle(&h);
			RECT rc;
			::GetClientRect((HWND)h, &rc);

			CString strNewName = theAppProxy.m_pProxy->GetNewLayoutNodeName(CComBSTR(strObjID), pDesignerNode);
			CTangramXmlParse* pNewNode = pWndNode->AddTabNode(strNewName, strID, strObjID, strVal, nPages);
			CString str = m_Parse.xml();
			IWndNode* pParent = NULL;
			pDesignerNode->get_ParentNode(&pParent);

			ViewType m_type;
			if (pParent)
			{
				pParent->get_NodeType(&m_type);
				switch (m_type)
				{
				case ViewType::Splitter:
				{
					pParent->get_Handle(&h);
				}
				break;
				default:
					pDesignerNode->get_Handle(&h);
					break;
				}
			}
			else
			{
				pDesignerNode->get_Handle(&h);
			}

			hPWnd = (HWND)h;
			if (::IsWindow(hPWnd))
				::SendMessage(hPWnd, WM_TANGRAMMSG, (WPARAM)pNewNode, (LPARAM)str.GetBuffer()/*pNode*/);
		}
	}

	System::Void CppDesigner::comboBoxCpp_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (comboBoxCpp->SelectedItem == nullptr)
			return;
		String^ strTabsID = comboBoxCpp->SelectedItem->ToString();
		CString strID = strTabsID;

		CString strNames = _T("");
		auto it = theApp.m_mapName.find(strID);
		if (it == theApp.m_mapName.end())
		{
			if (strID.ReverseFind('.') != -1)
			{
				CComPtr<IDispatch> pDisp;
				pDisp.CoCreateInstance(CComBSTR(strID));
				if (pDisp)
				{
					CComQIPtr<ICreator> p(pDisp);
					if (p)
					{
						CComBSTR bstrNames(L"");
						p->get_Names(&bstrNames);
						strNames = OLE2T(bstrNames);
						strNames += _T(",");
						strNames.Replace(_T(",,"), _T(","));
						CString _strNames = strNames;
						int nPos = _strNames.Find(_T(","));
						CComBSTR bstrStyles(L"");
						while (nPos != -1)
						{
							CString strName = _strNames.Left(nPos);
							_strNames = _strNames.Mid(nPos + 1);
							nPos = _strNames.Find(_T(","));
							CString strKey = strID;
							strKey += _T("-");
							strKey += strName;
							{
								p->get_Tags(strName.AllocSysString(), &bstrStyles);
								CString strStyles = OLE2T(bstrStyles);
								strStyles += _T(",");
								strStyles.Replace(_T(",,"), _T(","));
								theApp.m_mapStyle[strKey] = strStyles;
							}
						}
					}
				}
			}
		}
		else
		{
			strNames = it->second;
		}
		if (strNames != _T(""))
		{
			comboBoxLayouts->Items->Clear();
			theApp.m_mapName[strID] = strNames;
			int nPos = strNames.Find(_T(","));
			while (nPos != -1)
			{
				CString strName = strNames.Left(nPos);
				strNames = strNames.Mid(nPos + 1);
				nPos = strNames.Find(_T(","));
				comboBoxLayouts->Items->Add(BSTR2STRING(strName));
			}
			comboBoxLayouts->SelectedIndex = 0;//.SetCurSel(0);
			CString strName = comboBoxLayouts->SelectedItem->ToString();
			CString strKey = strID;
			strKey += _T("-");
			strKey += strName;
			auto it = theApp.m_mapStyle.find(strKey);
			if (it != theApp.m_mapStyle.end())
			{
				comboBoxStyle->Items->Clear();
				CString strStyles = it->second;
				if (strStyles != _T(""))
				{
					int nPos = strStyles.Find(_T(","));
					while (nPos != -1)
					{
						CString strStyle = strStyles.Left(nPos);
						strStyles = strStyles.Mid(nPos + 1);
						nPos = strStyles.Find(_T(","));
						comboBoxStyle->Items->Add(BSTR2STRING(strStyle));
					}
					comboBoxStyle->SelectedIndex = 0;
				}
			}
		}
		else
		{
			comboBoxLayouts->Items->Clear();
			comboBoxStyle->Items->Clear();
		}
	}
	//System::Void CppDesigner::comboBoxCpp_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	//{
	//	String^ strTabsID = comboBoxCpp->SelectedItem->ToString();
	//	CString strID = strTabsID;

	//	CString strNames = _T("");
	//	map<CString, CString>::iterator it = theApp.m_mapName.find(strID);
	//	if (it == theApp.m_mapName.end())
	//	{
	//		if (strID.ReverseFind('.') != -1)
	//		{
	//			CComPtr<IDispatch> pDisp;
	//			pDisp.CoCreateInstance(CComBSTR(strID));
	//			if (pDisp)
	//			{
	//				CComQIPtr<ICreator> p(pDisp);
	//				if (p)
	//				{
	//					CComBSTR bstrNames(L"");
	//					p->get_Names(&bstrNames);
	//					strNames = OLE2T(bstrNames);
	//					strNames += _T(",");
	//					strNames.Replace(_T(",,"), _T(","));
	//					CString _strNames = strNames;
	//					int nPos = _strNames.Find(_T(","));
	//					CComBSTR bstrStyles(L"");
	//					while (nPos != -1)
	//					{
	//						CString strName = _strNames.Left(nPos);
	//						_strNames = _strNames.Mid(nPos + 1);
	//						nPos = _strNames.Find(_T(","));
	//						CString strKey = strID;
	//						strKey += _T("-");
	//						strKey += strName;
	//						{
	//							p->get_Tags(strName.AllocSysString(), &bstrStyles);
	//							CString strStyles = OLE2T(bstrStyles);
	//							strStyles += _T(",");
	//							strStyles.Replace(_T(",,"), _T(","));
	//							theApp.m_mapStyle[strKey] = strStyles;
	//						}
	//					}
	//				}
	//			}
	//		}
	//	}
	//	else
	//	{
	//		strNames = it->second;
	//	}
	//	if (strNames != _T(""))
	//	{
	//		comboBoxLayouts->Items->Clear();
	//		theApp.m_mapName[strID] = strNames;
	//		int nPos = strNames.Find(_T(","));
	//		while (nPos != -1)
	//		{
	//			CString strName = strNames.Left(nPos);
	//			strNames = strNames.Mid(nPos + 1);
	//			nPos = strNames.Find(_T(","));
	//			comboBoxLayouts->Items->Add(BSTR2STRING(strName));
	//		}
	//		comboBoxLayouts->SelectedIndex = 0;
	//	}
	//	else
	//	{
	//		comboBoxLayouts->Items->Clear();
	//	}
	//}

	System::Void CppDesigner::CppDesigner_Load(System::Object^  sender, System::EventArgs^  e)
	{
		CATID m_catid = CATID_CloudUIComponentCategory;
		ULONG lFetched;
		CLSID ClsID;
		if (theApp.m_pTangram)
		{
			CComVariant var;
			theApp.m_pTangram->get_AppKeyValue(CComBSTR(L"registwndclassstr"), &var);
			CString strRet = OLE2T(var.bstrVal);
			if (strRet != _T(""))
			{
				this->comboBoxCpp->Items->Add(L"RegistedWnd");
				theApp.m_mapName[_T("RegistedWnd")] = strRet;
				comboBoxCpp->SelectedIndex = 0;
			}
		}
		ICatInformation * pICatInformation = NULL;
		HRESULT hr = CoCreateInstance(CLSID_StdComponentCategoriesMgr,
			NULL,
			CLSCTX_INPROC_SERVER,
			IID_ICatInformation,
			(void**)&pICatInformation);
		if (SUCCEEDED(hr))
		{
			IEnumGUID * pIEnumGUID = 0;
			hr = pICatInformation->EnumClassesOfCategories(
				1,
				&m_catid,
				0,
				0,
				&pIEnumGUID);
			if (SUCCEEDED(hr))
			{
				//pIEnumGUID->Reset();
				CString m_strLayouts = _T("");
				while (S_OK == pIEnumGUID->Next(1, &ClsID, &lFetched))
				{
					BSTR bstrID = ::SysAllocString(L"");
					hr = ::ProgIDFromCLSID(ClsID, &bstrID);
					if (S_OK == hr)
					{
						CString strID = OLE2T(bstrID);
						if (theApp.m_strComponents.Find(strID) == -1)
						{
							theApp.m_strComponents += strID;
							theApp.m_strComponents += _T(",");
							this->comboBoxCpp->Items->Add(BSTR2STRING(strID));
						}
					}
				}
				pIEnumGUID->Release();
			}
			pICatInformation->Release();
			//comboBoxCpp->SelectedIndex = -1;
		}
	}

	System::Void CppDesigner::btnCreate_Click(System::Object^  sender, System::EventArgs^  e)
	{
		IWndNode* pDesignerNode = NULL;
		theApp.m_pTangram->get_DesignNode(&pDesignerNode);
		if (pDesignerNode == NULL)
			return;
		ViewType nType = ViewType::BlankView;
		pDesignerNode->get_NodeType(&nType);
		if (nType != ViewType::BlankView)
			return;
		IWndNode* pRootNode = NULL;
		pDesignerNode->get_RootNode(&pRootNode);
		LONGLONG hRoot = 0;
		pRootNode->get_Handle(&hRoot);
		HWND _hwnd = (HWND)hRoot;
		LONGLONG h = 0;
		HWND hWnd = NULL;
		HWND hPWnd = NULL;
		CString strID = _T("");
		CString strVal = _T("");
		int nPages = 0;

		String^ strTabID = comboBoxCpp->SelectedItem->ToString();
		strID = strTabID;
		String^ _strObjID = comboBoxLayouts->SelectedItem->ToString();
		CString strObjID = _strObjID;
		String^ _strVal = L"";
		if(comboBoxStyle->SelectedItem!=nullptr)
			_strVal = comboBoxStyle->SelectedItem->ToString();
		strVal = _strVal;
		if (strVal == _T(""))
			strVal = _T("appwnd");
		if (strObjID.Find(_T(".appwnd.")) != -1)
		{
			int nPos = strObjID.ReverseFind('.');
			strID = strObjID;
		}
		CTangramXmlParse m_Parse;
		BOOL b = m_Parse.LoadXml(_T("<splitter><window></window></splitter>"));
		if (b)
		{
			CComBSTR bstrName(L"");
			pDesignerNode->get_Name(&bstrName);
			CTangramXmlParse* pWndNode = m_Parse.GetChild(_T("window"));
			pDesignerNode->get_Handle(&h);
			RECT rc;
			::GetClientRect((HWND)h, &rc);

			CString strNewName = theAppProxy.m_pProxy->GetNewLayoutNodeName(CComBSTR(strObjID), pDesignerNode);
			CTangramXmlParse* pNewNode = pWndNode->AddTabNode(strNewName, strID, strObjID, strVal, nPages);
			CString str = m_Parse.xml();
			IWndNode* pParent = NULL;
			pDesignerNode->get_ParentNode(&pParent);

			ViewType m_type;
			if (pParent)
			{
				pParent->get_NodeType(&m_type);
				switch (m_type)
				{
				case ViewType::Splitter:
				{
					pParent->get_Handle(&h);
				}
				break;
				default:
					pDesignerNode->get_Handle(&h);
					break;
				}
			}
			else
			{
				pDesignerNode->get_Handle(&h);
			}

			hPWnd = (HWND)h;
			if(::IsWindow(hPWnd))
				::SendMessage(hPWnd, WM_TANGRAMMSG, (WPARAM)pNewNode, (LPARAM)str.GetBuffer()/*pNode*/);
		}
	}

	System::Void CLRCtrlDesigner::btnLoadCtrl_Click(System::Object^  sender, System::EventArgs^  e)
	{
		theAppProxy.ExportCLRObjInfo(_T(""));
		theAppProxy.ExportAllCLRObjInfo(theAppProxy.m_pProxy->m_strAppFormsPath);
		theAppProxy.ExportAllCLRObjInfo(theAppProxy.m_pProxy->m_strAppCommonFormsPath);
		theAppProxy.ExportAllCLRObjInfo(L"C:\\Program Files (x86)\\Syncfusion\\Essential Studio\\Windows\\16.4.0.42\\Assemblies\\4.6\\");
		comboBoxCLRCtrl->Items->Clear();
		CString strControlsPath = theAppProxy.m_pProxy->m_strAppControlsInfoPath + _T("*.xml");
		CString strFormsPath = theAppProxy.m_pProxy->m_strAppFormsInfoPath + _T("*.ico");
		//CString strControls = _T("");
		CString str = _T("");
		int nPos = -1;
		_wfinddata_t fd;
		fd.attrib = FILE_ATTRIBUTE_DIRECTORY;
		intptr_t pf = _wfindfirst(strFormsPath, &fd);
		if (pf != -1)
		{
			str = fd.name;
			nPos = str.ReverseFind('.');
			//strControls += str.Left(nPos);
			//strControls += _T("|");
			comboBoxCLRCtrl->Items->Add(BSTR2STRING(str.Left(nPos)));
			while (!_wfindnext(pf, &fd))
			{
				if ((fd.attrib&FILE_ATTRIBUTE_DIRECTORY) == 0)
				{
					str = fd.name;
					nPos = str.ReverseFind('.');
					comboBoxCLRCtrl->Items->Add(BSTR2STRING(str.Left(nPos)));
					//strControls += str.Left(nPos);
					//strControls += _T("|");
				}
			}
			_findclose(pf);
		}

		pf = _wfindfirst(strControlsPath, &fd);
		if (pf != -1)
		{
			str = fd.name;
			nPos = str.ReverseFind('.');
			//strControls += str.Left(nPos);
			//strControls += _T("|");
			comboBoxCLRCtrl->Items->Add(BSTR2STRING(str.Left(nPos)));
			while (!_wfindnext(pf, &fd))
			{
				if ((fd.attrib&FILE_ATTRIBUTE_DIRECTORY) == 0)
				{
					str = fd.name;
					nPos = str.ReverseFind('.');
					//strControls += str.Left(nPos);
					//strControls += _T("|");
					comboBoxCLRCtrl->Items->Add(BSTR2STRING(str.Left(nPos)));
				}
			}
			_findclose(pf);
		}

		strControlsPath = theAppProxy.m_pProxy->m_strAppWPFObjsInfoPath + _T("*.xml");
		pf = _wfindfirst(strControlsPath, &fd);
		if (pf != -1)
		{
			str = fd.name;
			nPos = str.ReverseFind('.');
			//strControls += str.Left(nPos);
			//strControls += _T("|");
			comboBoxCLRCtrl->Items->Add(BSTR2STRING(str.Left(nPos)));
			while (!_wfindnext(pf, &fd))
			{
				if ((fd.attrib&FILE_ATTRIBUTE_DIRECTORY) == 0)
				{
					str = fd.name;
					nPos = str.ReverseFind('.');
					//strControls += str.Left(nPos);
					//strControls += _T("|");
					comboBoxCLRCtrl->Items->Add(BSTR2STRING(str.Left(nPos)));
				}
			}
			_findclose(pf);
		}

		if (comboBoxCLRCtrl->Items->Count > 0)
		{
			comboBoxCLRCtrl->SelectedIndex = 0;
		}
	}
}
