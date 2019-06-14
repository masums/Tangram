#include "stdafx.h"
#include "TangramNewChildForm.h"
#include "dllmain.h"
#include "TangramClrProxy.h"
extern CTangramCLRProxy theAppProxy;

namespace TangramCLR {
	System::Void TangramNewChildForm::NewTemplateListView_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		String^ strXml = this->NewTemplateListView->SelectedItems[0]->Tag->ToString();
		if (String::IsNullOrEmpty(strXml) == false)
		{
			IDispatch* pFormDisp = theApp.m_pTangramProxyBase->m_pCLRProxy->CreateCLRObj(strXml);
		}
		this->Close();
	}
}
