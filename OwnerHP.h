#pragma once
#include<algorithm>
#include <algorithm>
namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for OwnerHP
	/// </summary>
	public ref class OwnerHP : public System::Windows::Forms::Form
	{
	public:
		OwnerHP(void)
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
		~OwnerHP()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;




	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;



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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(208, 379);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 67);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OwnerHP::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(56, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 67);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OwnerHP::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(363, 379);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 67);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &OwnerHP::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(161, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 20);
			this->textBox1->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(64, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Product ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Product Name";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(161, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 20);
			this->textBox2->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(64, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Quantity";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(161, 157);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(198, 20);
			this->textBox3->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(64, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Price";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(161, 199);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(198, 20);
			this->textBox4->TabIndex = 16;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(198, 248);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 68);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Load Table";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &OwnerHP::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(429, 45);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(425, 266);
			this->dataGridView1->TabIndex = 25;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &OwnerHP::dataGridView1_CellContentClick_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(76, 352);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Quantity only";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(195, 352);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(141, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"All details Except Product ID";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(373, 352);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Only Product name";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(576, 379);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(194, 67);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Statistics";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &OwnerHP::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(816, 398);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(79, 29);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Exit";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &OwnerHP::button6_Click);
			// 
			// OwnerHP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(923, 458);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"OwnerHP";
			this->Text = L"OwnerHP";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=localhost\\sqlexpress;Integrated Security=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(constring);
		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO dbo.Products (pname,quantity,price) VALUES ('" + this->textBox2->Text + "','" + this->textBox4->Text + "','" + this->textBox3->Text + "');",sqlConn);
		SqlDataReader^ myReader;
		try {
			sqlConn->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Succesfully Added Product");
			while (myReader->Read())
			{
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring1 = "Data Source=localhost\\sqlexpress;Integrated Security=True";
		SqlConnection^ sqlConn1= gcnew SqlConnection(constring1);
		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("UPDATE dbo.Products SET  quantity =((select quantity from dbo.Products where pid='" + this->textBox1->Text + "')+('" + this->textBox4->Text + "')) WHERE pid ='" + this->textBox1->Text + "';",sqlConn1);								
		SqlDataReader^ myReader1;
		try {
			sqlConn1->Open();
			myReader1 = cmdDataBase1->ExecuteReader();
			int count = 0;
			while (myReader1->Read())
			{
				count++;
			}
			if (count == 1)
			{
				MessageBox::Show("Not Updated");
			}
			else if (count > 1)
			{
				MessageBox::Show("Already Updated");
			}
			else
			{
				MessageBox::Show("Succesfully Updated Quantity");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring2 = "Data Source=localhost\\sqlexpress;Integrated Security=True";
	SqlConnection^ sqlConn2 = gcnew SqlConnection(constring2);
	SqlCommand^ cmdDataBase2 = gcnew SqlCommand("DELETE from dbo.Products  WHERE pid ='" + this->textBox1->Text + "';", sqlConn2);
	SqlDataReader^ myReader2;
	try {
		sqlConn2->Open();
		myReader2 = cmdDataBase2->ExecuteReader();
		int count = 0;
		while (myReader2->Read())
		{
			count++;
		}
		if (count == 1)
		{
			MessageBox::Show("Not Deleted");
		}
		else if (count > 1)
		{
			MessageBox::Show("Already Deleted");
		}
		else
		{
			MessageBox::Show("Deleted");
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {


}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring3 = "Data Source=localhost\\sqlexpress;Integrated Security=True";
	SqlConnection^ sqlConn3 = gcnew SqlConnection(constring3);
	SqlCommand^ cmdDataBase3 = gcnew SqlCommand("select *from dbo.Products order by pname asc;", sqlConn3);
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
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
