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
		//CComPtr<ITangram> pTangram;
		//theApp.m_pTangram->get_RemoteTangram(CComBSTR("chromeplus.tangram"), &pTangram);
		////pTangram.CoCreateInstance(L"chromeplus.tangram");
		//if (pTangram)
		//{
		//	CComPtr<IChromeWebBrowser> pBrowser;
		//	pTangram->get_ActiveChromeBrowserWnd(&pBrowser);
		//	if (pBrowser)
		//	{

		//	}
		//}
		ITangramExtender* pExtender = nullptr;
		theApp.m_pTangram->get_Extender(&pExtender);
		if (pExtender)
		{
			CComQIPtr<IVSExtender> pVSExtender(pExtender);
			if (pVSExtender)
				theApp.m_pVSExtender = pVSExtender.Detach();
		}
		if (theApp.m_pVSExtender)
		{
			IWndNode* pNode = nullptr;
			theApp.m_pVSExtender->get_DesignRootNode(&pNode);
			CComBSTR bstrXml;
			CComBSTR bstrKey;
			pNode->get_DocXml(&bstrXml);
			theApp.m_pTangram->NewGUID(&bstrKey);
			ChromeWebBrowser^ browser = TangramCLR::Tangram::ActiveBrowser();
			if (browser)
				browser->OpenURL(L"http://www.sina.com.cn", Disposition::NEW_POPUP, BSTR2STRING(bstrKey), BSTR2STRING(bstrXml));
		}
	}
}
