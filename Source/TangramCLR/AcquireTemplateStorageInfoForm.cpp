#include "stdafx.h"
#include "AcquireTemplateStorageInfoForm.h"

namespace TangramCLR
{

void AcquireTemplateStorageInfoForm::btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!String::IsNullOrWhiteSpace(txtCategory->Text) && !String::IsNullOrWhiteSpace(txtTemplateName->Text))
	{
		strTemplateCategory = txtCategory->Text;
		strTemplateName = txtTemplateName->Text;
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		//this->Close();
	}
}

void AcquireTemplateStorageInfoForm::btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
}

}
