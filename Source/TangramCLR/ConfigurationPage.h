#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace TangramDesigner {

	/// <summary>
	/// Summary for ConfigurationPage
	/// </summary>
	public ref class ConfigurationPage : public System::Windows::Forms::UserControl
	{
	public:
		ConfigurationPage(void)
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
		~ConfigurationPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  txtDataPath;

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
			this->txtDataPath = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Data Path:";
			// 
			// txtDataPath
			// 
			this->txtDataPath->Location = System::Drawing::Point(78, 13);
			this->txtDataPath->Name = L"txtDataPath";
			this->txtDataPath->Size = System::Drawing::Size(220, 20);
			this->txtDataPath->TabIndex = 1;
			// 
			// ConfigurationPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->txtDataPath);
			this->Controls->Add(this->label1);
			this->Name = L"ConfigurationPage";
			this->Size = System::Drawing::Size(327, 360);
			this->Load += gcnew System::EventHandler(this, &ConfigurationPage::ConfigurationPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConfigurationPage_Load(System::Object^  sender, System::EventArgs^  e);
	};
}
