

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.xx.xxxx */
/* at a redacted point in time
 */
/* Compiler settings for ../../chrome_proxy/com_server/ChromeAppServer.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.xx.xxxx 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ChromeAppServer.h"

#define TYPE_FORMAT_STRING_SIZE   1451                              
#define PROC_FORMAT_STRING_SIZE   12849                             
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _ChromeAppServer_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ChromeAppServer_MIDL_TYPE_FORMAT_STRING;

typedef struct _ChromeAppServer_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ChromeAppServer_MIDL_PROC_FORMAT_STRING;

typedef struct _ChromeAppServer_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ChromeAppServer_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ChromeAppServer_MIDL_TYPE_FORMAT_STRING ChromeAppServer__MIDL_TypeFormatString;
extern const ChromeAppServer_MIDL_PROC_FORMAT_STRING ChromeAppServer__MIDL_ProcFormatString;
extern const ChromeAppServer_MIDL_EXPR_FORMAT_STRING ChromeAppServer__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramExtender_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramDesigner_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramDesigner_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEclipseExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEclipseExtender_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOfficeExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOfficeExtender_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVSExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVSExtender_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramRestNotify_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramRestNotify_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramRestObj_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramRestObj_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IVSDocument_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IVSDocument_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITaskNotify_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITaskNotify_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramTreeNode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramTreeNode_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramTreeViewCallBack_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramTreeViewCallBack_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramTreeView_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramTreeView_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramApp_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramApp_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramEventObj_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramEventObj_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEventProxy_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEventProxy_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWndNode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWndNode_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAppExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAppExtender_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWndContainer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWndContainer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ICreator_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ICreator_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramEditor_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramEditor_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramDoc_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramDoc_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramDocTemplate_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramDocTemplate_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramJava_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramJava_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangram_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangram_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWndFrame_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWndFrame_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWndNodeCollection_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWndNodeCollection_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWndPage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWndPage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWorkBenchWindow_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWorkBenchWindow_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IChromeWebBrowser_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IChromeWebBrowser_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IChromeWebContent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IChromeWebContent_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOfficeObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOfficeObject_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramCtrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramCtrl_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITangramAppCtrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITangramAppCtrl_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEclipseCtrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEclipseCtrl_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const ChromeAppServer_MIDL_PROC_FORMAT_STRING ChromeAppServer__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Save */


	/* Procedure Close */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 26 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActiveWorkBenchWindow */

/* 32 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 34 */	NdrFcLong( 0x0 ),	/* 0 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 42 */	NdrFcShort( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 48 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x1 ),	/* 1 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrID */

/* 58 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 60 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 62 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 64 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 66 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 68 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddVBAFormsScript */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x9 ),	/* 9 */
/* 84 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 92 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x1 ),	/* 1 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter OfficeObject */

/* 102 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrKey */

/* 108 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 112 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 114 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 116 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 118 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitVBAForm */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0xa ),	/* 10 */
/* 134 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 140 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 142 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 152 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 154 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 156 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nStyle */

/* 158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 160 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrXml */

/* 164 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 166 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 168 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 170 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 172 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 174 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 178 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameFromVBAForm */

/* 182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0xb ),	/* 11 */
/* 190 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 196 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 198 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pForm */

/* 208 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 210 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 212 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppFrame */

/* 214 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 216 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 218 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 222 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetActiveTopWndNode */

/* 226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0xc ),	/* 12 */
/* 234 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 242 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pForm */

/* 252 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 254 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 256 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter WndNode */

/* 258 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 260 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 262 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Object */


	/* Procedure GetObjectFromWnd */

/* 270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0xd ),	/* 13 */
/* 278 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 286 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */


	/* Parameter hWnd */

/* 296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 298 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */


	/* Parameter ppObjFromWnd */

/* 302 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 304 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 306 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */


	/* Return value */

/* 308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 310 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentDesignNode */

/* 314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x9 ),	/* 9 */
/* 322 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 330 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppRetVal */

/* 340 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 342 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 344 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 348 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CurrentDesignNode */

/* 352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0xa ),	/* 10 */
/* 360 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 366 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 368 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 378 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 380 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 382 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DesignNode */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0xb ),	/* 11 */
/* 398 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 406 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 416 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 418 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 420 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 424 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DesignRootNode */

/* 428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0xc ),	/* 12 */
/* 436 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 442 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 444 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 454 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 456 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 458 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 462 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DesignRootNode */

/* 466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0xd ),	/* 13 */
/* 474 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 480 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 482 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 492 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 494 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 496 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 500 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramCLRProject */

/* 504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0xe ),	/* 14 */
/* 512 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x22 ),	/* 34 */
/* 518 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 520 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPrjPath */

/* 530 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 532 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 534 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 536 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 538 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 540 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 544 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramCLRProject */

/* 548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0xf ),	/* 15 */
/* 556 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 558 */	NdrFcShort( 0x6 ),	/* 6 */
/* 560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 562 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 564 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x1 ),	/* 1 */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPrjPath */

/* 574 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 576 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 578 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 582 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 584 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 588 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentSelectedPrj */

/* 592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x10 ),	/* 16 */
/* 600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 606 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 608 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 618 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 620 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 622 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 626 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendEx */


	/* Procedure ExtendXmlUI */

/* 630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x11 ),	/* 17 */
/* 638 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 644 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 646 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x1 ),	/* 1 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */


	/* Parameter bstrKey */

/* 656 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 660 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */


	/* Parameter bstrXml */

/* 662 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 664 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 666 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */


	/* Parameter ppNode */

/* 668 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 670 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 672 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */


	/* Return value */

/* 674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 676 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ProcessNotify */


	/* Procedure Notify */


	/* Procedure Notify */

/* 680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x7 ),	/* 7 */
/* 688 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 694 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 696 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXmlNotify */


	/* Parameter bstrInfo */


	/* Parameter bstrInfo */

/* 706 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 708 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 710 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 712 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 714 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramRestNotify */

/* 718 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x7 ),	/* 7 */
/* 726 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x8 ),	/* 8 */
/* 732 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 734 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 744 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 746 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 748 */	NdrFcShort( 0x94 ),	/* Type Offset=148 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramRestNotify */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 772 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 782 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 784 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 786 */	NdrFcShort( 0x98 ),	/* Type Offset=152 */

	/* Return value */

/* 788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 790 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HWND */


	/* Procedure get_NotifyHandle */

/* 794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x9 ),	/* 9 */
/* 802 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x2c ),	/* 44 */
/* 808 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 810 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 822 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 824 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 828 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_NotifyHandle */

/* 832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0xa ),	/* 10 */
/* 840 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 842 */	NdrFcShort( 0x10 ),	/* 16 */
/* 844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 848 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 860 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 862 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Header */

/* 870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0xb ),	/* 11 */
/* 878 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 884 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 886 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrHeaderName */

/* 896 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 898 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 900 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 902 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 904 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 906 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 910 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Header */

/* 914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0xc ),	/* 12 */
/* 922 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 928 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 930 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrHeaderName */

/* 940 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 942 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 944 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 946 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 948 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 950 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 954 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RestKey */

/* 958 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0xd ),	/* 13 */
/* 966 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x8 ),	/* 8 */
/* 972 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 974 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 984 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 986 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 988 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 992 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RestKey */

/* 996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0xe ),	/* 14 */
/* 1004 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1012 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1022 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1024 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1026 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1030 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentActiveNode */


	/* Procedure get_TangramNode */

/* 1034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0xf ),	/* 15 */
/* 1042 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1048 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1050 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1060 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1062 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1064 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */


	/* Return value */

/* 1066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1068 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramNode */

/* 1072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1080 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1086 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1088 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1098 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1100 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1102 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 1104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1106 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AsyncRest */

/* 1110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1118 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1120 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1124 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1126 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nMethod */

/* 1136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1138 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrURL */

/* 1142 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1144 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1146 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrData */

/* 1148 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1150 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1152 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hNotify */

/* 1154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1156 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1158 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1162 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Notify */

/* 1166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1172 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1174 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1180 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1182 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nNotify */

/* 1192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1194 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1200 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UploadFile */

/* 1204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1212 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1214 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1218 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1220 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bUpload */

/* 1230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1232 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1234 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrServerURL */

/* 1236 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1238 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1240 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRequest */

/* 1242 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1244 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1246 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrFilePath */

/* 1248 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1250 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1252 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1256 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RestData */

/* 1260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1268 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1270 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1274 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1276 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nMethod */

/* 1286 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1288 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrServerURL */

/* 1292 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1294 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1296 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRequest */

/* 1298 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1300 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1302 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrData */

/* 1304 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1306 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1308 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hNotify */

/* 1310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1312 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1314 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1318 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearHeaders */

/* 1322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1328 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1330 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1336 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1338 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1350 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 1354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1362 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1368 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1370 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTargetObj */

/* 1380 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1382 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1384 */	NdrFcShort( 0xae ),	/* Type Offset=174 */

	/* Return value */

/* 1386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1388 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Width */


	/* Procedure get_State */

/* 1392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1400 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1406 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1408 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1418 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1420 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1424 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1426 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Width */


	/* Procedure put_State */

/* 1430 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1438 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1444 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1446 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 1456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1458 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1464 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VSClass */

/* 1468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1476 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1482 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1484 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 1494 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1496 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1498 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter ppNode */

/* 1500 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1502 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1504 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 1506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1508 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */

/* 1512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1520 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1526 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1528 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 1538 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1540 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1542 */	NdrFcShort( 0x472 ),	/* Type Offset=1138 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1546 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */


	/* Procedure get_Count */


	/* Procedure get_Cols */


	/* Procedure get_Index */


	/* Procedure get_Count */

/* 1550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1558 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1562 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1564 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1566 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */


	/* Parameter pCount */


	/* Parameter nCols */


	/* Parameter nVal */


	/* Parameter pCount */

/* 1576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1578 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1584 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifyEx */

/* 1588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1596 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1602 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1604 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varNotify */

/* 1614 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1616 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1618 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 1620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1622 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_WndNode */

/* 1626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1634 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1640 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1642 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1652 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1654 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1656 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 1658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1660 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Pages */

/* 1664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1672 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1674 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1678 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1680 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 1690 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1692 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1698 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInitTreeView */

/* 1702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1710 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1716 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1718 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTangramTreeView */

/* 1728 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1730 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1732 */	NdrFcShort( 0x47a ),	/* Type Offset=1146 */

	/* Parameter bstrXml */

/* 1734 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1736 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1738 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1742 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnClick */

/* 1746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1752 */	NdrFcShort( 0xa ),	/* 10 */
/* 1754 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1760 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1762 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1766 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 1772 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1774 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1776 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXmlData */

/* 1778 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1780 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1782 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1786 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_URL */


	/* Procedure OnInit */

/* 1790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0xb ),	/* 11 */
/* 1798 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1804 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1806 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter bstrXml */

/* 1816 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1818 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1820 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 1822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1824 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnNewPage */

/* 1828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0xc ),	/* 12 */
/* 1836 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1842 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1844 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nNewPage */

/* 1854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1856 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1862 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramAction */

/* 1866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0xd ),	/* 13 */
/* 1874 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1880 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1882 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1886 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 1892 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1894 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1896 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRetXml */

/* 1898 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1900 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1902 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 1904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1906 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramTreeViewCallBack */

/* 1910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1918 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1924 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1926 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 1936 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1938 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1940 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 1942 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1944 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1946 */	NdrFcShort( 0x48c ),	/* Type Offset=1164 */

	/* Return value */

/* 1948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1950 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Rows */


	/* Procedure get_FirstRoot */

/* 1954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1962 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1968 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1970 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRows */


	/* Parameter pVal */

/* 1980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1982 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddTreeNode */

/* 1992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2000 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2006 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2008 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hItem */

/* 2018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2020 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrXml */

/* 2024 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2026 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2028 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2032 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertNode */

/* 2036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2042 */	NdrFcShort( 0xa ),	/* 10 */
/* 2044 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2050 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2052 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 2062 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2064 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2066 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hItem */

/* 2068 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2070 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2076 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tangram */

/* 2080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2086 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2088 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2094 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2096 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppTangramCore */

/* 2106 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2108 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2110 */	NdrFcShort( 0x49e ),	/* Type Offset=1182 */

	/* Return value */

/* 2112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2114 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Application */


	/* Procedure get_eventSource */

/* 2118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2132 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2134 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2144 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2148 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */


	/* Return value */

/* 2150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Application */


	/* Procedure put_eventSource */

/* 2156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2164 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2170 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2172 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter eventSource */

/* 2182 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2186 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */


	/* Return value */

/* 2188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2190 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Index */

/* 2194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2200 */	NdrFcShort( 0xa ),	/* 10 */
/* 2202 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2208 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2210 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2220 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2222 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2228 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentNavigateKey */


	/* Procedure get_EventName */

/* 2232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0xb ),	/* 11 */
/* 2240 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2246 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2248 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2250 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2258 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2260 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2262 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 2264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2266 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EventName */

/* 2270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0xc ),	/* 12 */
/* 2278 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2284 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2286 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2290 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2296 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2298 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2300 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2304 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Object */

/* 2308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0xe ),	/* 14 */
/* 2316 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2322 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2324 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 2334 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2336 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter newVal */

/* 2340 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2342 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2344 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 2346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2348 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Value */

/* 2352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2358 */	NdrFcShort( 0xf ),	/* 15 */
/* 2360 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2366 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2368 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 2378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2380 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 2384 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2386 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2388 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2392 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Value */

/* 2396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2404 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2410 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2412 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 2422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2424 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter newVal */

/* 2428 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2430 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2432 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 2434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2436 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ChildNodes */

/* 2440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2446 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2448 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2454 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2456 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNodeColletion */

/* 2466 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2468 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2470 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Return value */

/* 2472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2474 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Row */

/* 2478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2484 */	NdrFcShort( 0xa ),	/* 10 */
/* 2486 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2492 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2494 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRow */

/* 2504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2506 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2512 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Col */

/* 2516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2522 */	NdrFcShort( 0xb ),	/* 11 */
/* 2524 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2528 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2530 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2532 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nCol */

/* 2542 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2544 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2550 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NodeType */

/* 2554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0xc ),	/* 12 */
/* 2562 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2566 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2568 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2570 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nType */

/* 2580 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 2582 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2584 */	NdrFcShort( 0x4dc ),	/* Type Offset=1244 */

	/* Return value */

/* 2586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2588 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ParentNode */

/* 2592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2598 */	NdrFcShort( 0xd ),	/* 13 */
/* 2600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2606 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2608 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNode */

/* 2618 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2620 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2622 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 2624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2626 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HTMLWindow */

/* 2630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2636 */	NdrFcShort( 0xe ),	/* 14 */
/* 2638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2644 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2646 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2656 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2660 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 2662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2664 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TopPage */


	/* Procedure get_WndPage */

/* 2668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2674 */	NdrFcShort( 0xf ),	/* 15 */
/* 2676 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2682 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2684 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2694 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2696 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2698 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */


	/* Return value */

/* 2700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2702 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CreatingNode */


	/* Procedure get_RootNode */

/* 2706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2712 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2714 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2720 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2722 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter ppNode */

/* 2732 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2734 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2736 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */


	/* Return value */

/* 2738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2740 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XObject */

/* 2744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2750 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2752 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2758 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2760 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVar */

/* 2770 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2772 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2774 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 2776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2778 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AxPlugIn */

/* 2782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2788 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2790 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2796 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2798 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPlugInName */

/* 2808 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2812 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 2814 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2816 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2818 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 2820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2822 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FrameXML */


	/* Procedure get_Caption */

/* 2826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2832 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2834 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2840 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2842 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2844 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2852 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2854 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2856 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 2858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2860 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Caption */

/* 2864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2870 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2872 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2878 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2880 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCaption */

/* 2890 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2892 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2894 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2898 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 2902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2908 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2910 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2916 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2918 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2920 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2928 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2930 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2932 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 2934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2936 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitCtrl */


	/* Procedure put_Name */

