#include "stdafx.h"
#include "TangramClrProxy.h"
#include "ConfigurationPage.h"

extern CTangramCLRProxy theAppProxy;

using namespace System::Runtime::InteropServices;

namespace TangramDesigner
{
	System::Void ConfigurationPage::ConfigurationPage_Load(System::Object^  sender, System::EventArgs^  e) {
		BSTR bstrAppDataPath = theAppProxy.m_pProxy->m_strAppDataPath.AllocSysString();
		String^ strResult = BSTR2STRING(bstrAppDataPath);
		::SysFreeString(bstrAppDataPath);

		txtDataPath->Text = strResult;
	}

}