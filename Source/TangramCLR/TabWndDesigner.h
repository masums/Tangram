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
	/// Summary for TabWndDesigner
	/// </summary>
	public ref class TabWndDesigner : public System::Windows::Forms::UserControl
	{
	public:
		TabWndDesigner(void)
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
		~TabWndDesigner()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBoxTabs;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBoxLayouts;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBoxStyle;
	private: System::Windows::Forms::Button^  btnCreate;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  PagessUpDown;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TabWndDesigner::typeid));
			this->comboBoxTabs = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxLayouts = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBoxStyle = (gcnew System::Windows::Forms::ComboBox());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->PagessUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PagessUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBoxTabs
			// 
			this->comboBoxTabs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxTabs->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxTabs->DropDownWidth = 300;
			this->comboBoxTabs->FormattingEnabled = true;
			this->comboBoxTabs->Location = System::Drawing::Point(15, 27);
			this->comboBoxTabs->Name = L"comboBoxTabs";
			this->comboBoxTabs->Size = System::Drawing::Size(213, 21);
			this->comboBoxTabs->Sorted = true;
			this->comboBoxTabs->TabIndex = 0;
			this->comboBoxTabs->SelectedIndexChanged += gcnew System::EventHandler(this, &TabWndDesigner::comboBoxTabs_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tabbed Window ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Layouts:";
			// 
			// comboBoxLayouts
			// 
			this->comboBoxLayouts->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxLayouts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxLayouts->DropDownWidth = 300;
			this->comboBoxLayouts->FormattingEnabled = true;
			this->comboBoxLayouts->Location = System::Drawing::Point(15, 78);
			this->comboBoxLayouts->Name = L"comboBoxLayouts";
			this->comboBoxLayouts->Size = System::Drawing::Size(213, 21);
			this->comboBoxLayouts->Sorted = true;
			this->comboBoxLayouts->TabIndex = 3;
			this->comboBoxLayouts->SelectedIndexChanged += gcnew System::EventHandler(this, &TabWndDesigner::comboBoxLayouts_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Style:";
			// 
			// comboBoxStyle
			// 
			this->comboBoxStyle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxStyle->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxStyle->DropDownWidth = 300;
			this->comboBoxStyle->FormattingEnabled = true;
			this->comboBoxStyle->Location = System::Drawing::Point(15, 130);
			this->comboBoxStyle->Name = L"comboBoxStyle";
			this->comboBoxStyle->Size = System::Drawing::Size(213, 21);
			this->comboBoxStyle->Sorted = true;
			this->comboBoxStyle->TabIndex = 5;
			// 
			// btnCreate
			// 
			this->btnCreate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnCreate->Location = System::Drawing::Point(15, 191);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(213, 24);
			this->btnCreate->TabIndex = 6;
			this->btnCreate->Text = L"Create";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &TabWndDesigner::btnCreate_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Pages:";
			// 
			// PagessUpDown
			// 
			this->PagessUpDown->Location = System::Drawing::Point(58, 163);
			this->PagessUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32, 0, 0, 0 });
			this->PagessUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->PagessUpDown->Name = L"PagessUpDown";
			this->PagessUpDown->Size = System::Drawing::Size(35, 20);
			this->PagessUpDown->TabIndex = 8;
			this->PagessUpDown->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PagessUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// TabWndDesigner
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Controls->Add(this->label4);
			this->Controls->Add(this->PagessUpDown);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->comboBoxStyle);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBoxLayouts);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxTabs);
			this->Name = L"TabWndDesigner";
			this->Size = System::Drawing::Size(244, 242);
			this->Load += gcnew System::EventHandler(this, &TabWndDesigner::TabWndDesigner_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PagessUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TabWndDesigner_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBoxTabs_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBoxLayouts_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnCreate_Click(System::Object^  sender, System::EventArgs^  e);
};
}