/* 2940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2948 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2954 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2956 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */


	/* Parameter bstrName */

/* 2966 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2970 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 2972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2974 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Objects */

/* 2978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2984 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2986 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2992 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2994 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nType */

/* 3004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3006 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppNodeColletion */

/* 3010 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3012 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3014 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Return value */

/* 3016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3018 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Handle */

/* 3022 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3028 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3030 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3034 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3036 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3038 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 3048 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3050 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3052 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3056 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Attribute */

/* 3060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3066 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3068 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3072 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3074 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3076 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3080 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 3086 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3088 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3090 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 3092 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3094 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3096 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3100 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Attribute */

/* 3104 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3110 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3112 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3118 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3120 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 3130 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3132 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3134 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrVal */

/* 3136 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3138 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3140 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 3142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3144 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tag */

/* 3148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3154 */	NdrFcShort( 0x1b ),	/* 27 */
/* 3156 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3162 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3164 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVar */

/* 3174 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3176 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3178 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 3180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3182 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Tag */

/* 3186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3192 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3194 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3200 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3202 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 3204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vVar */

/* 3212 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3214 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3216 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 3218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3220 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OuterXml */

/* 3224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x1d ),	/* 29 */
/* 3232 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3238 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3240 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3250 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3252 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3254 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3258 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Key */

/* 3262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3268 */	NdrFcShort( 0x1e ),	/* 30 */
/* 3270 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3276 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3278 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3288 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3290 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3292 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3296 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HtmlDocument */

/* 3300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x1f ),	/* 31 */
/* 3308 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3314 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3316 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3326 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3328 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3330 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 3332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3334 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NameAtWindowPage */

/* 3338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3344 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3346 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3352 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3354 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3364 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3366 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3368 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3372 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Width */

/* 3376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3382 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3384 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3388 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3390 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3392 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3402 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3404 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3410 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Height */

/* 3414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3420 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3422 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3428 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3430 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3440 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3442 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3448 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Frame */

/* 3452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3458 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3460 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3466 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3468 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3478 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3480 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3482 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 3484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3486 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XML */

/* 3490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3496 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3498 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3504 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3506 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3516 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3518 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3520 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3524 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Extender */

/* 3528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3534 */	NdrFcShort( 0x25 ),	/* 37 */
/* 3536 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3542 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3544 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3554 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3556 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3558 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 3560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3562 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Extender */

/* 3566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x26 ),	/* 38 */
/* 3574 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3580 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3582 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3592 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3594 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3596 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 3598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3600 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DocXml */

/* 3604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3610 */	NdrFcShort( 0x27 ),	/* 39 */
/* 3612 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3618 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3620 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3630 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3632 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3634 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 3636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3638 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rgbMiddle */

/* 3642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3648 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3650 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3656 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3658 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3668 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3670 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3676 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_rgbMiddle */

/* 3680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3686 */	NdrFcShort( 0x29 ),	/* 41 */
/* 3688 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3694 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3696 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3706 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3708 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3712 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3714 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rgbRightBottom */

/* 3718 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3724 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3726 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3730 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3732 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3734 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3744 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3746 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3752 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_rgbRightBottom */

/* 3756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3762 */	NdrFcShort( 0x2b ),	/* 43 */
/* 3764 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3770 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3772 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3784 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3790 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rgbLeftTop */

/* 3794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3800 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3802 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3806 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3808 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3810 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3822 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3828 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_rgbLeftTop */

/* 3832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3838 */	NdrFcShort( 0x2d ),	/* 45 */
/* 3840 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3848 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3860 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3866 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Hmin */

/* 3870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x2e ),	/* 46 */
/* 3878 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3882 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3886 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3896 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3898 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3904 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Hmin */

/* 3908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3914 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3916 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3922 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3924 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3936 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3942 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Hmax */

/* 3946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3952 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3954 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3958 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3960 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3962 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3972 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3974 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3980 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Hmax */

/* 3984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3990 */	NdrFcShort( 0x31 ),	/* 49 */
/* 3992 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4000 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4012 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4018 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Vmin */

/* 4022 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x32 ),	/* 50 */
/* 4030 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4034 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4036 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4038 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4046 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4048 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4050 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4056 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Vmin */

/* 4060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4066 */	NdrFcShort( 0x33 ),	/* 51 */
/* 4068 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4070 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4072 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4074 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4076 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4088 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4094 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Vmax */

/* 4098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0x34 ),	/* 52 */
/* 4106 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4110 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4112 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4114 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4124 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4126 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4132 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Vmax */

/* 4136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4142 */	NdrFcShort( 0x35 ),	/* 53 */
/* 4144 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4150 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4152 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4164 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4170 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostNode */

/* 4174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4180 */	NdrFcShort( 0x36 ),	/* 54 */
/* 4182 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4188 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4190 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4200 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4202 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4204 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 4206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4208 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_HostNode */

/* 4212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4218 */	NdrFcShort( 0x37 ),	/* 55 */
/* 4220 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4226 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4228 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4238 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4240 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4242 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 4244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4246 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActivePage */

/* 4250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4256 */	NdrFcShort( 0x38 ),	/* 56 */
/* 4258 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4262 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4264 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4266 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4276 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ActivePage */

/* 4288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4294 */	NdrFcShort( 0x39 ),	/* 57 */
/* 4296 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4302 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4304 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4316 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4322 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostFrame */

/* 4326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4332 */	NdrFcShort( 0x3a ),	/* 58 */
/* 4334 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4340 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4342 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4352 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4354 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4356 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 4358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4360 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MasterRow */

/* 4364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4370 */	NdrFcShort( 0x3b ),	/* 59 */
/* 4372 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4376 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4378 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4380 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4390 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4392 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4398 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MasterRow */

/* 4402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4408 */	NdrFcShort( 0x3c ),	/* 60 */
/* 4410 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4416 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4418 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4430 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4436 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MasterCol */

/* 4440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0x3d ),	/* 61 */
/* 4448 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4452 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4454 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4456 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4466 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4468 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4474 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MasterCol */

/* 4478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4484 */	NdrFcShort( 0x3e ),	/* 62 */
/* 4486 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4492 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4494 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4506 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4512 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OfficeObj */

/* 4516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4522 */	NdrFcShort( 0x3f ),	/* 63 */
/* 4524 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4530 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4532 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4542 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4544 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4546 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 4548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4550 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_SaveToConfigFile */

/* 4554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4560 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4562 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4564 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4568 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4570 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4582 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4584 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4588 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitCLRApp */


	/* Procedure get_DockObj */

/* 4592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4598 */	NdrFcShort( 0x41 ),	/* 65 */
/* 4600 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4604 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4606 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4608 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4612 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strInitXml */


	/* Parameter bstrName */

/* 4618 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4620 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4622 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter llHandle */


	/* Parameter pVal */

/* 4624 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4626 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4628 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4632 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DockObj */

/* 4636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4642 */	NdrFcShort( 0x42 ),	/* 66 */
/* 4644 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4646 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4648 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4650 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4652 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4656 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4660 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4662 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4664 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4666 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 4668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4670 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4672 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4676 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VSDocument */

/* 4680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0x43 ),	/* 67 */
/* 4688 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4694 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4696 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVSDocument */

/* 4706 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4708 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4710 */	NdrFcShort( 0x4f6 ),	/* Type Offset=1270 */

	/* Return value */

/* 4712 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4714 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_URL */

/* 4718 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4724 */	NdrFcShort( 0x44 ),	/* 68 */
/* 4726 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4730 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4732 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4734 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4736 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4744 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4746 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4748 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 4750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4752 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_URL */

/* 4756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4762 */	NdrFcShort( 0x45 ),	/* 69 */
/* 4764 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4770 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4772 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4782 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4784 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4786 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 4788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4790 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ActiveTabPage */

/* 4794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4800 */	NdrFcShort( 0x46 ),	/* 70 */
/* 4802 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4808 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4810 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 4820 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4822 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4824 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 4826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4828 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNodes */

/* 4832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4838 */	NdrFcShort( 0x47 ),	/* 71 */
/* 4840 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4844 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4846 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4848 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4858 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4860 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4862 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 4864 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4866 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4868 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Parameter ppNodes */

/* 4870 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4872 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4874 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Parameter pCount */

/* 4876 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4878 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4884 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNode */

/* 4888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4894 */	NdrFcShort( 0x48 ),	/* 72 */
/* 4896 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4898 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4902 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4904 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRow */

/* 4914 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4916 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nCol */

/* 4920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4922 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppWndmNode */

/* 4926 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4928 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4930 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 4932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4934 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlByName */

/* 4938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4944 */	NdrFcShort( 0x49 ),	/* 73 */
/* 4946 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4948 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4952 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4954 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 4964 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4966 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4968 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 4970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4972 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4974 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppCtrlDisp */

/* 4976 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4978 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4980 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 4982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4984 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Refresh */

/* 4988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4994 */	NdrFcShort( 0x4a ),	/* 74 */
/* 4996 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5002 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 5004 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 5014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5016 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 5020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5026 */	NdrFcShort( 0x4b ),	/* 75 */
/* 5028 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5034 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5036 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5044 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 5046 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5048 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5050 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 5052 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5054 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5056 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 5058 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5060 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5062 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 5064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5066 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadXML */

/* 5070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5076 */	NdrFcShort( 0x4c ),	/* 76 */
/* 5078 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5084 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5086 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5090 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nType */

/* 5096 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5098 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrXML */

/* 5102 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5104 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5106 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 5108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5110 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendEx */

/* 5114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5120 */	NdrFcShort( 0x4d ),	/* 77 */
/* 5122 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5124 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5128 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5130 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRow */

/* 5140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5142 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nCol */

/* 5146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5148 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 5152 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5154 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5156 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 5158 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5160 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5162 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 5164 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5166 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5168 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 5170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5172 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNodeByName */

/* 5176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5182 */	NdrFcShort( 0x4e ),	/* 78 */
/* 5184 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5190 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5192 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5202 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5204 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5206 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 5208 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5210 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5212 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Return value */

/* 5214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5216 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlValueByName */

/* 5220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5226 */	NdrFcShort( 0x4f ),	/* 79 */
/* 5228 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5230 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5234 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5236 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5246 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5248 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5250 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 5252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5254 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5256 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 5258 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5260 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5262 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 5264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5266 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCtrlValueByName */

/* 5270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5276 */	NdrFcShort( 0x50 ),	/* 80 */
/* 5278 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5280 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5284 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5286 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5290 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 5296 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5298 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5300 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 5302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5304 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5306 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 5308 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5310 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5312 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 5314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5316 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NavigateURL */

/* 5320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5326 */	NdrFcShort( 0x51 ),	/* 81 */
/* 5328 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5334 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5336 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5340 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 5346 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5348 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5350 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter dispObjforScript */

/* 5352 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5354 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5356 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 5358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5360 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create */

/* 5364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5370 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5372 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5374 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5376 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5378 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5380 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hParentWnd */

/* 5390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5392 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5394 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pNode */

/* 5396 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5398 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5400 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter hWnd */

/* 5402 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5404 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5410 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Names */

/* 5414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5422 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5428 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5430 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 5440 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5442 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5444 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 5446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5448 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tags */

/* 5452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5458 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5460 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5466 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5468 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjName */

/* 5478 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5480 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5482 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 5484 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5486 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5488 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 5490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5492 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TemplateXml */


	/* Procedure get_TemplateXml */

/* 5496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5502 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5504 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5510 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5512 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5514 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrVal */


	/* Parameter bstrVal */

/* 5522 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5524 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5526 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 5528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5530 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TemplateXml */


	/* Procedure put_TemplateXml */

/* 5534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5542 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5548 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5550 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 5560 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5562 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5564 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 5566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5568 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DocType */


	/* Procedure put_DocType */

/* 5572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5578 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5580 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5586 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5588 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 5598 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5600 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5602 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 5604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5606 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Handle */


	/* Procedure get_DocID */


	/* Procedure get_DocID */

/* 5610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5616 */	NdrFcShort( 0xa ),	/* 10 */
/* 5618 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5622 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5624 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5626 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 5636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5638 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5640 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 5642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5644 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DocID */


	/* Procedure put_DocID */

/* 5648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5654 */	NdrFcShort( 0xb ),	/* 11 */
/* 5656 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5658 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5664 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 5674 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5676 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5678 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5682 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameWndXml */


	/* Procedure GetFrameWndXml */

/* 5686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5692 */	NdrFcShort( 0xc ),	/* 12 */
/* 5694 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5700 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5702 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrWndID */


	/* Parameter bstrWndID */

/* 5712 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5714 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5716 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrWndScriptVal */


	/* Parameter bstrWndScriptVal */

/* 5718 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5720 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5722 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */


	/* Return value */

/* 5724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5726 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateWndPage */

/* 5730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5736 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5738 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5740 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5744 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5746 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 5756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5758 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5760 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppWndPage */

/* 5762 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5764 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5766 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 5768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5770 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateObject */

/* 5774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5782 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5788 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5790 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5794 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjID */

/* 5800 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5802 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5804 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppObj */

/* 5806 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5808 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5810 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 5812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5814 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ActiveMethod */

/* 5818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5824 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5826 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5834 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjID */

/* 5844 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5846 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5848 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrMethodName */

/* 5850 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5852 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5854 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrParams */

/* 5856 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5858 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5860 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 5862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5864 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreatingNode */

/* 5868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5874 */	NdrFcShort( 0xa ),	/* 10 */
/* 5876 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5882 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5884 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppCreatingNode */

/* 5894 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5896 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5898 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 5900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5902 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 5906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5912 */	NdrFcShort( 0xb ),	/* 11 */
/* 5914 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5916 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5920 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5922 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5926 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 5932 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5934 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5936 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 5938 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5940 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5942 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXML */

/* 5944 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5946 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5948 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrFeatures */

/* 5950 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5952 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5954 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 5956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5958 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AppKeyValue */

/* 5962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5968 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5970 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5976 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5978 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5980 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5982 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 5988 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5990 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5992 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 5994 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5996 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5998 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 6000 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6002 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppKeyValue */

/* 6006 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6012 */	NdrFcShort( 0xa ),	/* 10 */
/* 6014 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6020 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6022 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 6024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6026 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 6032 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6034 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6036 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 6038 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6040 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6042 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 6044 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6046 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AppExtender */

/* 6050 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6056 */	NdrFcShort( 0xb ),	/* 11 */
/* 6058 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6062 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6064 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6066 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6070 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 6076 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6078 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6080 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 6082 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6084 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6086 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 6088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6090 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppExtender */

/* 6094 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6100 */	NdrFcShort( 0xc ),	/* 12 */
/* 6102 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6108 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6110 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 6120 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6122 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6124 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 6126 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6128 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6130 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 6132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6134 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RootNodes */

/* 6138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6144 */	NdrFcShort( 0xd ),	/* 13 */
/* 6146 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6152 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6154 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNodeColletion */

/* 6164 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6166 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6168 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Return value */

/* 6170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6172 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostWnd */

/* 6176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6182 */	NdrFcShort( 0xe ),	/* 14 */
/* 6184 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6188 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6190 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6192 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6202 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6204 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6206 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6210 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RemoteTangram */

/* 6214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6220 */	NdrFcShort( 0x11 ),	/* 17 */
/* 6222 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6228 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6230 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrID */

/* 6240 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6242 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6244 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 6246 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6248 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6250 */	NdrFcShort( 0x49e ),	/* Type Offset=1182 */

	/* Return value */

/* 6252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6254 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Extender */

/* 6258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6264 */	NdrFcShort( 0x12 ),	/* 18 */
/* 6266 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6272 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6274 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6284 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6286 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6288 */	NdrFcShort( 0x50c ),	/* Type Offset=1292 */

	/* Return value */

/* 6290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6292 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Extender */

/* 6296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6302 */	NdrFcShort( 0x13 ),	/* 19 */
/* 6304 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6310 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6312 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 6322 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6324 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6326 */	NdrFcShort( 0x510 ),	/* Type Offset=1296 */

	/* Return value */

/* 6328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6330 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RemoteHelperHWND */

