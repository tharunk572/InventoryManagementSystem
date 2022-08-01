#pragma once

namespace Project5 {

	using namespace System; 
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for SalesConformation
	/// </summary>
	public ref class SalesConformation : public System::Windows::Forms::Form
	{
	public:
		SalesConformation(void)
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
		~SalesConformation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button6;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(542, 219);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generate Invoice";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SalesConformation::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(88, 95);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(206, 207);
			this->dataGridView1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(146, 320);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 46);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Get Customer Data";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SalesConformation::button2_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(359, 221);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(356, 205);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Enter First  Customer ID  For Invoice";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(804, 412);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(79, 29);
			this->button6->TabIndex = 65;
			this->button6->Text = L"Exit";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &SalesConformation::button6_Click);
			// 
			// SalesConformation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(947, 463);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"SalesConformation";
			this->Text = L"SalesConformation";
			this->Load += gcnew System::EventHandler(this, &SalesConformation::SalesConformation_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SalesConformation_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ outfile = gcnew StreamReader(""+this->textBox1->Text+".txt");

		String^ line;
		line = outfile->ReadToEnd();
		MessageBox::Show(line);
		//outfile->ReadLine(line);

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void printPreviewControl1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ constring3 = "Data Source=localhost\\sqlexpress;Integrated Security=True";
	SqlConnection^ sqlConn3 = gcnew SqlConnection(constring3);
	SqlCommand^ cmdDataBase3 = gcnew SqlCommand("Select cid from dbo.CustomerOrder order by cid desc;", sqlConn3);
	//SqlDataReader^ myReader3;
	try {
		SqlDataAdapter^ SqlDataAdp = gcnew SqlDataAdapter();
		SqlDataAdp->SelectCommand = cmdDataBase3;
		DataTable^ dbdata = gcnew DataTable();
		SqlDataAdp->Fill(dbdata);
		BindingSource^ BindSource = gcnew BindingSource();
		BindSource->DataSource = dbdata;
		dataGridView1->DataSource = BindSource;
		SqlDataAdp->Update(dbdata);
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
