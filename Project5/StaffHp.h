#pragma once
#include "SalesConformation.h"
namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for StaffHp
	/// </summary>
	public ref class StaffHp : public System::Windows::Forms::Form
	{
	public:
		StaffHp(void)
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
		~StaffHp()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;





	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button3;


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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(654, 129);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(245, 20);
			this->textBox2->TabIndex = 22;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(654, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(245, 20);
			this->textBox1->TabIndex = 21;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &StaffHp::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(847, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Go To Sales";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StaffHp::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(532, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Customer Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(529, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Contact Number";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(49, 53);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(357, 346);
			this->dataGridView1->TabIndex = 38;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StaffHp::dataGridView1_CellContentClick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(173, 421);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 28);
			this->button4->TabIndex = 45;
			this->button4->Text = L"View Products";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &StaffHp::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(529, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 47;
			this->label1->Text = L"Customer ID";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(789, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 48;
			this->button2->Text = L"Update Details";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StaffHp::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->AllowDrop = true;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cash only", L"Online Payment" });
			this->comboBox1->Location = System::Drawing::Point(654, 167);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(225, 21);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 49;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(527, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 50;
			this->label4->Text = L"Payment Method";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(654, 47);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(239, 20);
			this->numericUpDown1->TabIndex = 51;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(532, 258);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 52;
			this->label5->Text = L"Product ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(723, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 53;
			this->label6->Text = L"Quantity";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(451, 295);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(186, 20);
			this->textBox3->TabIndex = 54;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(664, 295);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(229, 20);
			this->textBox4->TabIndex = 55;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(623, 346);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 56;
			this->button3->Text = L"Update Details";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &StaffHp::button3_Click);
			// 
			// StaffHp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(964, 461);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"StaffHp";
			this->Text = L"StaffHp";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	/*private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Items->Add(textBox3->Text);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Items->Remove(textBox3->Text);
	}*/
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring3 = "Data Source=localhost\\sqlexpress;Integrated Security=True";
	SqlConnection^ sqlConn3 = gcnew SqlConnection(constring3);
	SqlCommand^ cmdDataBase3 = gcnew SqlCommand("select *from dbo.Products;", sqlConn3);
	//SqlDataReader^myReader4;
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
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//String^ constring = "Data Source=localhost\\sqlexpress;Integrated Security=True";
	//SqlConnection^ sqlConn = gcnew SqlConnection(constring);
	//SqlCommand^ cmdDataBase = gcnew SqlCommand("", sqlConn);
	//SqlDataReader^ myReader;
	//try {
		//sqlConn->Open();
		//myReader = cmdDataBase->ExecuteReader();
		//MessageBox::Show("Succesfully Added Order Details");
		this->Hide();
		SalesConformation^ SC = gcnew SalesConformation();
		SC->Show();
		//while (myReader->Read())
		//{
		//}
	//}
	//catch (Exception^ ex)
	//{
	//	MessageBox::Show(ex->Message);
	//}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring4 = "Data Source=localhost\\sqlexpress;Integrated Security=True";
	SqlConnection^ sqlConn4 = gcnew SqlConnection(constring4);
	SqlCommand^ cmdDataBase4 = gcnew SqlCommand("INSERT INTO dbo.Customer (cid,cname,cnum,paymethod) VALUES ('" + this->numericUpDown1->Text + "','" + this->textBox1->Text + "','" + this->textBox2->Text + "','" + this->comboBox1->Text + "');", sqlConn4);
	SqlDataReader^ myReader4;
	try {
		sqlConn4->Open();
		myReader4 = cmdDataBase4->ExecuteReader();
		MessageBox::Show("Succesfully Added Customer Details");
		while (myReader4->Read())
		{
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=localhost\\sqlexpress;Integrated Security=True";
	SqlConnection^ sqlConn = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO dbo.CustomerOrder (cid,pname,quantity) VALUES ('" + this->numericUpDown1->Text + "','" + this->textBox3->Text + "','" + this->textBox4->Text + "');", sqlConn);
	SqlCommand^ cmdDataBase1 = gcnew SqlCommand("UPDATE dbo.Products SET  quantity =((select quantity from dbo.Products where pname='"+ this->textBox3->Text +"')-('" + this->textBox4->Text + "')) WHERE pname ='" + this->textBox3->Text + "';", sqlConn);
	SqlDataReader^ myReader;
	try {
		sqlConn->Open();
		myReader = cmdDataBase->ExecuteReader();
		myReader->Close();
		myReader = cmdDataBase1->ExecuteReader();
		MessageBox::Show("Succesfully Added Order Details");
		while (myReader->Read())
		{
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	/*try {
		if (this->textBox1->Text=60 &&)
		{

		}
	}
	catch (Exception^ e)
	{

	}*/

}
};
}