/* 6334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6340 */	NdrFcShort( 0x14 ),	/* 20 */
/* 6342 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6346 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6348 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6350 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6362 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6364 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6368 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RemoteHelperHWND */

/* 6372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6378 */	NdrFcShort( 0x15 ),	/* 21 */
/* 6380 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6382 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6386 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6388 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 6398 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6400 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6402 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6406 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DesignNode */

/* 6410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6416 */	NdrFcShort( 0x16 ),	/* 22 */
/* 6418 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6424 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6426 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6436 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6438 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6440 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 6442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6444 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramDoc */

/* 6448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6454 */	NdrFcShort( 0x17 ),	/* 23 */
/* 6456 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6458 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6462 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 6464 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AppProxy */

/* 6474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6476 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6478 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter nDocID */

/* 6480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6482 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6484 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 6486 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6488 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6490 */	NdrFcShort( 0x522 ),	/* Type Offset=1314 */

	/* Return value */

/* 6492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6494 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DocTemplate */

/* 6498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6504 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6506 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6510 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6512 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6514 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrID */

/* 6524 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6526 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6528 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 6530 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6532 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6534 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6536 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6538 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActiveChromeBrowserWnd */

/* 6542 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6548 */	NdrFcShort( 0x19 ),	/* 25 */
/* 6550 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6556 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6558 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppChromeWebBrowser */

/* 6568 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6570 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6572 */	NdrFcShort( 0x538 ),	/* Type Offset=1336 */

	/* Return value */

/* 6574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6576 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostChromeBrowserWnd */

/* 6580 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6586 */	NdrFcShort( 0x1a ),	/* 26 */
/* 6588 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6594 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6596 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppChromeWebBrowser */

/* 6606 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6608 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6610 */	NdrFcShort( 0x538 ),	/* Type Offset=1336 */

	/* Return value */

/* 6612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6614 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NavigateNode */

/* 6618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6624 */	NdrFcShort( 0x1b ),	/* 27 */
/* 6626 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6632 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6634 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6638 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 6644 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6646 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6648 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter bstrBrowserID */

/* 6650 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6652 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6654 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 6656 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6658 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6660 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6664 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateWndPage */

/* 6668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6674 */	NdrFcShort( 0x1c ),	/* 28 */
/* 6676 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6678 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6682 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6684 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 6694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6696 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6698 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppWndPage */

/* 6700 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6702 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6704 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */

/* 6706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6708 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateOfficeDocument */

/* 6712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6718 */	NdrFcShort( 0x1d ),	/* 29 */
/* 6720 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6726 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6728 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6732 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 6738 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6740 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6742 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6746 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateCLRObj */

/* 6750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6756 */	NdrFcShort( 0x1e ),	/* 30 */
/* 6758 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6764 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6766 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6770 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6774 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjID */

/* 6776 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6778 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6780 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppDisp */

/* 6782 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6784 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6786 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 6788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6790 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartApplication */

/* 6794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6800 */	NdrFcShort( 0x1f ),	/* 31 */
/* 6802 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6808 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6810 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrAppID */

/* 6820 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6822 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6824 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 6826 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6828 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6830 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6834 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWndFrame */

/* 6838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6844 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6846 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6848 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6852 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6854 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHostWnd */

/* 6864 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6866 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6868 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppFrame */

/* 6870 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6872 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6874 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 6876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6878 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetItemText */

/* 6882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6888 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6890 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 6892 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6896 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6898 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6900 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 6908 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6910 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6912 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter nCtrlID */

/* 6914 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6916 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nMaxLengeh */

/* 6920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6922 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrRet */

/* 6926 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6928 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6930 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 6932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6934 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetItemText */

/* 6938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6944 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6946 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6952 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6954 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 6964 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6966 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6968 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter nCtrlID */

/* 6970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6972 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrText */

/* 6976 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6978 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6980 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 6982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6984 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCLRControl */

/* 6988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6994 */	NdrFcShort( 0x23 ),	/* 35 */
/* 6996 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7002 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7004 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter CtrlDisp */

/* 7014 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7016 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7018 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrName */

/* 7020 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7022 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7024 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetDisp */

/* 7026 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7028 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7030 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 7032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7034 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MessageBox */

/* 7038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7044 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7046 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 7048 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7050 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7052 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7054 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 7064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7066 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7068 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrContext */

/* 7070 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7072 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7074 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrCaption */

/* 7076 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7078 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7080 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nStyle */

/* 7082 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7084 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRet */

/* 7088 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7090 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7096 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Encode */

/* 7100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7106 */	NdrFcShort( 0x25 ),	/* 37 */
/* 7108 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7110 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7114 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7116 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrSRC */

/* 7126 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7130 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bEncode */

/* 7132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7134 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7136 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrRet */

/* 7138 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7140 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7142 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 7144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7146 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetHostFocus */

/* 7150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7156 */	NdrFcShort( 0x26 ),	/* 38 */
/* 7158 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 7166 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 7176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7178 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateWndNode */

/* 7182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7188 */	NdrFcShort( 0x27 ),	/* 39 */
/* 7190 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7196 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7198 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNode */

/* 7208 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7210 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7212 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Return value */

/* 7214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7216 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NewGUID */

/* 7220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7226 */	NdrFcShort( 0x28 ),	/* 40 */
/* 7228 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7234 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7236 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 7246 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7248 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7250 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 7252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7254 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ActiveCLRMethod */

/* 7258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7264 */	NdrFcShort( 0x29 ),	/* 41 */
/* 7266 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7272 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7274 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjID */

/* 7284 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7286 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7288 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrMethod */

/* 7290 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7292 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7294 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrParam */

/* 7296 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7298 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7300 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrData */

/* 7302 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7304 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7306 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 7308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7310 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetObject */

/* 7314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7320 */	NdrFcShort( 0x2a ),	/* 42 */
/* 7322 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7328 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7330 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SourceDisp */

/* 7340 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7342 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7344 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ResultDisp */

/* 7346 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 7348 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7350 */	NdrFcShort( 0x54e ),	/* Type Offset=1358 */

	/* Return value */

/* 7352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7354 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DownLoadFile */

/* 7358 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7364 */	NdrFcShort( 0x2b ),	/* 43 */
/* 7366 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7372 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7374 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strFileURL */

/* 7384 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7386 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7388 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTargetFile */

/* 7390 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7392 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7394 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrActionXml */

/* 7396 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7398 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7400 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 7402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7404 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlByName */

/* 7408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7414 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7416 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7418 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7422 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7424 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCtrl */

/* 7434 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7436 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7438 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrName */

/* 7440 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7442 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7444 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 7446 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7448 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7450 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppCtrlDisp */

/* 7452 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7454 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7456 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 7458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7460 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNodeFromHandle */

/* 7464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7470 */	NdrFcShort( 0x2d ),	/* 45 */
/* 7472 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7474 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7478 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7480 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 7490 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7492 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7494 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppRetNode */

/* 7496 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7498 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7500 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 7502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7504 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlValueByName */

/* 7508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7514 */	NdrFcShort( 0x2e ),	/* 46 */
/* 7516 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7518 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7522 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7524 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7526 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7528 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCtrl */

/* 7534 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7536 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7538 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrName */

/* 7540 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7542 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7544 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 7546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7548 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7550 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 7552 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7554 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7556 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 7558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7560 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCtrlValueByName */

/* 7564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7570 */	NdrFcShort( 0x2f ),	/* 47 */
/* 7572 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7574 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7578 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7580 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7584 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCtrl */

/* 7590 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7592 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7594 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrName */

/* 7596 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7598 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7600 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bFindInChild */

/* 7602 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7604 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7606 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 7608 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7610 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7612 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 7614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7616 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateTangramCtrl */

/* 7620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7626 */	NdrFcShort( 0x30 ),	/* 48 */
/* 7628 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7634 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7636 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7640 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrAppID */

/* 7646 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7648 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7650 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetCtrl */

/* 7652 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7654 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7656 */	NdrFcShort( 0x552 ),	/* Type Offset=1362 */

	/* Return value */

/* 7658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7660 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachObjEvent */

/* 7664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7670 */	NdrFcShort( 0x31 ),	/* 49 */
/* 7672 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7678 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7680 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pDisp */

/* 7690 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7692 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7694 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nEventIndex */

/* 7696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7698 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7704 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowClientDefaultNode */

/* 7708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7714 */	NdrFcShort( 0x32 ),	/* 50 */
/* 7716 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 7718 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7722 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7724 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7728 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAddDisp */

/* 7734 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7736 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7738 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter hParent */

/* 7740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7742 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7744 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrWndClaName */

/* 7746 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7748 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7750 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrWndPageName */

/* 7752 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7754 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7756 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 7758 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7760 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7762 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 7764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7766 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDocTemplateXml */

/* 7770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7776 */	NdrFcShort( 0x33 ),	/* 51 */
/* 7778 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7784 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7786 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7788 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCaption */

/* 7796 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7798 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7800 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPath */

/* 7802 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7804 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7806 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrFilter */

/* 7808 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7810 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7812 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTemplatePath */

/* 7814 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7816 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7818 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 7820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7822 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenTangramFile */

/* 7826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7832 */	NdrFcShort( 0x34 ),	/* 52 */
/* 7834 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7840 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7842 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppDoc */

/* 7852 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7854 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7856 */	NdrFcShort( 0x522 ),	/* Type Offset=1314 */

	/* Return value */

/* 7858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7860 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateTangramEventObj */

/* 7864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7870 */	NdrFcShort( 0x35 ),	/* 53 */
/* 7872 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7878 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7880 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppTangramEventObj */

/* 7890 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7892 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7894 */	NdrFcShort( 0x568 ),	/* Type Offset=1384 */

	/* Return value */

/* 7896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7898 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FireTangramEventObj */

/* 7902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7908 */	NdrFcShort( 0x36 ),	/* 54 */
/* 7910 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7916 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7918 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTangramEventObj */

/* 7928 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7930 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7932 */	NdrFcShort( 0x56c ),	/* Type Offset=1388 */

	/* Return value */

/* 7934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7936 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendFrames */

/* 7940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7946 */	NdrFcShort( 0x37 ),	/* 55 */
/* 7948 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 7950 */	NdrFcShort( 0x16 ),	/* 22 */
/* 7952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7954 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7956 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 7966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7970 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrFrames */

/* 7972 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7974 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7976 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 7978 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7980 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7982 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 7984 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7986 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7988 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSaveToConfigFile */

/* 7990 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7992 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7994 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7998 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeletePage */

/* 8002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8008 */	NdrFcShort( 0x38 ),	/* 56 */
/* 8010 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8012 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8016 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8018 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PageHandle */

/* 8028 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8030 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8032 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8036 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadDocComponent */

/* 8040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8046 */	NdrFcShort( 0x39 ),	/* 57 */
/* 8048 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8052 */	NdrFcShort( 0x2c ),	/* 44 */
/* 8054 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8056 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8060 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8064 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrLib */

/* 8066 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8068 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8070 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter llAppProxy */

/* 8072 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8074 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8076 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8080 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenTangramDocFile */

/* 8084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8090 */	NdrFcShort( 0x3a ),	/* 58 */
/* 8092 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8098 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8100 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8104 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFilePath */

/* 8110 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8112 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8114 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppDoc */

/* 8116 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8118 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8120 */	NdrFcShort( 0x522 ),	/* Type Offset=1314 */

	/* Return value */

/* 8122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8124 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateOutLookObj */

/* 8128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8134 */	NdrFcShort( 0x3b ),	/* 59 */
/* 8136 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8142 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8144 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjType */

/* 8154 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8156 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8158 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nType */

/* 8160 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8162 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrURL */

/* 8166 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8168 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8170 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetDisp */

/* 8172 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8174 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8176 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 8178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8180 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NewWorkBench */

/* 8184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8190 */	NdrFcShort( 0x3c ),	/* 60 */
/* 8192 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8198 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8200 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8204 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrTangramDoc */

/* 8210 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8212 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8214 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppWorkBenchWindow */

/* 8216 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8218 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8220 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 8222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8224 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadTextFromWeb */

/* 8228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8234 */	NdrFcShort( 0x3d ),	/* 61 */
/* 8236 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 8238 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 8244 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 8254 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8256 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8258 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrOrg */

/* 8260 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8262 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8264 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRepo */

/* 8266 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8268 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8270 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrBranch */

/* 8272 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8274 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8276 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrFile */

/* 8278 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8280 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8282 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrTarget */

/* 8284 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8286 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8288 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter hNotify */

/* 8290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8292 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 8294 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8298 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 8300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ClearHeader */

/* 8302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8308 */	NdrFcShort( 0x3e ),	/* 62 */
/* 8310 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8316 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8318 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8330 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteFrame */

/* 8334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8340 */	NdrFcShort( 0x3f ),	/* 63 */
/* 8342 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8348 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8350 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWndFrame */

/* 8360 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8362 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8364 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Return value */

/* 8366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8368 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitEclipseApp */

/* 8372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8378 */	NdrFcShort( 0x40 ),	/* 64 */
/* 8380 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8386 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8388 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8400 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramCommand */

/* 8404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8410 */	NdrFcShort( 0x42 ),	/* 66 */
/* 8412 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8418 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8420 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8430 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8434 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 8436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8438 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetImage */

/* 8442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8448 */	NdrFcShort( 0x43 ),	/* 67 */
/* 8450 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8456 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8458 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strValue */

/* 8468 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8470 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8472 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppdispImage */

/* 8474 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8476 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8478 */	NdrFcShort( 0x57e ),	/* Type Offset=1406 */

	/* Return value */

/* 8480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8482 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetVisible */

/* 8486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8492 */	NdrFcShort( 0x44 ),	/* 68 */
/* 8494 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8500 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8502 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8512 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8514 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8516 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter varVisible */

/* 8518 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 8520 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8522 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 8524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8526 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramOnLoad */

/* 8530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8536 */	NdrFcShort( 0x45 ),	/* 69 */
/* 8538 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8544 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8546 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8556 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8558 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8560 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 8562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8564 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetItemCount */

/* 8568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8574 */	NdrFcShort( 0x46 ),	/* 70 */
/* 8576 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8580 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8582 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8584 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8594 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8596 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8598 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nCount */

/* 8600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8602 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8608 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetItemLabel */

/* 8612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8618 */	NdrFcShort( 0x47 ),	/* 71 */
/* 8620 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8626 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8628 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8630 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8638 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8640 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8642 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nIndex */

/* 8644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8646 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrLabel */

/* 8650 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8652 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8654 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 8656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8658 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TangramGetItemID */

/* 8662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8668 */	NdrFcShort( 0x48 ),	/* 72 */
/* 8670 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8676 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8678 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8680 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 8688 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8690 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8692 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nIndex */

/* 8694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8696 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrID */

/* 8700 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 8702 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8704 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 8706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8708 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndNode */

/* 8712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8718 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8720 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8726 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8728 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 8730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8732 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 8738 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8740 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8742 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter ppNode */

/* 8744 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8746 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8748 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 8750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8752 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VisibleNode */

/* 8756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8762 */	NdrFcShort( 0xa ),	/* 10 */
/* 8764 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8770 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8772 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8782 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8784 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8786 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 8788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8790 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndPage */


	/* Procedure get_WndPage */

/* 8794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8800 */	NdrFcShort( 0xc ),	/* 12 */
/* 8802 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8808 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8810 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 8820 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8822 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8824 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */


	/* Return value */

/* 8826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8828 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FrameData */

/* 8832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8838 */	NdrFcShort( 0xd ),	/* 13 */
/* 8840 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8846 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8848 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 8850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 8858 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8860 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8862 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 8864 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 8866 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8868 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 8870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8872 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_FrameData */

/* 8876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8882 */	NdrFcShort( 0xe ),	/* 14 */
/* 8884 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8890 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8892 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 8894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 8902 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8904 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8906 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 8908 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8910 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8912 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 8914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8916 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DesignerState */

/* 8920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8926 */	NdrFcShort( 0xf ),	/* 15 */
/* 8928 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8932 */	NdrFcShort( 0x22 ),	/* 34 */
/* 8934 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8936 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8946 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8948 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8950 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8954 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DesignerState */

