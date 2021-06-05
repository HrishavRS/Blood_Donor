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
	/// Summary for forgot
	/// </summary>
	public ref class forgot : public System::Windows::Forms::Form
	{
	public:
		forgot(void)
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
		~forgot()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(forgot::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// maskedTextBox1
			// 
			resources->ApplyResources(this->maskedTextBox1, L"maskedTextBox1");
			this->maskedTextBox1->Name = L"maskedTextBox1";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &forgot::button1_Click);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &forgot::button2_Click);
			// 
			// textBox2
			// 
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			// 
			// forgot
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"forgot";
			this->Load += gcnew System::EventHandler(this, &forgot::forgot_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void forgot_Load(System::Object^  sender, System::EventArgs^  e) {

	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 String^ username;
		 String^ pwd;
		 String^ pin;

		OleDbConnection^  conn = gcnew OleDbConnection ("PROVIDER=Microsoft.Jet.OLEDB.4.0;Data Source=BloodBank.mdb");
		OleDbCommand^ command = gcnew OleDbCommand("SELECT * FROM Login", conn);
		conn->Open();
		OleDbDataReader^ reader = command->ExecuteReader (System::Data::CommandBehavior::CloseConnection);
		while (reader->Read ())
		{
					username = reader["Username"]->ToString();
					pin = reader["ForgotPin"]->ToString();
		}
			if (pin==maskedTextBox1->Text){
			if(textBox2->Text == username) {
				
				username = textBox2->Text; 
				pwd = textBox1->Text;
				OleDbConnection^  conn = gcnew OleDbConnection ("PROVIDER=Microsoft.Jet.OLEDB.4.0;Data Source=BloodBank.mdb");
				OleDbCommand^ command = gcnew OleDbCommand("UPDATE Login SET Pwd='"+pwd+"' WHERE ForgotPin = 12345", conn);
				conn->Open();
				command->ExecuteNonQuery();
				conn->Close();
				MessageBox::Show("Password Change Succesful!");
			}
			}
			else{
				MessageBox::Show("Incorrect pin!");
			}
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 forgot::Visible=false;
		 }
};
}
