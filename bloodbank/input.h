#using <mscorlib.dll>
#using <System.Data.dll>
#using <System.dll>

#pragma once

namespace bloodbank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::Data::OleDb;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for input
	/// </summary>
	public ref class input : public System::Windows::Forms::Form
	{
	public:
		input(void)
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
		~input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(86, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter New Donor\'s Info";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(58, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name:";
			this->label2->Click += gcnew System::EventHandler(this, &input::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(137, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(145, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(58, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 15);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Age:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(137, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(42, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(58, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Sex:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(137, 130);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(48, 17);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &input::rBmale_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(208, 130);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(59, 17);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &input::rBfemale_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(58, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 15);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Address:";
			this->label5->Click += gcnew System::EventHandler(this, &input::label5_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(137, 161);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(145, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &input::textBox3_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(57, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 15);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Contact No:";
			this->label6->Click += gcnew System::EventHandler(this, &input::label5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(137, 195);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(145, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &input::textBox3_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(58, 229);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 15);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Blood Group:";
			this->label7->Click += gcnew System::EventHandler(this, &input::label5_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"A+", L"A-", L"B+", L"B-", L"AB+", L"AB-", L"O+", 
				L"O-"});
			this->comboBox1->Location = System::Drawing::Point(137, 229);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(107, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(137, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &input::button1_Click);
			// 
			// input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(363, 314);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"input";
			this->Text = L"New Donor";
			this->Load += gcnew System::EventHandler(this, &input::input_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ sex;
#pragma endregion
	private: System::Void input_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private:void clear(){
			textBox1->Text="";
			textBox2->Text="";
			textBox3->Text="";
			textBox4->Text="";
			comboBox1->Text="";

		}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
					try {
						OleDbConnection^  conn = gcnew OleDbConnection ("PROVIDER=Microsoft.Jet.OLEDB.4.0;Data Source=BloodBank.mdb");
						OleDbCommand^ command = gcnew OleDbCommand("INSERT INTO [Donor] (Name, Age , Sex, Address, ContactNo, BloodGroup ) VALUES ('"+textBox1->Text+"',"+textBox2->Text+",'"+sex+"','"+textBox3->Text+"',"+textBox4->Text+",'"+comboBox1->Text+"')", conn);
						conn->Open();
						command->ExecuteNonQuery();
						MessageBox::Show("Record has successfully been added!");
						conn->Close();
						clear();
					} catch (Exception^ e) {
						MessageBox::Show("Record not added! Try again.");
					}
		 }
private: System::Void rBmale_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	 			 sex="male";
		 }
private: System::Void rBfemale_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 sex="female";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
					input::Visible=false;
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