/* 8958 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8964 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8966 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8968 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8970 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8972 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8974 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 8984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8986 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8988 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8992 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */

/* 8996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9002 */	NdrFcShort( 0x11 ),	/* 17 */
/* 9004 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9008 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9010 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9012 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */

/* 9022 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9024 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9030 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RootNodes */

/* 9034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9040 */	NdrFcShort( 0x12 ),	/* 18 */
/* 9042 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9048 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9050 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppNodeColletion */

/* 9060 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9062 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9064 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Return value */

/* 9066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9068 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramDoc */

/* 9072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9078 */	NdrFcShort( 0x14 ),	/* 20 */
/* 9080 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9086 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9088 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9098 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9100 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9102 */	NdrFcShort( 0x522 ),	/* Type Offset=1314 */

	/* Return value */

/* 9104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9106 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FrameType */

/* 9110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9116 */	NdrFcShort( 0x15 ),	/* 21 */
/* 9118 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9122 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9124 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9126 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9136 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 9138 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9140 */	NdrFcShort( 0x4dc ),	/* Type Offset=1244 */

	/* Return value */

/* 9142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9144 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 9148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9154 */	NdrFcShort( 0x16 ),	/* 22 */
/* 9156 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9162 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9164 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9174 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9176 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9178 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9182 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Detach */

/* 9186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9192 */	NdrFcShort( 0x17 ),	/* 23 */
/* 9194 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9200 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 9202 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 9212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9214 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Attach */

/* 9218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9224 */	NdrFcShort( 0x18 ),	/* 24 */
/* 9226 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9232 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 9234 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 9244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9246 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ModifyHost */

/* 9250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9256 */	NdrFcShort( 0x19 ),	/* 25 */
/* 9258 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9260 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9264 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9266 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHostWnd */

/* 9276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9280 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 9282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 9288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9294 */	NdrFcShort( 0x1a ),	/* 26 */
/* 9296 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9302 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9304 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9308 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 9314 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9316 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9318 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 9320 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9322 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9324 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 9326 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9328 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9330 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 9332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9334 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetXml */

/* 9338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9344 */	NdrFcShort( 0x1b ),	/* 27 */
/* 9346 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9352 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9354 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrRootName */

/* 9364 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9366 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9368 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRet */

/* 9370 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9372 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9374 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9378 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendFromWeb */

/* 9382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9388 */	NdrFcShort( 0x1c ),	/* 28 */
/* 9390 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 9392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9396 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 9398 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURLBase */

/* 9408 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9410 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9412 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 9414 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9416 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9418 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrOrg */

/* 9420 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9422 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9424 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrRepo */

/* 9426 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9428 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9430 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrBranch */

/* 9432 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9434 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9436 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrPath */

/* 9438 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9440 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 9442 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 9444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9446 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 9448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendIPCMessage */

/* 9450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9456 */	NdrFcShort( 0x1d ),	/* 29 */
/* 9458 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9464 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9466 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9470 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MessageType */

/* 9476 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9478 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrMessage */

/* 9482 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9484 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9486 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrMessageData */

/* 9488 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9490 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9492 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 9494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9496 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendToBackgroundWebProxy */

/* 9500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9506 */	NdrFcShort( 0x1e ),	/* 30 */
/* 9508 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9514 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9516 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9520 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrType */

/* 9526 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9528 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9530 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 9532 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9534 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9536 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrData */

/* 9538 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9540 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9542 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 9544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9546 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Dispatch */

/* 9550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9556 */	NdrFcShort( 0x1f ),	/* 31 */
/* 9558 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 9560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9562 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9564 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 9566 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9570 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 9576 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9578 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9580 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrLayerName */

/* 9582 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9584 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9586 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrNodeName */

/* 9588 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9590 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9592 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrChannel */

/* 9594 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9596 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9598 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrArg1 */

/* 9600 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9602 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9604 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrArg2 */

/* 9606 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9608 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 9610 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 9612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9614 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 9616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NodeCount */

/* 9618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9624 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9626 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9630 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9632 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9634 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */

/* 9644 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9646 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9650 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9652 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 9656 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9664 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9670 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 9672 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9680 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iIndex */

/* 9682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9684 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppTopWindow */

/* 9688 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9690 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9692 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 9694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9696 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 9700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9706 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9708 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9714 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9716 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 9726 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9728 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9730 */	NdrFcShort( 0x472 ),	/* Type Offset=1138 */

	/* Return value */

/* 9732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9734 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Frame */

/* 9738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9744 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9746 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9752 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9754 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 9756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 9764 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9766 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9768 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter ppFrame */

/* 9770 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9772 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9774 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 9776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9778 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_URL */

/* 9782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9788 */	NdrFcShort( 0xa ),	/* 10 */
/* 9790 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9796 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9798 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9800 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9808 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9812 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9816 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EnableSinkCLRCtrlCreatedEvent */

/* 9820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9826 */	NdrFcShort( 0xc ),	/* 12 */
/* 9828 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9832 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9834 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9836 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 9846 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9848 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9850 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9854 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EnableSinkCLRCtrlCreatedEvent */

/* 9858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9864 */	NdrFcShort( 0xd ),	/* 13 */
/* 9866 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9868 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9872 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9874 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 9884 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9888 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9892 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_xtml */

/* 9896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9902 */	NdrFcShort( 0xe ),	/* 14 */
/* 9904 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9910 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9912 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9914 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9916 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9920 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strKey */

/* 9922 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9924 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9926 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 9928 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9930 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9932 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 9934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9936 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_xtml */

/* 9940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9946 */	NdrFcShort( 0xf ),	/* 15 */
/* 9948 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9954 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9956 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9960 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strKey */

/* 9966 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9970 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 9972 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9974 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9976 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 9978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9980 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Extender */

/* 9984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9990 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9992 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9998 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10000 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrExtenderName */

/* 10010 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10012 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10014 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 10016 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10018 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10020 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 10022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10024 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Extender */

/* 10028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10034 */	NdrFcShort( 0x11 ),	/* 17 */
/* 10036 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10042 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10044 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrExtenderName */

/* 10054 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10056 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10058 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 10060 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10062 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10064 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 10066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10068 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FrameName */

/* 10072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10078 */	NdrFcShort( 0x12 ),	/* 18 */
/* 10080 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10082 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10086 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 10088 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10090 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHwnd */

/* 10098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10100 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10102 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 10104 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10106 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10108 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 10110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10112 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndFrame */

/* 10116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10122 */	NdrFcShort( 0x13 ),	/* 19 */
/* 10124 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10130 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10132 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 10142 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10144 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10146 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 10148 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10150 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10152 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 10154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10156 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Node */

/* 10160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10166 */	NdrFcShort( 0x14 ),	/* 20 */
/* 10168 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10174 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10176 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNodeName */

/* 10186 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10190 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 10192 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10194 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10196 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 10198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10200 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XObject */

/* 10204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10210 */	NdrFcShort( 0x15 ),	/* 21 */
/* 10212 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10218 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10220 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 10230 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10232 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10234 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 10236 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10238 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10240 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 10242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10244 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HtmlDocument */

/* 10248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10254 */	NdrFcShort( 0x16 ),	/* 22 */
/* 10256 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10262 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10264 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10274 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10276 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10278 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 10280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10282 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Height */

/* 10286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10292 */	NdrFcShort( 0x19 ),	/* 25 */
/* 10294 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10298 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10300 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10302 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10312 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10314 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10320 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Height */

/* 10324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10330 */	NdrFcShort( 0x1a ),	/* 26 */
/* 10332 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10340 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 10350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10352 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10358 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NodeNames */

/* 10362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10368 */	NdrFcShort( 0x1b ),	/* 27 */
/* 10370 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10376 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10378 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10380 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10388 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10390 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10392 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 10394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10396 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HTMLWindow */

/* 10400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10406 */	NdrFcShort( 0x1c ),	/* 28 */
/* 10408 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10414 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10416 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10420 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter NodeName */

/* 10426 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10428 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10430 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 10432 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10434 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10436 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 10438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10440 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Parent */

/* 10444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10450 */	NdrFcShort( 0x1d ),	/* 29 */
/* 10452 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10458 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10460 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10470 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10472 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10474 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */

/* 10476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10478 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_External */

/* 10482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10488 */	NdrFcShort( 0x1e ),	/* 30 */
/* 10490 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10494 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10496 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10498 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 10508 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10510 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10512 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 10514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10516 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_External */

/* 10520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10526 */	NdrFcShort( 0x1f ),	/* 31 */
/* 10528 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10534 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10536 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 10546 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10548 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10550 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 10552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10554 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Handle */

/* 10558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10564 */	NdrFcShort( 0x20 ),	/* 32 */
/* 10566 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10570 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10572 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10574 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10586 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10588 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 10590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10592 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PageXML */

/* 10596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10602 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10604 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10610 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10612 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10622 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10624 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10626 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 10628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10630 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ConfigName */

/* 10634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10640 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10642 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10648 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10650 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10654 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 10660 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10662 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10664 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 10666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10668 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentDesignFrameType */

/* 10672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10678 */	NdrFcShort( 0x23 ),	/* 35 */
/* 10680 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10684 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10686 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10688 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10698 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 10700 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10702 */	NdrFcShort( 0x4dc ),	/* Type Offset=1244 */

	/* Return value */

/* 10704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10706 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentDesignNode */

/* 10710 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10716 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10718 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10724 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10726 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 10736 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10738 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10740 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 10742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10744 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFrame */

/* 10748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10754 */	NdrFcShort( 0x25 ),	/* 37 */
/* 10756 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10762 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10764 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 10766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ParentObj */

/* 10774 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10776 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10778 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter HostWnd */

/* 10780 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10782 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10784 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter bstrFrameName */

/* 10786 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10788 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10790 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pRetFrame */

/* 10792 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10794 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10796 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 10798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10800 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddObject */

/* 10804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10810 */	NdrFcShort( 0x26 ),	/* 38 */
/* 10812 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 10814 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10816 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10818 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 10820 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pHtmlDoc */

/* 10830 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10832 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10834 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter pObject */

/* 10836 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10838 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10840 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrObjName */

/* 10842 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10844 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10846 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSinkEvent */

/* 10848 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10850 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10852 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bResult */

/* 10854 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10856 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10858 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10862 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddObjToHtml */

/* 10866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10872 */	NdrFcShort( 0x27 ),	/* 39 */
/* 10874 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10876 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10880 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10882 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10886 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strObjName */

/* 10892 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10894 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10896 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bConnectEvent */

/* 10898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10900 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10902 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pObjDisp */

/* 10904 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10906 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10908 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 10910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10912 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNodesToPage */

/* 10916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10922 */	NdrFcShort( 0x28 ),	/* 40 */
/* 10924 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10926 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10928 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10930 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10932 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10936 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10940 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pHtmlDoc */

/* 10942 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10944 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10946 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrNodeNames */

/* 10948 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10950 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10952 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bAdd */

/* 10954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10956 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10958 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bSuccess */

/* 10960 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10962 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10964 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10968 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachObjEvent */

/* 10972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10978 */	NdrFcShort( 0x29 ),	/* 41 */
/* 10980 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10986 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 10988 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter HTMLWindow */

/* 10998 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11000 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11002 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter SourceObj */

/* 11004 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11006 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11008 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bstrEventName */

/* 11010 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11012 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11014 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter AliasName */

/* 11016 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11018 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11020 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 11022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11024 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachNodeSubCtrlEvent */

/* 11028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11034 */	NdrFcShort( 0x2a ),	/* 42 */
/* 11036 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 11038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11042 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 11044 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 11046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter HtmlWndDisp */

/* 11054 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11056 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11058 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter Node */

/* 11060 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 11062 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11064 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter Ctrl */

/* 11066 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 11068 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11070 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter EventName */

/* 11072 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11074 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11076 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter AliasName */

/* 11078 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11080 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11082 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 11084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11086 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachEvent */

/* 11090 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11096 */	NdrFcShort( 0x2b ),	/* 43 */
/* 11098 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11102 */	NdrFcShort( 0x22 ),	/* 34 */
/* 11104 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11106 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNames */

/* 11116 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11118 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11120 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pHtmlWnd */

/* 11122 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11124 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11126 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter bResult */

/* 11128 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11130 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11132 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11136 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachNodeEvent */

/* 11140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11146 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11148 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11154 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11156 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNames */

/* 11166 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11168 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11170 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pWndDisp */

/* 11172 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11174 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11176 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 11178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11180 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 11184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11190 */	NdrFcShort( 0x2d ),	/* 45 */
/* 11192 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 11194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11198 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 11200 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11204 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Parent */

/* 11210 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11212 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11214 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter CtrlName */

/* 11216 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11218 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11220 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FrameName */

/* 11222 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11224 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11226 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 11228 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11230 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11232 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11234 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11236 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11238 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 11240 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11242 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11244 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11248 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 11250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendCtrl */

/* 11252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11258 */	NdrFcShort( 0x2e ),	/* 46 */
/* 11260 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11266 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 11268 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 11270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11272 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Ctrl */

/* 11278 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 11280 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11282 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter bstrKey */

/* 11284 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11286 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11288 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11290 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11292 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11294 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 11296 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11298 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11300 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11304 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWndNode */

/* 11308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11314 */	NdrFcShort( 0x2f ),	/* 47 */
/* 11316 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11322 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11324 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11328 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 11334 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11336 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11338 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrNodeName */

/* 11340 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11342 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11344 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pRetNode */

/* 11346 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11348 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11350 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11354 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlInNode */

/* 11358 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11364 */	NdrFcShort( 0x30 ),	/* 48 */
/* 11366 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11372 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11374 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter NodeName */

/* 11384 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11386 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11388 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter CtrlName */

/* 11390 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11392 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11394 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppCtrl */

/* 11396 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11398 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11400 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 11402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11404 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetHtmlDocument */

/* 11408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11414 */	NdrFcShort( 0x31 ),	/* 49 */
/* 11416 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11422 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11424 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter HtmlWindow */

/* 11434 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11436 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11438 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppHtmlDoc */

/* 11440 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11442 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11444 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 11446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11448 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameFromCtrl */

/* 11452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11458 */	NdrFcShort( 0x32 ),	/* 50 */
/* 11460 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11466 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11468 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ctrl */

/* 11478 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11480 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11482 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter ppFrame */

/* 11484 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11486 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11488 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 11490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11492 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConnectTangramCtrl */

/* 11496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11502 */	NdrFcShort( 0x33 ),	/* 51 */
/* 11504 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11510 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11512 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eventSource */

/* 11522 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11524 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11526 */	NdrFcShort( 0x556 ),	/* Type Offset=1366 */

	/* Return value */

/* 11528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11530 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFrameWithDefaultNode */

/* 11534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11540 */	NdrFcShort( 0x34 ),	/* 52 */
/* 11542 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 11544 */	NdrFcShort( 0x16 ),	/* 22 */
/* 11546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11548 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 11550 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hFrameWnd */

/* 11560 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11562 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11564 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrFrameName */

/* 11566 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11568 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11570 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrDefaultNodeKey */

/* 11572 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11574 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11576 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11578 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11580 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11582 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSaveToConfig */

/* 11584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11586 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11588 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppNode */

/* 11590 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11592 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11594 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11598 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 11600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendFrames */

/* 11602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11608 */	NdrFcShort( 0x35 ),	/* 53 */
/* 11610 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11612 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11616 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 11618 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrames */

/* 11628 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11630 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11632 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 11634 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11636 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11638 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11640 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11642 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11644 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bSaveToConfigFile */

/* 11646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11648 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11650 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 11652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11654 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterExtendableTarget */

/* 11658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11664 */	NdrFcShort( 0x36 ),	/* 54 */
/* 11666 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11672 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11674 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11678 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrTargetID */

/* 11684 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11686 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11688 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pCtrl */

/* 11690 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11692 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11694 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 11696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11698 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Ctrl */

/* 11702 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11708 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11710 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11716 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11718 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 11720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 11728 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 11730 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11732 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Parameter ppCtrl */

