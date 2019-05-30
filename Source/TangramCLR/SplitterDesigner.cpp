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
#include "SplitterDesigner.h"
#include "TangramClrProxy.h"

extern CTangramCLRProxy theAppProxy;

namespace TangramDesigner
{
	System::Void SplitterDesigner::btnCreate_Click(System::Object^  sender, System::EventArgs^  e)
	{
		IWndNode* pDesignerNode = NULL;
		theApp.m_pTangram->get_DesignNode(&pDesignerNode);
		if (pDesignerNode == NULL)
			return;
		ViewType nType = ViewType::BlankView;
		pDesignerNode->get_NodeType(&nType);
		if (nType != BlankView)
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
		int nRow = (int)RowsUpDown->Value;
		int nCol = (int)ColsUpDown->Value;
		if (nRow*nCol > 1)
		{
			CTangramXmlParse m_Parse;
			BOOL b = m_Parse.LoadXml(_T("<splitter><window></window></splitter>"));
			if (b)
			{ 
				CComBSTR bstrName(L"");
				pDesignerNode->get_Name(&bstrName);
				pDesignerNode->get_Handle(&h);
				hWnd = (HWND)h;
				CTangramXmlParse* pWndNode = m_Parse.GetChild(_T("window"));
				RECT rc;
				::GetClientRect(hWnd, &rc);

				CString strNewName = theAppProxy.m_pProxy->GetNewLayoutNodeName(CComBSTR(L"Splitter"), pDesignerNode);
				CTangramXmlParse* pNewNode = pWndNode->AddSplitterNode(nRow, nCol, strNewName, rc.right, rc.bottom);
				CString str = m_Parse.xml();
				IWndNode* pParent = NULL;
				pDesignerNode->get_ParentNode(&pParent);
				if (pParent)
				{
					ViewType m_type;
					pParent->get_NodeType(&m_type);
					switch (m_type)
					{
					case ViewType::Splitter:
						pParent->get_Handle(&h);
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
	}
}