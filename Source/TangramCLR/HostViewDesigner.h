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
	/// Summary for HostViewDesigner
	/// </summary>
	public ref class HostViewDesigner : public System::Windows::Forms::UserControl
	{
	public:
		HostViewDesigner(void)
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
		~HostViewDesigner()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnHostView;
	private: System::Windows::Forms::Button^  btnPrevatChrome;
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
			this->btnHostView = (gcnew System::Windows::Forms::Button());
			this->btnPrevatChrome = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnHostView
			// 
			this->btnHostView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnHostView->Location = System::Drawing::Point(12, 12);
			this->btnHostView->Name = L"btnHostView";
			this->btnHostView->Size = System::Drawing::Size(440, 29);
			this->btnHostView->TabIndex = 0;
			this->btnHostView->Text = L"SetAsHostView";
			this->btnHostView->UseVisualStyleBackColor = true;
			this->btnHostView->Click += gcnew System::EventHandler(this, &HostViewDesigner::btnHostView_Click);
			// 
			// btnPrevatChrome
			// 
			this->btnPrevatChrome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnPrevatChrome->Location = System::Drawing::Point(12, 60);
			this->btnPrevatChrome->Name = L"btnPrevatChrome";
			this->btnPrevatChrome->Size = System::Drawing::Size(440, 29);
			this->btnPrevatChrome->TabIndex = 0;
			this->btnPrevatChrome->Text = L"New TangramWebPage";
			this->btnPrevatChrome->UseVisualStyleBackColor = true;
			this->btnPrevatChrome->Click += gcnew System::EventHandler(this, &HostViewDesigner::btnPrevatChrome_Click);
			// 
			// HostViewDesigner
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btnHostView);
			this->Controls->Add(this->btnPrevatChrome);
			this->Name = L"HostViewDesigner";
			this->Size = System::Drawing::Size(464, 406);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnHostView_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void HostViewDesigner_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnPrevatChrome_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
