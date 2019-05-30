#pragma once

#define TANGRAM_CONST_OPENFILE			19920612
#define TANGRAM_CONST_NEWDOC			19631222
#define TANGRAM_CONST_PANE_FIRST		20022017
#define WM_TANGRAM_WEBNODEDOCCOMPLETE	(WM_USER + 0x00004001)
#define WM_OPENDOCUMENT					(WM_USER + 0x00004002)
#define WM_SPLITTERREPOSITION			(WM_USER + 0x00004003)
#define WM_ECLIPSEWORKBENCHCREATED		(WM_USER + 0x00004004)
#define WM_TABCHANGE					(WM_USER + 0x00004005)
#define WM_TANGRAMMSG					(WM_USER + 0x00004006)
#define WM_NAVIXTML						(WM_USER + 0x00004007)
#define WM_OFFICEOBJECTCREATED			(WM_USER + 0x00004008)
#define WM_MDICHILDMIN					(WM_USER + 0x00004009)
#define WM_TANGRAMAPPINIT				(WM_USER + 0x0000400a)
#define WM_TANGRAMAPPQUIT				(WM_USER + 0x0000400b)
#define WM_TANGRAMDATA					(WM_USER + 0x0000400c)
#define WM_DOWNLOAD_MSG					(WM_USER + 0x0000400d)
#define WM_TANGRAMNEWOUTLOOKOBJ			(WM_USER + 0x0000400e)
#define WM_TANGRAMACTIVEINSPECTORPAGE	(WM_USER + 0x0000400f)
#define WM_USER_TANGRAMTASK				(WM_USER + 0x00004010)
#define WM_SETWNDFOCUSE					(WM_USER + 0x00004011)
#define WM_UPLOADFILE					(WM_USER + 0x00004012)
#define WM_TANGRAMDESIGNMSG				(WM_USER + 0x00004013)
#define WM_INSERTTREENODE				(WM_USER + 0x00004014)
#define WM_REFRESHDATA					(WM_USER + 0x00004015)
#define WM_GETSELECTEDNODEINFO			(WM_USER + 0x00004016)
#define WM_TANGRAMDESIGNERCMD			(WM_USER + 0x00004017)
#define WM_TANGRAMGETTREEINFO			(WM_USER + 0x00004018)
#define WM_TANGRAMGETNODE				(WM_USER + 0x00004019)
#define WM_TANGRAMUPDATENODE			(WM_USER + 0x0000401a)
#define WM_TANGRAMSAVE					(WM_USER + 0x0000401b)
#define WM_MDICLIENTCREATED				(WM_USER + 0x0000401c)
#define WM_TGM_SETACTIVEPAGE			(WM_USER + 0x0000401d)
#define WM_TGM_SET_CAPTION				(WM_USER + 0x0000401e)	
#define WM_GETNODEINFO					(WM_USER + 0x0000401f)
#define WM_CREATETABPAGE				(WM_USER + 0x00004020)
#define WM_ACTIVETABPAGE				(WM_USER + 0x00004021)
#define WM_MODIFYTABPAGE				(WM_USER + 0x00004022)
#define WM_ADDTABPAGE					(WM_USER + 0x00004023)
#define WM_TANGRAMITEMLOAD				(WM_USER + 0x00003024)
#define WM_INITOUTLOOK					(WM_USER + 0x00004026)
#define WM_CONTROLBARCREATED			(WM_USER + 0x00004027)
#define WM_QUERYAPPPROXY				(WM_USER + 0x00004028)
#define WM_TANGRAMACTIVEPAGE			(WM_USER + 0x00004029)
#define WM_TANGRAMSETAPPTITLE			(WM_USER + 0x0000402a)
#define WM_LYNCIMWNDCREATED				(WM_USER + 0x0000402b)
#define WM_STOPTRACKING					(WM_USER + 0x0000402c)
#define WM_TANGRAMINIT					(WM_USER + 0x0000402d)
#define WM_VSSHOWPROPERTYGRID			(WM_USER + 0x0000402e)
#define WM_REMOVERESTKEY				(WM_USER + 0x0000402f)
#define WM_TANGRAMGETXML				(WM_USER + 0x00004030)
#define WM_CHROMEWEBCLIENTCREATED		(WM_USER + 0x00004031)
#define WM_CHROMERENDERERFRAMEHOSTINIT	(WM_USER + 0x00004032)
#define WM_CHROMEOPENWINDOWMSG			(WM_USER + 0x00004033)
#define WM_CHROMEDRAW	                (WM_USER + 0x00004034)
#define WM_CHROMEMSG	                (WM_USER + 0x00004035)
#define WM_CHROMEWNDPARENTCHANGED       (WM_USER + 0x00004035)
#define WM_DEVICESCALEFACTORCHANGED     (WM_USER + 0x00004036)
#define WM_CHROMEDEVTOOLMSG	            (WM_USER + 0x00004037)
#define WM_BACKGROUNDWEBPROXY_MSG       (WM_USER + 0x00004039)
#define WM_CHROMEWNDNODEMSG             (WM_USER + 0x00004040)
#define WM_DOTNETCONTROLCREATED         (WM_USER + 0x00004041)
#define WM_DOCUMENTONLOADCOMPLETED      (WM_USER + 0x00004043)
#define WM_DOCUMENTFAILLOADWITHERROR    (WM_USER + 0x00004044)
#define WM_CHROMEHELPWND                (WM_USER + 0x00004045)
#define WM_CHROMEOMNIBOXPOPUPVISIBLE    (WM_USER + 0x00004046)
#define WM_HOSTNODEFORSPLITTERCREATED   (WM_USER + 0x00004047)
#define WM_CHROMEOPENURLMSG				(WM_USER + 0x00004048)
#define WM_LBUTTONDOWNEX			    (WM_USER + 0x00004049)
#define WM_WINFORMCREATED				(WM_USER + 0x0000404a)
#define WM_CHROMEIPCMSG					(WM_USER + 0x00004052)

