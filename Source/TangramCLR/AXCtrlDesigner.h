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

#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace TangramDesigner {

	/// <summary>
	/// Summary for AXCtrlDesigner
	/// </summary>
	public ref class AXCtrlDesigner : public System::Windows::Forms::UserControl
	{
	public:
		AXCtrlDesigner(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^  btnLoad;
	public:

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AXCtrlDesigner()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBoxAxCtrl;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnCreate;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBoxAxCtrl = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBoxAxCtrl
			// 
			this->comboBoxAxCtrl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxAxCtrl->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxAxCtrl->DropDownWidth = 250;
			this->comboBoxAxCtrl->FormattingEnabled = true;
			this->comboBoxAxCtrl->Location = System::Drawing::Point(14, 30);
			this->comboBoxAxCtrl->Name = L"comboBoxAxCtrl";
			this->comboBoxAxCtrl->Size = System::Drawing::Size(169, 20);
			this->comboBoxAxCtrl->Sorted = true;
			this->comboBoxAxCtrl->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ActiveX Control ID:";
			// 
			// btnCreate
			// 
			this->btnCreate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnCreate->Location = System::Drawing::Point(14, 58);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(169, 22);
			this->btnCreate->TabIndex = 3;
			this->btnCreate->Text = L"Create";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &AXCtrlDesigner::btnCreate_Click);
			// 
			// btnLoad
			// 
			this->btnLoad->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnLoad->Location = System::Drawing::Point(127, 7);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(55, 19);
			this->btnLoad->TabIndex = 4;
			this->btnLoad->Text = L"Load ActiveX Control ID";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &AXCtrlDesigner::btnLoad_Click);
			// 
			// AXCtrlDesigner
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnLoad);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxAxCtrl);
			this->Name = L"AXCtrlDesigner";
			this->Size = System::Drawing::Size(198, 170);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCreate_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnLoad_Click(System::Object^  sender, System::EventArgs^  e);
};
}