/* 11734 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11736 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11738 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Return value */

/* 11740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11742 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TangramCtrl */

/* 11746 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11752 */	NdrFcShort( 0xb ),	/* 11 */
/* 11754 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11756 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11760 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 11762 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 11772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11774 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11776 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 11778 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11780 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11782 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Return value */

/* 11784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11786 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndFrame */

/* 11790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11796 */	NdrFcShort( 0xd ),	/* 13 */
/* 11798 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11804 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11806 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 11816 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11818 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11820 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 11822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11824 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Active */

/* 11828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11834 */	NdrFcShort( 0xe ),	/* 14 */
/* 11836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11842 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 11844 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 11854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11856 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CloseTangramUI */

/* 11860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11866 */	NdrFcShort( 0xf ),	/* 15 */
/* 11868 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11874 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 11876 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11884 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 11886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11888 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 11892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11898 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11900 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11906 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 11908 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11912 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 11918 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11920 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11922 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11924 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11926 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11928 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 11930 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11932 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11934 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11938 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendInView */

/* 11942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11948 */	NdrFcShort( 0x12 ),	/* 18 */
/* 11950 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11956 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 11958 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 11960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 11968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11970 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 11974 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11976 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11978 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 11980 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 11982 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11984 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppRetNode */

/* 11986 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11988 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11990 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 11992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11994 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenURL */

/* 11998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12004 */	NdrFcShort( 0x7 ),	/* 7 */
/* 12006 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 12008 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12012 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 12014 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12018 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12022 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 12024 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12026 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12028 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter nDisposition */

/* 12030 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12032 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12034 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 12036 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12038 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12040 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 12042 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12044 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12046 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 12048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12050 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 12052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Show */

/* 12054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12060 */	NdrFcShort( 0x7 ),	/* 7 */
/* 12062 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12064 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12068 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12070 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bShow */

/* 12080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12082 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12084 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12088 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 12092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12100 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 12102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12106 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 12108 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 12118 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12120 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12122 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 12124 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12126 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12128 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 12130 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12132 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12134 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 12136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12138 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnloadTangram */

/* 12142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12148 */	NdrFcShort( 0x9 ),	/* 9 */
/* 12150 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12156 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 12158 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 12168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12170 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HWND */

/* 12174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12180 */	NdrFcShort( 0x7 ),	/* 7 */
/* 12182 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12186 */	NdrFcShort( 0x2c ),	/* 44 */
/* 12188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12190 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12200 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12202 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12204 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 12206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12208 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tangram */

/* 12212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12220 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12226 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12228 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12238 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12240 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12242 */	NdrFcShort( 0x49e ),	/* Type Offset=1182 */

	/* Return value */

/* 12244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12246 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_tag */

/* 12250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12256 */	NdrFcShort( 0x9 ),	/* 9 */
/* 12258 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12264 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12266 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12276 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 12278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12280 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 12282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_tag */

/* 12288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12294 */	NdrFcShort( 0xa ),	/* 10 */
/* 12296 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12302 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12304 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 12306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12308 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 12314 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 12316 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12318 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 12320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12322 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppCtrl */

/* 12326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12332 */	NdrFcShort( 0xb ),	/* 11 */
/* 12334 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12336 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12340 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12342 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 12352 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12354 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12356 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12360 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramHandle */

/* 12364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12370 */	NdrFcShort( 0xb ),	/* 11 */
/* 12372 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12374 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12378 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12380 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrHandleName */

/* 12390 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12392 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12394 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 12396 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12398 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12400 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 12402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12404 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EclipseViewHandle */

/* 12408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12414 */	NdrFcShort( 0xc ),	/* 12 */
/* 12416 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12420 */	NdrFcShort( 0x2c ),	/* 44 */
/* 12422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12424 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12434 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12436 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12438 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 12440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12442 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WndPage */

/* 12446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12452 */	NdrFcShort( 0xd ),	/* 13 */
/* 12454 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12460 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12462 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12472 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12474 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12476 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */

/* 12478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12480 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WorkBenchWindow */

/* 12484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12490 */	NdrFcShort( 0xe ),	/* 14 */
/* 12492 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12498 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12500 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12510 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12512 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12514 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 12516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12518 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TopFrame */

/* 12522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12528 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12530 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12536 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12538 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12548 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12550 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12552 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Return value */

/* 12554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12556 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActiveTopNode */

/* 12560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12566 */	NdrFcShort( 0x11 ),	/* 17 */
/* 12568 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12574 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12576 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12584 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 12586 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12588 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12590 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 12592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12594 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AppKeyValue */

/* 12598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12604 */	NdrFcShort( 0x12 ),	/* 18 */
/* 12606 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12612 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12614 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 12616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 12624 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12626 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12628 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 12630 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 12632 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12634 */	NdrFcShort( 0x4bc ),	/* Type Offset=1212 */

	/* Return value */

/* 12636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppKeyValue */

/* 12642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12648 */	NdrFcShort( 0x13 ),	/* 19 */
/* 12650 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12656 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12658 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 12660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12662 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 12668 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12670 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12672 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter newVal */

/* 12674 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 12676 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12678 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */

	/* Return value */

/* 12680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12682 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Extend */

/* 12686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12692 */	NdrFcShort( 0x14 ),	/* 20 */
/* 12694 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 12696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12700 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 12702 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 12712 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12714 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12716 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 12718 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12720 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12722 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 12724 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12726 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12728 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 12730 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12732 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12734 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 12736 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12738 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 12740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ExtendEx */

/* 12742 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12748 */	NdrFcShort( 0x15 ),	/* 21 */
/* 12750 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 12752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12756 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 12758 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12762 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrFrameName */

/* 12768 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12770 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12772 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrKey */

/* 12774 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12776 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12778 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter bstrXml */

/* 12780 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 12782 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12784 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppNode */

/* 12786 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12788 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12790 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 12792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12794 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 12796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AttachCLRObjEvent */

/* 12798 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12804 */	NdrFcShort( 0x17 ),	/* 23 */
/* 12806 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 12808 */	NdrFcShort( 0xc ),	/* 12 */
/* 12810 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12812 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 12814 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Sender */

/* 12824 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12826 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 12828 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter nEventType */

/* 12830 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12832 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 12834 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter bAttachEvent */

/* 12836 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12838 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 12840 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 12842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12844 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 12846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ChromeAppServer_MIDL_TYPE_FORMAT_STRING ChromeAppServer__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x8 ),	/* 8 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 40 */	NdrFcShort( 0x2 ),	/* Offset= 2 (42) */
/* 42 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 44 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 48 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 50 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 52 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 54 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 56 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 58 */	0x5d,		/* 93 */
			0x34,		/* 52 */
/* 60 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 62 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 72 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 74 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 76 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 78 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 80 */	NdrFcShort( 0x2 ),	/* Offset= 2 (82) */
/* 82 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 84 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 88 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 90 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 92 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 94 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 96 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 98 */	0x0,		/* 0 */
			0x4,		/* 4 */
/* 100 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (104) */
/* 104 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 106 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 110 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 112 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 114 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 116 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 118 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 120 */	0x0,		/* 0 */
			0x3,		/* 3 */
/* 122 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 124 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (60) */
/* 126 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 128 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 130 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 132 */	NdrFcShort( 0x6 ),	/* Offset= 6 (138) */
/* 134 */	
			0x13, 0x0,	/* FC_OP */
/* 136 */	NdrFcShort( 0xff8a ),	/* Offset= -118 (18) */
/* 138 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (134) */
/* 148 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 150 */	NdrFcShort( 0x2 ),	/* Offset= 2 (152) */
/* 152 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 154 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 158 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 160 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 162 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 164 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 166 */	0x20,		/* 32 */
			0x17,		/* 23 */
/* 168 */	0xf7,		/* 247 */
			0xcd,		/* 205 */
/* 170 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 172 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 174 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 176 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 180 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 182 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 184 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 186 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 188 */	0x20,		/* 32 */
			0x17,		/* 23 */
/* 190 */	0x6c,		/* 108 */
			0x7d,		/* 125 */
/* 192 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 194 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 196 */	
			0x11, 0x0,	/* FC_RP */
/* 198 */	NdrFcShort( 0x3a2 ),	/* Offset= 930 (1128) */
/* 200 */	
			0x12, 0x0,	/* FC_UP */
/* 202 */	NdrFcShort( 0x38a ),	/* Offset= 906 (1108) */
/* 204 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 206 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 208 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 210 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 212 */	NdrFcShort( 0x2 ),	/* Offset= 2 (214) */
/* 214 */	NdrFcShort( 0x10 ),	/* 16 */
/* 216 */	NdrFcShort( 0x2f ),	/* 47 */
/* 218 */	NdrFcLong( 0x14 ),	/* 20 */
/* 222 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 224 */	NdrFcLong( 0x3 ),	/* 3 */
/* 228 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 230 */	NdrFcLong( 0x11 ),	/* 17 */
/* 234 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 236 */	NdrFcLong( 0x2 ),	/* 2 */
/* 240 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 242 */	NdrFcLong( 0x4 ),	/* 4 */
/* 246 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 248 */	NdrFcLong( 0x5 ),	/* 5 */
/* 252 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 254 */	NdrFcLong( 0xb ),	/* 11 */
/* 258 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 260 */	NdrFcLong( 0xa ),	/* 10 */
/* 264 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 266 */	NdrFcLong( 0x6 ),	/* 6 */
/* 270 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (502) */
/* 272 */	NdrFcLong( 0x7 ),	/* 7 */
/* 276 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 278 */	NdrFcLong( 0x8 ),	/* 8 */
/* 282 */	NdrFcShort( 0xfee8 ),	/* Offset= -280 (2) */
/* 284 */	NdrFcLong( 0xd ),	/* 13 */
/* 288 */	NdrFcShort( 0xdc ),	/* Offset= 220 (508) */
/* 290 */	NdrFcLong( 0x9 ),	/* 9 */
/* 294 */	NdrFcShort( 0xff16 ),	/* Offset= -234 (60) */
/* 296 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 300 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (526) */
/* 302 */	NdrFcLong( 0x24 ),	/* 36 */
/* 306 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (1034) */
/* 308 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 312 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (1034) */
/* 314 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 318 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (1038) */
/* 320 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 324 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (1042) */
/* 326 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 330 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (1046) */
/* 332 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 336 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (1050) */
/* 338 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 342 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (1054) */
/* 344 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 348 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (1058) */
/* 350 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 354 */	NdrFcShort( 0x2b0 ),	/* Offset= 688 (1042) */
/* 356 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 360 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (1046) */
/* 362 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 366 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (1062) */
/* 368 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 372 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (1058) */
/* 374 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 378 */	NdrFcShort( 0x2b0 ),	/* Offset= 688 (1066) */
/* 380 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 384 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (1070) */
/* 386 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 390 */	NdrFcShort( 0x2ac ),	/* Offset= 684 (1074) */
/* 392 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 396 */	NdrFcShort( 0x2aa ),	/* Offset= 682 (1078) */
/* 398 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 402 */	NdrFcShort( 0x2a8 ),	/* Offset= 680 (1082) */
/* 404 */	NdrFcLong( 0x10 ),	/* 16 */
/* 408 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 410 */	NdrFcLong( 0x12 ),	/* 18 */
/* 414 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 416 */	NdrFcLong( 0x13 ),	/* 19 */
/* 420 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 422 */	NdrFcLong( 0x15 ),	/* 21 */
/* 426 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 428 */	NdrFcLong( 0x16 ),	/* 22 */
/* 432 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 434 */	NdrFcLong( 0x17 ),	/* 23 */
/* 438 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 440 */	NdrFcLong( 0xe ),	/* 14 */
/* 444 */	NdrFcShort( 0x286 ),	/* Offset= 646 (1090) */
/* 446 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 450 */	NdrFcShort( 0x28a ),	/* Offset= 650 (1100) */
/* 452 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 456 */	NdrFcShort( 0x288 ),	/* Offset= 648 (1104) */
/* 458 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 462 */	NdrFcShort( 0x244 ),	/* Offset= 580 (1042) */
/* 464 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 468 */	NdrFcShort( 0x242 ),	/* Offset= 578 (1046) */
/* 470 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 474 */	NdrFcShort( 0x240 ),	/* Offset= 576 (1050) */
/* 476 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 480 */	NdrFcShort( 0x236 ),	/* Offset= 566 (1046) */
/* 482 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 486 */	NdrFcShort( 0x230 ),	/* Offset= 560 (1046) */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x0 ),	/* Offset= 0 (492) */
/* 494 */	NdrFcLong( 0x1 ),	/* 1 */
/* 498 */	NdrFcShort( 0x0 ),	/* Offset= 0 (498) */
/* 500 */	NdrFcShort( 0xffff ),	/* Offset= -1 (499) */
/* 502 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 508 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 520 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 522 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 524 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 526 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 528 */	NdrFcShort( 0x2 ),	/* Offset= 2 (530) */
/* 530 */	
			0x12, 0x0,	/* FC_UP */
/* 532 */	NdrFcShort( 0x1e4 ),	/* Offset= 484 (1016) */
/* 534 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 536 */	NdrFcShort( 0x20 ),	/* 32 */
/* 538 */	NdrFcShort( 0xa ),	/* 10 */
/* 540 */	NdrFcLong( 0x8 ),	/* 8 */
/* 544 */	NdrFcShort( 0x50 ),	/* Offset= 80 (624) */
/* 546 */	NdrFcLong( 0xd ),	/* 13 */
/* 550 */	NdrFcShort( 0x70 ),	/* Offset= 112 (662) */
/* 552 */	NdrFcLong( 0x9 ),	/* 9 */
/* 556 */	NdrFcShort( 0x90 ),	/* Offset= 144 (700) */
/* 558 */	NdrFcLong( 0xc ),	/* 12 */
/* 562 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (738) */
/* 564 */	NdrFcLong( 0x24 ),	/* 36 */
/* 568 */	NdrFcShort( 0x102 ),	/* Offset= 258 (826) */
/* 570 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 574 */	NdrFcShort( 0x11e ),	/* Offset= 286 (860) */
/* 576 */	NdrFcLong( 0x10 ),	/* 16 */
/* 580 */	NdrFcShort( 0x138 ),	/* Offset= 312 (892) */
/* 582 */	NdrFcLong( 0x2 ),	/* 2 */
/* 586 */	NdrFcShort( 0x14e ),	/* Offset= 334 (920) */
/* 588 */	NdrFcLong( 0x3 ),	/* 3 */
/* 592 */	NdrFcShort( 0x164 ),	/* Offset= 356 (948) */
/* 594 */	NdrFcLong( 0x14 ),	/* 20 */
/* 598 */	NdrFcShort( 0x17a ),	/* Offset= 378 (976) */
/* 600 */	NdrFcShort( 0xffff ),	/* Offset= -1 (599) */
/* 602 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 612 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 616 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 618 */	
			0x12, 0x0,	/* FC_UP */
/* 620 */	NdrFcShort( 0xfda6 ),	/* Offset= -602 (18) */
/* 622 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 624 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 626 */	NdrFcShort( 0x10 ),	/* 16 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x6 ),	/* Offset= 6 (636) */
/* 632 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 634 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 636 */	
			0x11, 0x0,	/* FC_RP */
/* 638 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (602) */
/* 640 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 650 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 654 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 656 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 658 */	NdrFcShort( 0xff6a ),	/* Offset= -150 (508) */
/* 660 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 662 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 664 */	NdrFcShort( 0x10 ),	/* 16 */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x6 ),	/* Offset= 6 (674) */
/* 670 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 672 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 674 */	
			0x11, 0x0,	/* FC_RP */
/* 676 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (640) */
/* 678 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 688 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 692 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 694 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 696 */	NdrFcShort( 0xfd84 ),	/* Offset= -636 (60) */
/* 698 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 700 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 702 */	NdrFcShort( 0x10 ),	/* 16 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x6 ),	/* Offset= 6 (712) */
/* 708 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 710 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 712 */	
			0x11, 0x0,	/* FC_RP */
/* 714 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (678) */
/* 716 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 726 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 730 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 732 */	
			0x12, 0x0,	/* FC_UP */
