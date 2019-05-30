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
using namespace System::Collections::Generic;


namespace TangramDesigner {

	/// <summary>
	/// Summary for CLRCtrlDesigner
	/// </summary>
	public ref class CLRCtrlDesigner : public System::Windows::Forms::UserControl
	{
	public:
		CLRCtrlDesigner(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			m_strCurAssembly = nullptr;
			m_strCurAssemblys = nullptr;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CLRCtrlDesigner()
		{
			if (components)
			{
				delete components;
			}
		}

	private: 
		ComboBox^  comboBoxCLRCtrl;
		Label^  label1;
		Button^  btnLoadCtrl;
		Button^  btnCreate;
		String^ m_strCurAssembly;
		String^ m_strCurAssemblys;
		Dictionary<String^, String^>^	m_pTangramAssemblyDic = gcnew Dictionary<String^, String^>();
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
			this->comboBoxCLRCtrl = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnLoadCtrl = (gcnew System::Windows::Forms::Button());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBoxCLRCtrl
			// 
			this->comboBoxCLRCtrl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxCLRCtrl->DropDownHeight = 300;
			this->comboBoxCLRCtrl->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxCLRCtrl->DropDownWidth = 800;
			this->comboBoxCLRCtrl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxCLRCtrl->FormattingEnabled = true;
			this->comboBoxCLRCtrl->IntegralHeight = false;
			this->comboBoxCLRCtrl->ItemHeight = 16;
			this->comboBoxCLRCtrl->Location = System::Drawing::Point(19, 36);
			this->comboBoxCLRCtrl->Name = L"comboBoxCLRCtrl";
			this->comboBoxCLRCtrl->Size = System::Drawing::Size(217, 24);
			this->comboBoxCLRCtrl->Sorted = true;
			this->comboBoxCLRCtrl->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L".NET Control ID:";
			// 
			// btnLoadCtrl
			// 
			this->btnLoadCtrl->Location = System::Drawing::Point(126, 8);
			this->btnLoadCtrl->Name = L"btnLoadCtrl";
			this->btnLoadCtrl->Size = System::Drawing::Size(160, 22);
			this->btnLoadCtrl->TabIndex = 2;
			this->btnLoadCtrl->Text = L"Load .NET Ctrl Library";
			this->btnLoadCtrl->UseVisualStyleBackColor = true;
			this->btnLoadCtrl->Click += gcnew System::EventHandler(this, &CLRCtrlDesigner::btnLoadCtrl_Click);
			// 
			// btnCreate
			// 
			this->btnCreate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnCreate->Location = System::Drawing::Point(18, 70);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(218, 20);
			this->btnCreate->TabIndex = 3;
			this->btnCreate->Text = L"Create";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &CLRCtrlDesigner::btnCreate_Click);
			// 
			// CLRCtrlDesigner
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->btnLoadCtrl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxCLRCtrl);
			this->Name = L"CLRCtrlDesigner";
			this->Size = System::Drawing::Size(251, 166);
			this->Load += gcnew System::EventHandler(this, &CLRCtrlDesigner::CLRCtrlDesigner_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void btnLoadCtrl_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnCreate_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void CLRCtrlDesigner_Load(System::Object^  sender, System::EventArgs^  e);
	};
}
