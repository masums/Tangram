/********************************************************************************
 *					Tangram Library - version 10.0.0
 **
 *********************************************************************************
 * Copyright (C) 2002-2019 by Tangram Team.   All Rights Reserved.
 **
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

#include "ChromeAppBase.h"

namespace ChromePlus {

ITangram* g_pTangram = nullptr;
CTangramApplicationImpl theAppImpl;

CTangramAppProxy::CTangramAppProxy() {
  theAppImpl.m_pTangramAppProxy = this;
  m_bAutoDelete = TRUE;
  m_hMainWnd = nullptr;
  m_hClosingFrame = m_hCreatingView = nullptr;
  m_pvoid = nullptr;
  m_pCurDocProxy = nullptr;
  m_strProxyName = _T("");
  m_strProxyID = _T("");
  m_strClosingFrameID = _T("");
  m_strCreatingFrameTitle = _T("");
  m_bCreatingNewFrame = FALSE;
  m_mapTangramDoc.clear();
  m_nFrameIndex = 0;
  m_strAppKey = _T("");
}

BOOL CTangramAppProxy::InitTangram(void* pVoid) {
  return TRUE;
}

HWND CTangramAppProxy::CreateNewFrame(CString strFrameKey) {
  return nullptr;
}

BOOL CTangramAppProxy::TangramSaveAllModified() {
  return TRUE;
}

int CTangramAppProxy::OnDestroyMainFrame(CString strID,
                                         int nMainFrameCount,
                                         int nWndType) {
  return -1;
}

HWND CTangramAppProxy::CreateWindowObj(LPCTSTR _strClsName,
                                       IWndNode* pNode,
                                       HWND hParent) {
  return nullptr;
}

LRESULT CTangramAppProxy::OnForegroundIdleProc() {
  return 0;
}

BOOL CTangramAppProxy::TangramPreTranslateMessage(MSG* pMsg) {
  return TRUE;
}

HWND CTangramAppProxy::GetActivePopupMenu(HWND hWnd) {
  return nullptr;
}

ITangramDoc* CTangramAppProxy::OpenDocument(void* pDocTemplate,
                                            CString strFile,
                                            BOOL bNewFrame) {
  return nullptr;
}

ITangramDoc* CTangramAppProxy::CreateNewDocument(LPCTSTR lpszFrameID,
                                                 LPCTSTR lpszAppTitle,
                                                 void* pDocTemplate,
                                                 BOOL bNewFrame) {
  return nullptr;
}

CString CTangramAppProxy::GetNtpXML(CString strKey) {
  return _T("<tangram><window><node id='splitter' name='container' rows='1' cols='2' height ='100,100,' width='300,500,' borderwidth='0' splitterwidth='4' middlecolor='RGB(240,240,240)'><node name='launcher' id='ClrCtrl' cnnid='hostapp.hostctrl,hostapp' caption='' borderwidth='0' /><node name='host' caption='host' id='hostview' borderwidth='0' /></node></window></tangram>");
}
}  // namespace ChromePlus
