
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
	/// Summary for show
	/// </summary>
	public ref class show : public System::Windows::Forms::Form
	{
	public:
		show(void)
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
		~show()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;

	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;










	private: System::ComponentModel::IContainer^  components;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(556, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"View";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &show::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 133);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(861, 207);
			this->dataGridView1->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {L"A+", L"A-", L"AB+", L"AB-", L"B+", L"B-", L"O-", 
				L"O+"});
			this->comboBox1->Location = System::Drawing::Point(278, 69);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(66, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Male", L"Female"});
			this->comboBox2->Location = System::Drawing::Point(370, 69);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(66, 21);
			this->comboBox2->TabIndex = 3;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(271, 46);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(84, 17);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Blood Group";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &show::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(370, 46);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(43, 17);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Sex";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &show::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(465, 46);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(44, 17);
			this->radioButton3->TabIndex = 7;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Age";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &show::radioButton3_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(268, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Search By:";
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(556, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &show::button2_Click_1);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(822, 346);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(51, 23);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &show::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(465, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 20);
			this->textBox1->TabIndex = 21;
			// 
			// show
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(885, 390);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"show";
			this->Text = L"View";
			this->Load += gcnew System::EventHandler(this, &show::show_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		 
#pragma endregion

private: void loader(){
		 OleDbConnection^  conn = gcnew OleDbConnection ("PROVIDER=Microsoft.Jet.OLEDB.4.0;Data Source=BloodBank.mdb");
				 OleDbDataAdapter^ data = gcnew OleDbDataAdapter(L"SELECT * FROM [Donor]", conn);
				 DataSet^ dataset = gcnew DataSet("Donor");
				 data->Fill( dataset);
				 dataGridView1-> DataSource = dataset->Tables->default[0]->DefaultView;
		 }
	private: System::Void show_Load(System::Object^  sender, System::EventArgs^  e) {
				 loader();
			 }


private: void view(int a) {

		 try {
			 if (radioButton1->Checked){
				 OleDbConnection^  conn = gcnew OleDbConnection ("PROVIDER=Microsoft.Jet.OLEDB.4.0;Data Source=BloodBank.mdb");
				 OleDbDataAdapter^ data = gcnew OleDbDataAdapter(L"SELECT * FROM [Donor] WHERE BloodGroup = ('"+comboBox1->Text+"')", conn);
				 
				 DataSet^ dataset = gcnew DataSet("Donor");
				 data->Fill( dataset);
				 dataGridView1-> DataSource = dataset->Tables->default[0]->DefaultView;
			 
			 }
			 else if(radioButton2->Checked){
				 OleDbConnection^  conn = gcnew OleDbConnection ("PROVIDER=Microsoft.Jet.OLEDB.4.0;Data Source=BloodBank.mdb");
				 OleDbDataAdapter^ data = gcnew OleDbDataAdapter(L"SELECT * FROM [Donor] WHERE Sex = ('"+comboBox2->Text+"')", conn);
				 DataSet^ dataset = gcnew DataSet("Donor");
				 data->Fill( dataset);
				 dataGridView1-> DataSource = dataset->Tables->default[0]->DefaultView;
			 
			 }
			 else{
				 OleDbConnection^  conn = gcnew OleDbConnection ("PROVIDER=Microsoft.Jet.OLEDB.4.0;Data Source=BloodBank.mdb");
				 OleDbDataAdapter^ data = gcnew OleDbDataAdapter(L"SELECT * FROM [Donor] WHERE Age = ("+textBox1->Text+") ", conn);
				 DataSet^ dataset = gcnew DataSet("Donor");
				 data->Fill( dataset);
				 dataGridView1-> DataSource = dataset->Tables->default[0]->DefaultView; 
			 }		
									
			 } catch(Exception^ E) {
				if(a==1) {
				 MessageBox::Show("Category not selected!");
				} else if(a==0) {
			 OleDbConnection^  conn = gcnew OleDbConnection ("PROVIDER=Microsoft.Jet.OLEDB.4.0;Data Source=BloodBank.mdb");
				 OleDbDataAdapter^ data = gcnew OleDbDataAdapter(L"SELECT * FROM [Donor]", conn);
				 
				 DataSet^ dataset = gcnew DataSet("Donor");
				 data->Fill( dataset);
				 dataGridView1-> DataSource = dataset->Tables->default[0]->DefaultView;
		}
			 }
		}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 view(1);
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Enabled = false;
			 comboBox2->Enabled = true;
			 comboBox1->Enabled = false;
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Enabled = false;
			 comboBox1->Enabled = true;
			 comboBox2->Enabled = false;
		 }
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 comboBox1->Enabled = false;
			 textBox1->Enabled = true;
			 comboBox2->Enabled = false;
		 }


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
					show::Visible=false;
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			try{
			 String^ k = (System::String^)this->dataGridView1->CurrentRow->Cells[0]->Value->ToString();

			OleDbConnection^  conn = gcnew OleDbConnection ("PROVIDER=Microsoft.Jet.OLEDB.4.0;Data Source=BloodBank.mdb");
			OleDbCommand^ command = gcnew OleDbCommand("DELETE * FROM Donor WHERE DonorID = ("+k+") ", conn);
			conn->Open();
			command->ExecuteNonQuery();
			MessageBox::Show("Record successfully deleted!");
			conn->Close();
			view(0);
			} catch(Exception^ E) {
				MessageBox::Show("Record not deleted. Try Again!");
			}
		 }
};
}
