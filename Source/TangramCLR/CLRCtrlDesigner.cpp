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
#include "CLRCtrlDesigner.h"
#include "TangramClrProxy.h"
#include <io.h>
#include <stdio.h>

extern CTangramCLRProxy theAppProxy;

using namespace System::Runtime::InteropServices;

namespace TangramDesigner
{
	Void CLRCtrlDesigner::CLRCtrlDesigner_Load(Object^  sender, EventArgs^  e) 
	{
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
				if ((fd.attrib&FILE_ATTRIBUTE_DIRECTORY)==0)
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
				if ((fd.attrib&FILE_ATTRIBUTE_DIRECTORY)==0)
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
				if ((fd.attrib&FILE_ATTRIBUTE_DIRECTORY)==0)
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

	Void CLRCtrlDesigner::btnCreate_Click(Object^  sender, EventArgs^  e)
	{
		if (comboBoxCLRCtrl->SelectedItem == nullptr)
			return;

		IWndNode* pDesignerNode = NULL;
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

		pTangram->get_DesignNode(&pDesignerNode);
		if (pDesignerNode == NULL)
			return;
		CString strID = comboBoxCLRCtrl->SelectedItem->ToString();
		if (strID != _T(""))
		{
			pDesignerNode->put_Attribute(CComBSTR(L"id"), CComBSTR(L"CLRCtrl"));
			pDesignerNode->put_Attribute(CComBSTR(L"cnnid"), CComBSTR(strID));
			LONGLONG h = 0;
			pDesignerNode->get_Handle(&h);
			if (::IsWindow((HWND)h))
				::SendMessage((HWND)h, WM_TANGRAMMSG, (WPARAM)0, (LPARAM)strID.GetBuffer());
		}
	}
}