/* 734 */	NdrFcShort( 0x176 ),	/* Offset= 374 (1108) */
/* 736 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 738 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 740 */	NdrFcShort( 0x10 ),	/* 16 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x6 ),	/* Offset= 6 (750) */
/* 746 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 748 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 750 */	
			0x11, 0x0,	/* FC_RP */
/* 752 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (716) */
/* 754 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 756 */	NdrFcLong( 0x2f ),	/* 47 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 766 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 768 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 770 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 772 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 774 */	NdrFcShort( 0x1 ),	/* 1 */
/* 776 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 778 */	NdrFcShort( 0x4 ),	/* 4 */
/* 780 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 782 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 784 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 786 */	NdrFcShort( 0x18 ),	/* 24 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0xa ),	/* Offset= 10 (800) */
/* 792 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 794 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 796 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (754) */
/* 798 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 800 */	
			0x12, 0x0,	/* FC_UP */
/* 802 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (772) */
/* 804 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 814 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 818 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 820 */	
			0x12, 0x0,	/* FC_UP */
/* 822 */	NdrFcShort( 0xffda ),	/* Offset= -38 (784) */
/* 824 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 826 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 828 */	NdrFcShort( 0x10 ),	/* 16 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x6 ),	/* Offset= 6 (838) */
/* 834 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 836 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 838 */	
			0x11, 0x0,	/* FC_RP */
/* 840 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (804) */
/* 842 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 846 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 848 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 850 */	NdrFcShort( 0x10 ),	/* 16 */
/* 852 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 854 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 856 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (842) */
			0x5b,		/* FC_END */
/* 860 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 862 */	NdrFcShort( 0x20 ),	/* 32 */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0xa ),	/* Offset= 10 (876) */
/* 868 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 870 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 872 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (848) */
			0x5b,		/* FC_END */
/* 876 */	
			0x11, 0x0,	/* FC_RP */
/* 878 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (640) */
/* 880 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 882 */	NdrFcShort( 0x1 ),	/* 1 */
/* 884 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 890 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 892 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 894 */	NdrFcShort( 0x10 ),	/* 16 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x6 ),	/* Offset= 6 (904) */
/* 900 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 902 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 904 */	
			0x12, 0x0,	/* FC_UP */
/* 906 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (880) */
/* 908 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 910 */	NdrFcShort( 0x2 ),	/* 2 */
/* 912 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 918 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 920 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 922 */	NdrFcShort( 0x10 ),	/* 16 */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x6 ),	/* Offset= 6 (932) */
/* 928 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 930 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 932 */	
			0x12, 0x0,	/* FC_UP */
/* 934 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (908) */
/* 936 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 938 */	NdrFcShort( 0x4 ),	/* 4 */
/* 940 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 946 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 948 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 950 */	NdrFcShort( 0x10 ),	/* 16 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x6 ),	/* Offset= 6 (960) */
/* 956 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 958 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 960 */	
			0x12, 0x0,	/* FC_UP */
/* 962 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (936) */
/* 964 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 968 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 974 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 976 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 978 */	NdrFcShort( 0x10 ),	/* 16 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x6 ),	/* Offset= 6 (988) */
/* 984 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 986 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 988 */	
			0x12, 0x0,	/* FC_UP */
/* 990 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (964) */
/* 992 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 996 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 998 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1000 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1004 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1006 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 1008 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1010 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1012 */	NdrFcShort( 0xffec ),	/* Offset= -20 (992) */
/* 1014 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1016 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1018 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1020 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1000) */
/* 1022 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1022) */
/* 1024 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1026 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1028 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1030 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0f ),	/* Offset= -497 (534) */
			0x5b,		/* FC_END */
/* 1034 */	
			0x12, 0x0,	/* FC_UP */
/* 1036 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (784) */
/* 1038 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1040 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1042 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1044 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1046 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1048 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1050 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1052 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1054 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1056 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1058 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1060 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1062 */	
			0x12, 0x0,	/* FC_UP */
/* 1064 */	NdrFcShort( 0xfdce ),	/* Offset= -562 (502) */
/* 1066 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1068 */	NdrFcShort( 0xfbd6 ),	/* Offset= -1066 (2) */
/* 1070 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1072 */	NdrFcShort( 0xfdcc ),	/* Offset= -564 (508) */
/* 1074 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1076 */	NdrFcShort( 0xfc08 ),	/* Offset= -1016 (60) */
/* 1078 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1080 */	NdrFcShort( 0xfdd6 ),	/* Offset= -554 (526) */
/* 1082 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1084 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1086) */
/* 1086 */	
			0x12, 0x0,	/* FC_UP */
/* 1088 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1108) */
/* 1090 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1092 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1094 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1096 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1098 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1100 */	
			0x12, 0x0,	/* FC_UP */
/* 1102 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1090) */
/* 1104 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1106 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1108 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1110 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1114) */
/* 1116 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1118 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1120 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1122 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1124 */	NdrFcShort( 0xfc68 ),	/* Offset= -920 (204) */
/* 1126 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1128 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1132 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1136 */	NdrFcShort( 0xfc58 ),	/* Offset= -936 (200) */
/* 1138 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1140 */	NdrFcShort( 0xfd88 ),	/* Offset= -632 (508) */
/* 1142 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1144 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1146 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1148 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1152 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1154 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1156 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1158 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1160 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1162 */	0x83,		/* 131 */
			0xa5,		/* 165 */
/* 1164 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1166 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1170 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1172 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1174 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1176 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1178 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1180 */	0x83,		/* 131 */
			0xa6,		/* 166 */
/* 1182 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1184 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1186) */
/* 1186 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1188 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1192 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1194 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1196 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1198 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1200 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1202 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 1204 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1206 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1212) */
/* 1208 */	
			0x13, 0x0,	/* FC_OP */
/* 1210 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (1108) */
/* 1212 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1216 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1208) */
/* 1222 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1224 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1226) */
/* 1226 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1228 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1232 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1234 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1236 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1238 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1240 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1242 */	0x0,		/* 0 */
			0x17,		/* 23 */
/* 1244 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1246 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 1248 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1250 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1252) */
/* 1252 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1254 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1258 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1260 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1262 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1264 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1266 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1268 */	0x0,		/* 0 */
			0x2,		/* 2 */
/* 1270 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1272 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1274) */
/* 1274 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1276 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1280 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1282 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1284 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1286 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1288 */	0x20,		/* 32 */
			0x17,		/* 23 */
/* 1290 */	0x8,		/* 8 */
			0x24,		/* 36 */
/* 1292 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1294 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1296) */
/* 1296 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1298 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1302 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1304 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1306 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1308 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1310 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1312 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 1314 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1316 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1318) */
/* 1318 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1320 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1324 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1326 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1328 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1330 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1332 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1334 */	0x11,		/* 17 */
			0x1,		/* 1 */
/* 1336 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1338 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1340) */
/* 1340 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1342 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1346 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1348 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1350 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1352 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1354 */	0x20,		/* 32 */
			0x18,		/* 24 */
/* 1356 */	0x8,		/* 8 */
			0x28,		/* 40 */
/* 1358 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1360 */	NdrFcShort( 0xfaec ),	/* Offset= -1300 (60) */
/* 1362 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1364 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1366) */
/* 1366 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1368 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1372 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1374 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1376 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1378 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1380 */	0x20,		/* 32 */
			0x19,		/* 25 */
/* 1382 */	0x3,		/* 3 */
			0x31,		/* 49 */
/* 1384 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1386 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1388) */
/* 1388 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1390 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1394 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1396 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1398 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1400 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1402 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1404 */	0x9,		/* 9 */
			0x28,		/* 40 */
/* 1406 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1408 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1410) */
/* 1410 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1412 */	NdrFcLong( 0x7bf80981 ),	/* 2079852929 */
/* 1416 */	NdrFcShort( 0xbf32 ),	/* -16590 */
/* 1418 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 1420 */	0x8b,		/* 139 */
			0xbb,		/* 187 */
/* 1422 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 1424 */	0x0,		/* 0 */
			0x30,		/* 48 */
/* 1426 */	0xc,		/* 12 */
			0xab,		/* 171 */
/* 1428 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1430 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1432) */
/* 1432 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1434 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1438 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1440 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1442 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1444 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1446 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1448 */	0x9,		/* 9 */
			0x12,		/* 18 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Standard interface: __MIDL_itf_ChromeAppServer_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITangramExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x01,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramExtender_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _ITangramExtenderProxyVtbl = 
{
    &ITangramExtender_ProxyInfo,
    &IID_ITangramExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::Close */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::get_ActiveWorkBenchWindow */
};


static const PRPC_STUB_FUNCTION ITangramExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramExtenderStubVtbl =
{
    &IID_ITangramExtender,
    &ITangramExtender_ServerInfo,
    9,
    &ITangramExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramDesigner, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x17,0x03,0x21}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramDesigner_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramDesigner_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramDesigner_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramDesigner_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramDesigner_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _ITangramDesignerProxyVtbl = 
{
    0,
    &IID_ITangramDesigner,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION ITangramDesigner_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _ITangramDesignerStubVtbl =
{
    &IID_ITangramDesigner,
    &ITangramDesigner_ServerInfo,
    7,
    &ITangramDesigner_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEclipseExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x09,0x18}} */

#pragma code_seg(".orpc")
static const unsigned short IEclipseExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEclipseExtender_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IEclipseExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEclipseExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IEclipseExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IEclipseExtenderProxyVtbl = 
{
    0,
    &IID_IEclipseExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation ITangramExtender::Close */ ,
    0 /* forced delegation ITangramExtender::get_ActiveWorkBenchWindow */
};


static const PRPC_STUB_FUNCTION IEclipseExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEclipseExtenderStubVtbl =
{
    &IID_IEclipseExtender,
    &IEclipseExtender_ServerInfo,
    9,
    &IEclipseExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IOfficeExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x63,0x12,0x22}} */

#pragma code_seg(".orpc")
static const unsigned short IOfficeExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32,
    76,
    126,
    182,
    226,
    270
    };

static const MIDL_STUBLESS_PROXY_INFO IOfficeExtender_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IOfficeExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOfficeExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IOfficeExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IOfficeExtenderProxyVtbl = 
{
    &IOfficeExtender_ProxyInfo,
    &IID_IOfficeExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::Close */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::get_ActiveWorkBenchWindow */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::AddVBAFormsScript */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::InitVBAForm */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::GetFrameFromVBAForm */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::GetActiveTopWndNode */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::GetObjectFromWnd */
};


static const PRPC_STUB_FUNCTION IOfficeExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IOfficeExtenderStubVtbl =
{
    &IID_IOfficeExtender,
    &IOfficeExtender_ServerInfo,
    14,
    &IOfficeExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IVSExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x89,0x07,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short IVSExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32,
    314,
    352,
    390,
    428,
    466,
    504,
    548,
    592,
    630
    };

static const MIDL_STUBLESS_PROXY_INFO IVSExtender_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IVSExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVSExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IVSExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) _IVSExtenderProxyVtbl = 
{
    &IVSExtender_ProxyInfo,
    &IID_IVSExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::Close */ ,
    (void *) (INT_PTR) -1 /* ITangramExtender::get_ActiveWorkBenchWindow */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::get_CurrentDesignNode */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::put_CurrentDesignNode */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::get_DesignNode */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::get_DesignRootNode */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::put_DesignRootNode */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::get_TangramCLRProject */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::put_TangramCLRProject */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::get_CurrentSelectedPrj */ ,
    (void *) (INT_PTR) -1 /* IVSExtender::ExtendXmlUI */
};


static const PRPC_STUB_FUNCTION IVSExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVSExtenderStubVtbl =
{
    &IID_IVSExtender,
    &IVSExtender_ServerInfo,
    18,
    &IVSExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramRestNotify, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x17,0xF7,0xCD}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramRestNotify_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    680
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramRestNotify_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramRestNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramRestNotify_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramRestNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _ITangramRestNotifyProxyVtbl = 
{
    &ITangramRestNotify_ProxyInfo,
    &IID_ITangramRestNotify,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramRestNotify::Notify */
};


static const PRPC_STUB_FUNCTION ITangramRestNotify_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramRestNotifyStubVtbl =
{
    &IID_ITangramRestNotify,
    &ITangramRestNotify_ServerInfo,
    8,
    &ITangramRestNotify_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramRestObj, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x17,0x6C,0x7D}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramRestObj_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    718,
    756,
    794,
    832,
    870,
    914,
    958,
    996,
    1034,
    1072,
    1110,
    1166,
    1204,
    1260,
    1322,
    1354,
    1392,
    1430
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramRestObj_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramRestObj_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramRestObj_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramRestObj_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _ITangramRestObjProxyVtbl = 
{
    &ITangramRestObj_ProxyInfo,
    &IID_ITangramRestObj,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::get_TangramRestNotify */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::put_TangramRestNotify */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::get_NotifyHandle */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::put_NotifyHandle */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::get_Header */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::put_Header */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::get_RestKey */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::put_RestKey */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::get_TangramNode */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::put_TangramNode */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::AsyncRest */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::Notify */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::UploadFile */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::RestData */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::ClearHeaders */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::Clone */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::get_State */ ,
    (void *) (INT_PTR) -1 /* ITangramRestObj::put_State */
};


static const PRPC_STUB_FUNCTION ITangramRestObj_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramRestObjStubVtbl =
{
    &IID_ITangramRestObj,
    &ITangramRestObj_ServerInfo,
    25,
    &ITangramRestObj_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IVSDocument, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x17,0x08,0x24}} */

#pragma code_seg(".orpc")
static const unsigned short IVSDocument_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1468,
    1512,
    1550
    };

static const MIDL_STUBLESS_PROXY_INFO IVSDocument_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IVSDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IVSDocument_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IVSDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IVSDocumentProxyVtbl = 
{
    &IVSDocument_ProxyInfo,
    &IID_IVSDocument,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IVSDocument::get_VSClass */ ,
    (void *) (INT_PTR) -1 /* IVSDocument::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IVSDocument::get_Count */
};


static const PRPC_STUB_FUNCTION IVSDocument_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IVSDocumentStubVtbl =
{
    &IID_IVSDocument,
    &IVSDocument_ServerInfo,
    10,
    &IVSDocument_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITaskNotify, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x22,0xC0}} */

#pragma code_seg(".orpc")
static const unsigned short ITaskNotify_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    680,
    1588
    };

static const MIDL_STUBLESS_PROXY_INFO ITaskNotify_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITaskNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITaskNotify_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITaskNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _ITaskNotifyProxyVtbl = 
{
    &ITaskNotify_ProxyInfo,
    &IID_ITaskNotify,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITaskNotify::Notify */ ,
    (void *) (INT_PTR) -1 /* ITaskNotify::NotifyEx */
};


