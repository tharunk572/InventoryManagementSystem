#pragma once
#include"LoginOwner.h"
#include"LoginStaff.h"
namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Users
	/// </summary>
	public ref class Users : public System::Windows::Forms::Form
	{
	public:

		Users(void)
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
		~Users()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(218, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Users";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(169, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 84);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Owner";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Users::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 255);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 92);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Staff";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Users::button2_Click);
			// 
			// Users
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(483, 422);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Users";
			this->Text = L"Users";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		LoginOwner^ O = gcnew LoginOwner();
		O->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {	
		this->Hide();
		LoginStaff^S = gcnew LoginStaff();
		S-> Show();
	}
	};
	
}