#define OBJECT_ENTRY_AUTO_EX(clsid, class)                                          \
  __declspec(selectany) ATL::_ATL_OBJMAP_CACHE __objCache__##class =                \
      {NULL, 0} const ATL::_ATL_OBJMAP_ENTRY_EX __objMap_##class =                  \
          {&clsid,                                                                  \
           class ::UpdateRegistry,                                                  \
           class ::_ClassFactoryCreatorClass::CreateInstance,                       \
           class ::CreateInstance,                                                  \
           &__objCache__##class,                                                    \
           class ::GetObjectDescription,                                            \
           class ::GetCategoryMap,                                                  \
           class                                                                    \
           ::ObjectMain} extern "C" __declspec(allocate("ATL$__"                    \
                                                        "m")) __declspec(selectany) \
              const ATL::_ATL_OBJMAP_ENTRY_EX* const __pobjMap_##class              \
      = &__objMap_##class;                                                          \
  OBJECT_ENTRY_PRAGMA(class)

#define TANGRAM_OBJECT_ENTRY_AUTO(clsid, class)                             \
  __declspec(selectany) ATL::_ATL_OBJMAP_CACHE __objCache__##class = {NULL, \
                                                                      0};   \
  const ATL::_ATL_OBJMAP_ENTRY_EX __objMap_##class = {                      \
      &clsid,                                                               \
      class ::UpdateRegistry,                                               \
      class ::_ClassFactoryCreatorClass::CreateInstance,                    \
      class ::CreateInstance,                                               \
      &__objCache__##class,                                                 \
      class ::GetObjectDescription,                                         \
      class ::GetCategoryMap,                                               \
      class ::ObjectMain};                                                  \
  extern "C" __declspec(allocate("ATL$__m")) __declspec(selectany)          \
      const ATL::_ATL_OBJMAP_ENTRY_EX* const __pobjMap_##class              \
      = &__objMap_##class;                                                  \
  OBJECT_ENTRY_PRAGMA(class)