static const PRPC_STUB_FUNCTION ITaskNotify_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITaskNotifyStubVtbl =
{
    &IID_ITaskNotify,
    &ITaskNotify_ServerInfo,
    9,
    &ITaskNotify_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramTreeNode, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0xC9,0x51}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramTreeNode_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramTreeNode_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramTreeNode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramTreeNode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramTreeNode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _ITangramTreeNodeProxyVtbl = 
{
    0,
    &IID_ITangramTreeNode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION ITangramTreeNode_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _ITangramTreeNodeStubVtbl =
{
    &IID_ITangramTreeNode,
    &ITangramTreeNode_ServerInfo,
    7,
    &ITangramTreeNode_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramTreeViewCallBack, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x83,0xA6}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramTreeViewCallBack_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1626,
    1664,
    1702,
    1746,
    1790,
    1828,
    1866
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramTreeViewCallBack_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramTreeViewCallBack_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramTreeViewCallBack_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramTreeViewCallBack_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _ITangramTreeViewCallBackProxyVtbl = 
{
    &ITangramTreeViewCallBack_ProxyInfo,
    &IID_ITangramTreeViewCallBack,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::put_WndNode */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::get_Pages */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::OnInitTreeView */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::OnClick */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::OnInit */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::OnNewPage */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeViewCallBack::TangramAction */
};


static const PRPC_STUB_FUNCTION ITangramTreeViewCallBack_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramTreeViewCallBackStubVtbl =
{
    &IID_ITangramTreeViewCallBack,
    &ITangramTreeViewCallBack_ServerInfo,
    14,
    &ITangramTreeViewCallBack_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramTreeView, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x83,0xA5}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramTreeView_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1910,
    1954,
    1992,
    2036
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramTreeView_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramTreeView_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramTreeView_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramTreeView_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITangramTreeViewProxyVtbl = 
{
    &ITangramTreeView_ProxyInfo,
    &IID_ITangramTreeView,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeView::put_TangramTreeViewCallBack */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeView::get_FirstRoot */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeView::AddTreeNode */ ,
    (void *) (INT_PTR) -1 /* ITangramTreeView::InsertNode */
};


static const PRPC_STUB_FUNCTION ITangramTreeView_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramTreeViewStubVtbl =
{
    &IID_ITangramTreeView,
    &ITangramTreeView_ServerInfo,
    11,
    &ITangramTreeView_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramApp, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x00}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramApp_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2080
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramApp_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramApp_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramApp_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramApp_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _ITangramAppProxyVtbl = 
{
    &ITangramApp_ProxyInfo,
    &IID_ITangramApp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramApp::get_Tangram */
};


static const PRPC_STUB_FUNCTION ITangramApp_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramAppStubVtbl =
{
    &IID_ITangramApp,
    &ITangramApp_ServerInfo,
    8,
    &ITangramApp_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramEventObj, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x09,0x28}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramEventObj_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2118,
    2156,
    1550,
    2194,
    2232,
    2270,
    270,
    2308,
    2352,
    2396
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramEventObj_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramEventObj_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramEventObj_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramEventObj_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) _ITangramEventObjProxyVtbl = 
{
    &ITangramEventObj_ProxyInfo,
    &IID_ITangramEventObj,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::get_eventSource */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::put_eventSource */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::get_Index */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::put_Index */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::get_EventName */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::put_EventName */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::get_Object */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::put_Object */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::get_Value */ ,
    (void *) (INT_PTR) -1 /* ITangramEventObj::put_Value */
};


static const PRPC_STUB_FUNCTION ITangramEventObj_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramEventObjStubVtbl =
{
    &IID_ITangramEventObj,
    &ITangramEventObj_ServerInfo,
    17,
    &ITangramEventObj_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEventProxy, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x05}} */

#pragma code_seg(".orpc")
static const unsigned short IEventProxy_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEventProxy_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IEventProxy_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEventProxy_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IEventProxy_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IEventProxyProxyVtbl = 
{
    0,
    &IID_IEventProxy,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IEventProxy_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IEventProxyStubVtbl =
{
    &IID_IEventProxy,
    &IEventProxy_ServerInfo,
    7,
    &IEventProxy_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWndNode, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x04}} */

#pragma code_seg(".orpc")
static const unsigned short IWndNode_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2440,
    1954,
    1550,
    2478,
    2516,
    2554,
    2592,
    2630,
    2668,
    2706,
    2744,
    2782,
    2826,
    2864,
    2902,
    2940,
    2978,
    3022,
    3060,
    3104,
    3148,
    3186,
    3224,
    3262,
    3300,
    3338,
    3376,
    3414,
    3452,
    3490,
    3528,
    3566,
    3604,
    3642,
    3680,
    3718,
    3756,
    3794,
    3832,
    3870,
    3908,
    3946,
    3984,
    4022,
    4060,
    4098,
    4136,
    4174,
    4212,
    4250,
    4288,
    4326,
    4364,
    4402,
    4440,
    4478,
    4516,
    4554,
    4592,
    4636,
    4680,
    4718,
    4756,
    4794,
    4832,
    4888,
    4938,
    4988,
    5020,
    5070,
    5114,
    5176,
    5220,
    5270,
    5320
    };

static const MIDL_STUBLESS_PROXY_INFO IWndNode_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndNode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWndNode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndNode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(82) _IWndNodeProxyVtbl = 
{
    &IWndNode_ProxyInfo,
    &IID_IWndNode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_ChildNodes */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Rows */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Cols */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Row */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Col */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_NodeType */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_ParentNode */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_HTMLWindow */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_WndPage */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_RootNode */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_XObject */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_AxPlugIn */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Caption */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Caption */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Name */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Name */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Objects */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Handle */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Attribute */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Attribute */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Tag */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Tag */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_OuterXml */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Key */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_HtmlDocument */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_NameAtWindowPage */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Width */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Height */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Frame */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_XML */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Extender */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Extender */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_DocXml */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_rgbMiddle */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_rgbMiddle */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_rgbRightBottom */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_rgbRightBottom */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_rgbLeftTop */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_rgbLeftTop */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Hmin */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Hmin */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Hmax */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Hmax */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Vmin */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Vmin */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_Vmax */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_Vmax */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_HostNode */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_HostNode */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_ActivePage */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_ActivePage */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_HostFrame */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_MasterRow */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_MasterRow */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_MasterCol */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_MasterCol */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_OfficeObj */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_SaveToConfigFile */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_DockObj */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_DockObj */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_VSDocument */ ,
    (void *) (INT_PTR) -1 /* IWndNode::get_URL */ ,
    (void *) (INT_PTR) -1 /* IWndNode::put_URL */ ,
    (void *) (INT_PTR) -1 /* IWndNode::ActiveTabPage */ ,
    (void *) (INT_PTR) -1 /* IWndNode::GetNodes */ ,
    (void *) (INT_PTR) -1 /* IWndNode::GetNode */ ,
    (void *) (INT_PTR) -1 /* IWndNode::GetCtrlByName */ ,
    (void *) (INT_PTR) -1 /* IWndNode::Refresh */ ,
    (void *) (INT_PTR) -1 /* IWndNode::Extend */ ,
    (void *) (INT_PTR) -1 /* IWndNode::LoadXML */ ,
    (void *) (INT_PTR) -1 /* IWndNode::ExtendEx */ ,
    (void *) (INT_PTR) -1 /* IWndNode::GetNodeByName */ ,
    (void *) (INT_PTR) -1 /* IWndNode::GetCtrlValueByName */ ,
    (void *) (INT_PTR) -1 /* IWndNode::SetCtrlValueByName */ ,
    (void *) (INT_PTR) -1 /* IWndNode::NavigateURL */
};


static const PRPC_STUB_FUNCTION IWndNode_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWndNodeStubVtbl =
{
    &IID_IWndNode,
    &IWndNode_ServerInfo,
    82,
    &IWndNode_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAppExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x20,0x07}} */

#pragma code_seg(".orpc")
static const unsigned short IAppExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    680
    };

static const MIDL_STUBLESS_PROXY_INFO IAppExtender_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IAppExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAppExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IAppExtender_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IAppExtenderProxyVtbl = 
{
    &IAppExtender_ProxyInfo,
    &IID_IAppExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAppExtender::ProcessNotify */
};


static const PRPC_STUB_FUNCTION IAppExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IAppExtenderStubVtbl =
{
    &IID_IAppExtender,
    &IAppExtender_ServerInfo,
    8,
    &IAppExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWndContainer, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x07}} */

#pragma code_seg(".orpc")
static const unsigned short IWndContainer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWndContainer_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWndContainer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IWndContainerProxyVtbl = 
{
    &IWndContainer_ProxyInfo,
    &IID_IWndContainer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWndContainer::Save */
};


static const PRPC_STUB_FUNCTION IWndContainer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IWndContainerStubVtbl =
{
    &IID_IWndContainer,
    &IWndContainer_ServerInfo,
    8,
    &IWndContainer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ICreator, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x06}} */

#pragma code_seg(".orpc")
static const unsigned short ICreator_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5364,
    5414,
    5452
    };

static const MIDL_STUBLESS_PROXY_INFO ICreator_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ICreator_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ICreator_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ICreator_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _ICreatorProxyVtbl = 
{
    &ICreator_ProxyInfo,
    &IID_ICreator,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ICreator::Create */ ,
    (void *) (INT_PTR) -1 /* ICreator::get_Names */ ,
    (void *) (INT_PTR) -1 /* ICreator::get_Tags */
};


static const PRPC_STUB_FUNCTION ICreator_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ICreatorStubVtbl =
{
    &IID_ICreator,
    &ICreator_ServerInfo,
    10,
    &ICreator_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramEditor, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x66,0x88}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramEditor_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramEditor_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramEditor_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramEditor_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramEditor_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _ITangramEditorProxyVtbl = 
{
    0,
    &IID_ITangramEditor,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION ITangramEditor_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _ITangramEditorStubVtbl =
{
    &IID_ITangramEditor,
    &ITangramEditor_ServerInfo,
    7,
    &ITangramEditor_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramDoc, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x11,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramDoc_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5496,
    5534,
    5572,
    5610,
    5648,
    5686
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramDoc_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramDoc_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramDoc_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramDoc_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _ITangramDocProxyVtbl = 
{
    &ITangramDoc_ProxyInfo,
    &IID_ITangramDoc,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramDoc::get_TemplateXml */ ,
    (void *) (INT_PTR) -1 /* ITangramDoc::put_TemplateXml */ ,
    (void *) (INT_PTR) -1 /* ITangramDoc::put_DocType */ ,
    (void *) (INT_PTR) -1 /* ITangramDoc::get_DocID */ ,
    (void *) (INT_PTR) -1 /* ITangramDoc::put_DocID */ ,
    (void *) (INT_PTR) -1 /* ITangramDoc::GetFrameWndXml */
};


static const PRPC_STUB_FUNCTION ITangramDoc_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramDocStubVtbl =
{
    &IID_ITangramDoc,
    &ITangramDoc_ServerInfo,
    13,
    &ITangramDoc_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramDocTemplate, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x17,0x07,0x07}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramDocTemplate_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5496,
    5534,
    5572,
    5610,
    5648,
    5686
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramDocTemplate_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramDocTemplate_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramDocTemplate_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramDocTemplate_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _ITangramDocTemplateProxyVtbl = 
{
    &ITangramDocTemplate_ProxyInfo,
    &IID_ITangramDocTemplate,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramDocTemplate::get_TemplateXml */ ,
    (void *) (INT_PTR) -1 /* ITangramDocTemplate::put_TemplateXml */ ,
    (void *) (INT_PTR) -1 /* ITangramDocTemplate::put_DocType */ ,
    (void *) (INT_PTR) -1 /* ITangramDocTemplate::get_DocID */ ,
    (void *) (INT_PTR) -1 /* ITangramDocTemplate::put_DocID */ ,
    (void *) (INT_PTR) -1 /* ITangramDocTemplate::GetFrameWndXml */
};


static const PRPC_STUB_FUNCTION ITangramDocTemplate_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramDocTemplateStubVtbl =
{
    &IID_ITangramDocTemplate,
    &ITangramDocTemplate_ServerInfo,
    13,
    &ITangramDocTemplate_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramJava, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0xda,0x3b,0x0a,0x66}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramJava_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5730,
    5774,
    5818,
    5868,
    5906
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramJava_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramJava_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramJava_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramJava_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _ITangramJavaProxyVtbl = 
{
    &ITangramJava_ProxyInfo,
    &IID_ITangramJava,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramJava::CreateWndPage */ ,
    (void *) (INT_PTR) -1 /* ITangramJava::CreateObject */ ,
    (void *) (INT_PTR) -1 /* ITangramJava::ActiveMethod */ ,
    (void *) (INT_PTR) -1 /* ITangramJava::CreatingNode */ ,
    (void *) (INT_PTR) -1 /* ITangramJava::Extend */
};


static const PRPC_STUB_FUNCTION ITangramJava_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramJavaStubVtbl =
{
    &IID_ITangramJava,
    &ITangramJava_ServerInfo,
    12,
    &ITangramJava_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangram, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short ITangram_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2118,
    2156,
    5962,
    6006,
    6050,
    6094,
    6138,
    6176,
    1034,
    2706,
    6214,
    6258,
    6296,
    6334,
    6372,
    6410,
    6448,
    6498,
    6542,
    6580,
    6618,
    6668,
    6712,
    6750,
    6794,
    6838,
    6882,
    6938,
    6988,
    7038,
    7100,
    7150,
    7182,
    7220,
    7258,
    7314,
    7358,
    7408,
    7464,
    7508,
    7564,
    7620,
    7664,
    7708,
    7770,
    7826,
    7864,
    7902,
    7940,
    8002,
    8040,
    8084,
    8128,
    8184,
    8228,
    8302,
    8334,
    8372,
    4592,
    8404,
    8442,
    8486,
    8530,
    8568,
    8612,
    8662
    };

static const MIDL_STUBLESS_PROXY_INFO ITangram_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangram_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangram_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangram_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(73) _ITangramProxyVtbl = 
{
    &ITangram_ProxyInfo,
    &IID_ITangram,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_Application */ ,
    (void *) (INT_PTR) -1 /* ITangram::put_Application */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_AppKeyValue */ ,
    (void *) (INT_PTR) -1 /* ITangram::put_AppKeyValue */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_AppExtender */ ,
    (void *) (INT_PTR) -1 /* ITangram::put_AppExtender */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_RootNodes */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_HostWnd */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_CurrentActiveNode */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_CreatingNode */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_RemoteTangram */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_Extender */ ,
    (void *) (INT_PTR) -1 /* ITangram::put_Extender */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_RemoteHelperHWND */ ,
    (void *) (INT_PTR) -1 /* ITangram::put_RemoteHelperHWND */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_DesignNode */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_TangramDoc */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_DocTemplate */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_ActiveChromeBrowserWnd */ ,
    (void *) (INT_PTR) -1 /* ITangram::get_HostChromeBrowserWnd */ ,
    (void *) (INT_PTR) -1 /* ITangram::NavigateNode */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateWndPage */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateOfficeDocument */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateCLRObj */ ,
    (void *) (INT_PTR) -1 /* ITangram::StartApplication */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetWndFrame */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetItemText */ ,
    (void *) (INT_PTR) -1 /* ITangram::SetItemText */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetCLRControl */ ,
    (void *) (INT_PTR) -1 /* ITangram::MessageBox */ ,
    (void *) (INT_PTR) -1 /* ITangram::Encode */ ,
    (void *) (INT_PTR) -1 /* ITangram::SetHostFocus */ ,
    (void *) (INT_PTR) -1 /* ITangram::UpdateWndNode */ ,
    (void *) (INT_PTR) -1 /* ITangram::NewGUID */ ,
    (void *) (INT_PTR) -1 /* ITangram::ActiveCLRMethod */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramGetObject */ ,
    (void *) (INT_PTR) -1 /* ITangram::DownLoadFile */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetCtrlByName */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetNodeFromHandle */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetCtrlValueByName */ ,
    (void *) (INT_PTR) -1 /* ITangram::SetCtrlValueByName */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateTangramCtrl */ ,
    (void *) (INT_PTR) -1 /* ITangram::AttachObjEvent */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetWindowClientDefaultNode */ ,
    (void *) (INT_PTR) -1 /* ITangram::GetDocTemplateXml */ ,
    (void *) (INT_PTR) -1 /* ITangram::OpenTangramFile */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateTangramEventObj */ ,
    (void *) (INT_PTR) -1 /* ITangram::FireTangramEventObj */ ,
    (void *) (INT_PTR) -1 /* ITangram::ExtendFrames */ ,
    (void *) (INT_PTR) -1 /* ITangram::DeletePage */ ,
    (void *) (INT_PTR) -1 /* ITangram::LoadDocComponent */ ,
    (void *) (INT_PTR) -1 /* ITangram::OpenTangramDocFile */ ,
    (void *) (INT_PTR) -1 /* ITangram::CreateOutLookObj */ ,
    (void *) (INT_PTR) -1 /* ITangram::NewWorkBench */ ,
    (void *) (INT_PTR) -1 /* ITangram::ReadTextFromWeb */ ,
    (void *) (INT_PTR) -1 /* ITangram::ClearHeader */ ,
    (void *) (INT_PTR) -1 /* ITangram::DeleteFrame */ ,
    (void *) (INT_PTR) -1 /* ITangram::InitEclipseApp */ ,
    (void *) (INT_PTR) -1 /* ITangram::InitCLRApp */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramCommand */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramGetImage */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramGetVisible */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramOnLoad */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramGetItemCount */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramGetItemLabel */ ,
    (void *) (INT_PTR) -1 /* ITangram::TangramGetItemID */
};


static const PRPC_STUB_FUNCTION ITangram_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramStubVtbl =
{
    &IID_ITangram,
    &ITangram_ServerInfo,
    73,
    &ITangram_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWndFrame, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x03}} */

#pragma code_seg(".orpc")
static const unsigned short IWndFrame_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    8712,
    1512,
    794,
    8756,
    2232,
    8794,
    8832,
    8876,
    8920,
    8958,
    8996,
    9034,
    2826,
    9072,
    9110,
    9148,
    9186,
    9218,
    9250,
    9288,
    9338,
    9382,
    9450,
    9500,
    9550
    };

