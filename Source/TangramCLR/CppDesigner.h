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
	/// Summary for CppDesigner
	/// </summary>
	public ref class CppDesigner : public System::Windows::Forms::UserControl
	{
	public:
		CppDesigner(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CppDesigner()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBoxCpp;
	private: System::Windows::Forms::Button^  btnCreate;
	private: System::Windows::Forms::ComboBox^  comboBoxLayouts;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBoxStyle;
	private: System::Windows::Forms::Label^  label3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxCpp = (gcnew System::Windows::Forms::ComboBox());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->comboBoxLayouts = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxStyle = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Component ID:";
			// 
			// comboBoxCpp
			// 
			this->comboBoxCpp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxCpp->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxCpp->DropDownWidth = 240;
			this->comboBoxCpp->FormattingEnabled = true;
			this->comboBoxCpp->Location = System::Drawing::Point(6, 34);
			this->comboBoxCpp->Name = L"comboBoxCpp";
			this->comboBoxCpp->Size = System::Drawing::Size(211, 21);
			this->comboBoxCpp->Sorted = true;
			this->comboBoxCpp->TabIndex = 1;
			this->comboBoxCpp->SelectedIndexChanged += gcnew System::EventHandler(this, &CppDesigner::comboBoxCpp_SelectedIndexChanged);
			// 
			// btnCreate
			// 
			this->btnCreate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnCreate->Location = System::Drawing::Point(6, 160);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(211, 27);
			this->btnCreate->TabIndex = 2;
			this->btnCreate->Text = L"Create";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &CppDesigner::btnCreate_Click);
			// 
			// comboBoxLayouts
			// 
			this->comboBoxLayouts->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxLayouts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxLayouts->DropDownWidth = 240;
			this->comboBoxLayouts->FormattingEnabled = true;
			this->comboBoxLayouts->Location = System::Drawing::Point(6, 87);
			this->comboBoxLayouts->Name = L"comboBoxLayouts";
			this->comboBoxLayouts->Size = System::Drawing::Size(211, 21);
			this->comboBoxLayouts->Sorted = true;
			this->comboBoxLayouts->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Layouts:";
			// 
			// comboBoxStyle
			// 
			this->comboBoxStyle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxStyle->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxStyle->DropDownWidth = 240;
			this->comboBoxStyle->FormattingEnabled = true;
			this->comboBoxStyle->Location = System::Drawing::Point(6, 133);
			this->comboBoxStyle->Name = L"comboBoxStyle";
			this->comboBoxStyle->Size = System::Drawing::Size(211, 21);
			this->comboBoxStyle->Sorted = true;
			this->comboBoxStyle->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Style:";
			// 
			// CppDesigner
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->comboBoxStyle);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBoxLayouts);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->comboBoxCpp);
			this->Controls->Add(this->label1);
			this->Name = L"CppDesigner";
			this->Size = System::Drawing::Size(225, 187);
			this->Load += gcnew System::EventHandler(this, &CppDesigner::CppDesigner_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCreate_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void CppDesigner_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBoxCpp_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	};
}
