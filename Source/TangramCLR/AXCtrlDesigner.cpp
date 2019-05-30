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
#include "TangramBase.h"
#include "AXCtrlDesigner.h"

using namespace System::Runtime::InteropServices;

namespace TangramDesigner
{
	System::Void AXCtrlDesigner::btnCreate_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (comboBoxAxCtrl->SelectedItem == nullptr)
			return;
		CString strID = comboBoxAxCtrl->SelectedItem->ToString();
		CString strObjID = strID;
		int nPos = strObjID.Find(_T("."));
		strObjID = strObjID.Mid(nPos + 1);
		nPos = strObjID.Find(_T("."));
		if (nPos != -1)
			strObjID = strObjID.Left(nPos);
		CComBSTR bstrNewName(L"");
		
		ITangram* pTangram = nullptr;
		HMODULE hModule = ::GetModuleHandle(_T("TangramCore.dll"));
		if (hModule) {
			typedef ITangram*(__stdcall * GetTangram)();
			GetTangram _pTangramFunction;
			_pTangramFunction = (GetTangram)GetProcAddress(hModule, "GetTangram");
			if (_pTangramFunction != NULL) {
				pTangram = _pTangramFunction();
			}
		}
		IWndNode* pDesignerNode = NULL;
		pTangram->get_DesignNode(&pDesignerNode);

		if (pDesignerNode == NULL)
			return;
		pDesignerNode->put_Attribute(CComBSTR(L"id"), CComBSTR(L"ActiveX"));
		pDesignerNode->put_Attribute(CComBSTR(L"cnnid"), CComBSTR(strID));
		LONGLONG h = 0;
		pDesignerNode->get_Handle(&h);
		HWND hWnd = (HWND)h;
		if (::IsWindow(hWnd))
			::SendMessage(hWnd, WM_TANGRAMMSG, (WPARAM)0, (LPARAM)strID.GetBuffer());
	}

	System::Void AXCtrlDesigner::btnLoad_Click(System::Object^  sender, System::EventArgs^  e) {
		btnLoad->Visible = false;
		CATID m_catid = CATID_Control;
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
			HRESULT hr = pICatInformation->EnumClassesOfCategories(
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
						CString strID2 = _T(",");
						strID2 += strID;
						strID2 += _T(",");
						if (m_strLayouts.Find(strID2) == -1)
						{
							m_strLayouts += strID;
							m_strLayouts += _T(",");
							this->comboBoxAxCtrl->Items->Add(BSTR2STRING(strID));
						}
					}
				}
				pIEnumGUID->Release();
			}
			pICatInformation->Release();
			comboBoxAxCtrl->SelectedIndex = 0;
		}
	}
}