static const MIDL_STUBLESS_PROXY_INFO IWndFrame_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndFrame_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWndFrame_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndFrame_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(32) _IWndFrameProxyVtbl = 
{
    &IWndFrame_ProxyInfo,
    &IID_IWndFrame,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_WndNode */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_HWND */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_VisibleNode */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_CurrentNavigateKey */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_WndPage */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_FrameData */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::put_FrameData */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_DesignerState */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::put_DesignerState */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_Count */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_RootNodes */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_FrameXML */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_TangramDoc */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_FrameType */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::get_Name */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::Detach */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::Attach */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::ModifyHost */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::Extend */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::GetXml */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::ExtendFromWeb */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::SendIPCMessage */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::SendToBackgroundWebProxy */ ,
    (void *) (INT_PTR) -1 /* IWndFrame::Dispatch */
};


static const PRPC_STUB_FUNCTION IWndFrame_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWndFrameStubVtbl =
{
    &IID_IWndFrame,
    &IWndFrame_ServerInfo,
    32,
    &IWndFrame_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWndNodeCollection, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x17}} */

#pragma code_seg(".orpc")
static const unsigned short IWndNodeCollection_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9618,
    9656,
    9700
    };

static const MIDL_STUBLESS_PROXY_INFO IWndNodeCollection_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndNodeCollection_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWndNodeCollection_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndNodeCollection_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IWndNodeCollectionProxyVtbl = 
{
    &IWndNodeCollection_ProxyInfo,
    &IID_IWndNodeCollection,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWndNodeCollection::get_NodeCount */ ,
    (void *) (INT_PTR) -1 /* IWndNodeCollection::get_Item */ ,
    (void *) (INT_PTR) -1 /* IWndNodeCollection::get__NewEnum */
};


static const PRPC_STUB_FUNCTION IWndNodeCollection_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWndNodeCollectionStubVtbl =
{
    &IID_IWndNodeCollection,
    &IWndNodeCollection_ServerInfo,
    10,
    &IWndNodeCollection_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWndPage, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x02}} */

#pragma code_seg(".orpc")
static const unsigned short IWndPage_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9738,
    1512,
    1550,
    9782,
    1790,
    9820,
    9858,
    9896,
    9940,
    9984,
    10028,
    10072,
    10116,
    10160,
    10204,
    10248,
    1392,
    1430,
    10286,
    10324,
    10362,
    10400,
    10444,
    10482,
    10520,
    10558,
    10596,
    10634,
    10672,
    10710,
    10748,
    10804,
    10866,
    10916,
    10972,
    11028,
    11090,
    11140,
    11184,
    11252,
    11308,
    11358,
    11408,
    11452,
    11496,
    11534,
    11602,
    11658
    };

static const MIDL_STUBLESS_PROXY_INFO IWndPage_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndPage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWndPage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWndPage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(55) _IWndPageProxyVtbl = 
{
    &IWndPage_ProxyInfo,
    &IID_IWndPage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Frame */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Count */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_URL */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_URL */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_EnableSinkCLRCtrlCreatedEvent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_EnableSinkCLRCtrlCreatedEvent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_xtml */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_xtml */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Extender */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_Extender */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_FrameName */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_WndFrame */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Node */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_XObject */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_HtmlDocument */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Width */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_Width */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Height */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_Height */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_NodeNames */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_HTMLWindow */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Parent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_External */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_External */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_Handle */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_PageXML */ ,
    (void *) (INT_PTR) -1 /* IWndPage::put_ConfigName */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_CurrentDesignFrameType */ ,
    (void *) (INT_PTR) -1 /* IWndPage::get_CurrentDesignNode */ ,
    (void *) (INT_PTR) -1 /* IWndPage::CreateFrame */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AddObject */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AddObjToHtml */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AddNodesToPage */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AttachObjEvent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AttachNodeSubCtrlEvent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AttachEvent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::AttachNodeEvent */ ,
    (void *) (INT_PTR) -1 /* IWndPage::Extend */ ,
    (void *) (INT_PTR) -1 /* IWndPage::ExtendCtrl */ ,
    (void *) (INT_PTR) -1 /* IWndPage::GetWndNode */ ,
    (void *) (INT_PTR) -1 /* IWndPage::GetCtrlInNode */ ,
    (void *) (INT_PTR) -1 /* IWndPage::GetHtmlDocument */ ,
    (void *) (INT_PTR) -1 /* IWndPage::GetFrameFromCtrl */ ,
    (void *) (INT_PTR) -1 /* IWndPage::ConnectTangramCtrl */ ,
    (void *) (INT_PTR) -1 /* IWndPage::CreateFrameWithDefaultNode */ ,
    (void *) (INT_PTR) -1 /* IWndPage::ExtendFrames */ ,
    (void *) (INT_PTR) -1 /* IWndPage::RegisterExtendableTarget */
};


static const PRPC_STUB_FUNCTION IWndPage_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWndPageStubVtbl =
{
    &IID_IWndPage,
    &IWndPage_ServerInfo,
    55,
    &IWndPage_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWorkBenchWindow, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x5D,0x34}} */

#pragma code_seg(".orpc")
static const unsigned short IWorkBenchWindow_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11702,
    1512,
    1550,
    5610,
    11746,
    8794,
    11790,
    11828,
    11860,
    11892,
    630,
    11942
    };

static const MIDL_STUBLESS_PROXY_INFO IWorkBenchWindow_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWorkBenchWindow_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IWorkBenchWindow_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IWorkBenchWindow_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(19) _IWorkBenchWindowProxyVtbl = 
{
    &IWorkBenchWindow_ProxyInfo,
    &IID_IWorkBenchWindow,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_Ctrl */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_Count */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_Handle */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_TangramCtrl */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_WndPage */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_WndFrame */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::Active */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::CloseTangramUI */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::Extend */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::ExtendEx */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::ExtendInView */
};


static const PRPC_STUB_FUNCTION IWorkBenchWindow_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IWorkBenchWindowStubVtbl =
{
    &IID_IWorkBenchWindow,
    &IWorkBenchWindow_ServerInfo,
    19,
    &IWorkBenchWindow_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IChromeWebBrowser, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x18,0x08,0x28}} */

#pragma code_seg(".orpc")
static const unsigned short IChromeWebBrowser_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11998
    };

static const MIDL_STUBLESS_PROXY_INFO IChromeWebBrowser_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IChromeWebBrowser_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IChromeWebBrowser_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IChromeWebBrowser_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IChromeWebBrowserProxyVtbl = 
{
    &IChromeWebBrowser_ProxyInfo,
    &IID_IChromeWebBrowser,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IChromeWebBrowser::OpenURL */
};


static const PRPC_STUB_FUNCTION IChromeWebBrowser_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IChromeWebBrowserStubVtbl =
{
    &IID_IChromeWebBrowser,
    &IChromeWebBrowser_ServerInfo,
    8,
    &IChromeWebBrowser_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IChromeWebContent, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x18,0x09,0x03}} */

#pragma code_seg(".orpc")
static const unsigned short IChromeWebContent_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IChromeWebContent_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IChromeWebContent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IChromeWebContent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IChromeWebContent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IChromeWebContentProxyVtbl = 
{
    0,
    &IID_IChromeWebContent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IChromeWebContent_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IChromeWebContentStubVtbl =
{
    &IID_IChromeWebContent,
    &IChromeWebContent_ServerInfo,
    7,
    &IChromeWebContent_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IOfficeObject, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x65,0x06,0x06}} */

#pragma code_seg(".orpc")
static const unsigned short IOfficeObject_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    12054,
    12092,
    12142
    };

static const MIDL_STUBLESS_PROXY_INFO IOfficeObject_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IOfficeObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IOfficeObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IOfficeObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IOfficeObjectProxyVtbl = 
{
    &IOfficeObject_ProxyInfo,
    &IID_IOfficeObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IOfficeObject::Show */ ,
    (void *) (INT_PTR) -1 /* IOfficeObject::Extend */ ,
    (void *) (INT_PTR) -1 /* IOfficeObject::UnloadTangram */
};


static const PRPC_STUB_FUNCTION IOfficeObject_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IOfficeObjectStubVtbl =
{
    &IID_IOfficeObject,
    &IOfficeObject_ServerInfo,
    10,
    &IOfficeObject_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramCtrl, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x19,0x03,0x31}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramCtrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    12174,
    12212,
    12250,
    12288
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramCtrl_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramCtrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _ITangramCtrlProxyVtbl = 
{
    &ITangramCtrl_ProxyInfo,
    &IID_ITangramCtrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_HWND */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_Tangram */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_tag */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::put_tag */
};


static const PRPC_STUB_FUNCTION ITangramCtrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramCtrlStubVtbl =
{
    &IID_ITangramCtrl,
    &ITangramCtrl_ServerInfo,
    11,
    &ITangramCtrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ITangramAppCtrl, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x10,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short ITangramAppCtrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    12174,
    12212,
    12250,
    12288,
    12326
    };

static const MIDL_STUBLESS_PROXY_INFO ITangramAppCtrl_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramAppCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITangramAppCtrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &ITangramAppCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _ITangramAppCtrlProxyVtbl = 
{
    &ITangramAppCtrl_ProxyInfo,
    &IID_ITangramAppCtrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_HWND */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_Tangram */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_tag */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::put_tag */ ,
    (void *) (INT_PTR) -1 /* ITangramAppCtrl::put_AppCtrl */
};


static const PRPC_STUB_FUNCTION ITangramAppCtrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITangramAppCtrlStubVtbl =
{
    &IID_ITangramAppCtrl,
    &ITangramAppCtrl_ServerInfo,
    12,
    &ITangramAppCtrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEclipseCtrl, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x09,0x12}} */

#pragma code_seg(".orpc")
static const unsigned short IEclipseCtrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    12174,
    12212,
    12250,
    12288,
    12364,
    12408,
    12446,
    12484,
    2668,
    12522,
    12560,
    12598,
    12642,
    12686,
    12742,
    2940,
    12798
    };

static const MIDL_STUBLESS_PROXY_INFO IEclipseCtrl_ProxyInfo =
    {
    &Object_StubDesc,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IEclipseCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IEclipseCtrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ChromeAppServer__MIDL_ProcFormatString.Format,
    &IEclipseCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(24) _IEclipseCtrlProxyVtbl = 
{
    &IEclipseCtrl_ProxyInfo,
    &IID_IEclipseCtrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_HWND */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_Tangram */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::get_tag */ ,
    (void *) (INT_PTR) -1 /* ITangramCtrl::put_tag */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::put_TangramHandle */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_EclipseViewHandle */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_WndPage */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_WorkBenchWindow */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_TopPage */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_TopFrame */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_ActiveTopNode */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_AppKeyValue */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::put_AppKeyValue */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::Extend */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::ExtendEx */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::InitCtrl */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::AttachCLRObjEvent */
};


static const PRPC_STUB_FUNCTION IEclipseCtrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEclipseCtrlStubVtbl =
{
    &IID_IEclipseCtrl,
    &IEclipseCtrl_ServerInfo,
    24,
    &IEclipseCtrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    ChromeAppServer__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _ChromeAppServer_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IOfficeExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOfficeObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramAppProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWndPageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWndFrameProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWndNodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEventProxyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICreatorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWndContainerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWndNodeCollectionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAppExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITaskNotifyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWorkBenchWindowProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramEditorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramTreeViewProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramTreeViewCallBackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramTreeNodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVSExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEclipseCtrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEclipseExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramEventObjProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramAppCtrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramDocProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramDesignerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramDocTemplateProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IVSDocumentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramRestObjProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramRestNotifyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IChromeWebBrowserProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IChromeWebContentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramCtrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITangramJavaProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ChromeAppServer_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IOfficeExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_IOfficeObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramAppStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramStubVtbl,
    ( CInterfaceStubVtbl *) &_IWndPageStubVtbl,
    ( CInterfaceStubVtbl *) &_IWndFrameStubVtbl,
    ( CInterfaceStubVtbl *) &_IWndNodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IEventProxyStubVtbl,
    ( CInterfaceStubVtbl *) &_ICreatorStubVtbl,
    ( CInterfaceStubVtbl *) &_IWndContainerStubVtbl,
    ( CInterfaceStubVtbl *) &_IWndNodeCollectionStubVtbl,
    ( CInterfaceStubVtbl *) &_IAppExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_ITaskNotifyStubVtbl,
    ( CInterfaceStubVtbl *) &_IWorkBenchWindowStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramEditorStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramTreeViewStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramTreeViewCallBackStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramTreeNodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IVSExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_IEclipseCtrlStubVtbl,
    ( CInterfaceStubVtbl *) &_IEclipseExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramEventObjStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramAppCtrlStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramDocStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramDesignerStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramDocTemplateStubVtbl,
    ( CInterfaceStubVtbl *) &_IVSDocumentStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramRestObjStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramRestNotifyStubVtbl,
    ( CInterfaceStubVtbl *) &_IChromeWebBrowserStubVtbl,
    ( CInterfaceStubVtbl *) &_IChromeWebContentStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramCtrlStubVtbl,
    ( CInterfaceStubVtbl *) &_ITangramJavaStubVtbl,
    0
};

PCInterfaceName const _ChromeAppServer_InterfaceNamesList[] = 
{
    "IOfficeExtender",
    "IOfficeObject",
    "ITangramApp",
    "ITangram",
    "IWndPage",
    "IWndFrame",
    "IWndNode",
    "IEventProxy",
    "ICreator",
    "IWndContainer",
    "IWndNodeCollection",
    "IAppExtender",
    "ITaskNotify",
    "IWorkBenchWindow",
    "ITangramEditor",
    "ITangramTreeView",
    "ITangramTreeViewCallBack",
    "ITangramTreeNode",
    "IVSExtender",
    "ITangramExtender",
    "IEclipseCtrl",
    "IEclipseExtender",
    "ITangramEventObj",
    "ITangramAppCtrl",
    "ITangramDoc",
    "ITangramDesigner",
    "ITangramDocTemplate",
    "IVSDocument",
    "ITangramRestObj",
    "ITangramRestNotify",
    "IChromeWebBrowser",
    "IChromeWebContent",
    "ITangramCtrl",
    "ITangramJava",
    0
};

const IID *  const _ChromeAppServer_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _ChromeAppServer_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ChromeAppServer, pIID, n)

int __stdcall _ChromeAppServer_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ChromeAppServer, 34, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ChromeAppServer, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ChromeAppServer, 34, *pIndex )
    
}

const ExtendedProxyFileInfo ChromeAppServer_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ChromeAppServer_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ChromeAppServer_StubVtblList,
    (const PCInterfaceName * ) & _ChromeAppServer_InterfaceNamesList,
    (const IID ** ) & _ChromeAppServer_BaseIIDList,
    & _ChromeAppServer_IID_Lookup, 
    34,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

