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
#include "HostViewDesigner.h"
#include "TangramObj.h"
#include "ChromeWebBrowser.h"

namespace TangramDesigner 
{
	System::Void HostViewDesigner::btnHostView_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		IWndNode* pDesignerNode = NULL;
		theApp.m_pTangram->get_DesignNode(&pDesignerNode);
		if (pDesignerNode == NULL)
			return;
		pDesignerNode->put_Attribute(CComBSTR(L"id"), CComBSTR(L"hostview"));
	}

	System::Void HostViewDesigner::HostViewDesigner_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		IWndNode* pCreatingNode = NULL;
		theApp.m_pTangram->get_CreatingNode(&pCreatingNode);
		if (pCreatingNode)
		{
			theApp.m_pTangram->put_AppExtender(CComBSTR(L"HostViewNode"), (IDispatch*)pCreatingNode);
		}
	}

	System::Void HostViewDesigner::btnPrevatChrome_Click(System::Object^  sender, System::EventArgs^  e) {
		if (theApp.m_pTangramProxyBase && theApp.m_pTangramProxyBase->m_pCreatorImpl)
			theApp.m_pTangramProxyBase->m_pCreatorImpl->CreateBrowser(NULL, _T("https://tangramdev.github.io/test/newtangrampage.html|"));
	}
}
