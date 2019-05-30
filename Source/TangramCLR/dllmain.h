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

// dllmain.h : Declaration of module class.

#include "TangramCoreEvents.h"
#ifdef _WIN64
#include <ActiveDS.h>
#endif
#include <cstring>
#include <iostream>
#include "TangramBase.h"
#include "ChromeProxy.h"

class CWndNodeCLREvent;

class CTangramCLRApp : 
	public ChromePlus::CTangramMessagePumpImplProxy, 
	public TangramCommon::CTangramAppProxy
{
public:
	CTangramCLRApp();
	~CTangramCLRApp();

	int										m_nAppEndPointCount;
	DWORD									m_dwThreadID;
	HWND									m_hHostWnd;
	ITangram*								m_pTangram;
	IVSExtender*							m_pVSExtender;

	map<CString, CString>					m_mapName;
	map<CString, CString>					m_mapStyle;

	CString									m_strAppPath;
	CString									m_strComponents;

	int CalculateByteMD5(BYTE* pBuffer, int BufferSize, CString &MD5);
	CString GetLibPathFromAssemblyQualifiedName(CString strAssemblyQualifiedName);
	virtual void ProcessMsg(MSG* msg);
	virtual bool DoIdleWork();
	virtual BOOL OnAppIdle(BOOL& bIdle, LONG lCount) {
		return false;
	};
	virtual BOOL IsAppIdleMessage() {
		return false;
	};

	void InitCloudApp(bool bCrashReporting);
private:
	//CTangramCoreEvents:
	void OnTangramClose();
	void OnExtendComplete(long hWnd, BSTR bstrUrl, IWndNode* pRootNode);
	HWND InitTangramApp();
	CString GetNtpXML(CString strKey);
	CString _GetLibPathFromAssemblyQualifiedName(CString strDir, CString strLibName);
};

extern CTangramCLRApp theApp;

class CTangramNodeEvent : public CWndNodeEvents
{
public:
	CTangramNodeEvent();
	virtual ~CTangramNodeEvent();

	CWndNodeCLREvent* m_pTangramNodeCLREvent;
private:
	void __stdcall  OnExtendComplete();
	void __stdcall  OnDestroy();
	void __stdcall  OnDocumentComplete(IDispatch* pDocdisp, BSTR bstrUrl);
	void __stdcall  OnNodeAddInCreated(IDispatch* pAddIndisp, BSTR bstrAddInID, BSTR bstrAddInXml);
	void __stdcall  OnTabChange(int nActivePage, int nOldPage);
	void __stdcall  OnMessageReceived(BSTR barg1, BSTR barg2);
};

extern CTangramApplicationImpl theAppImpl;
extern ITangram* GetTangram();
