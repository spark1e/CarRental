#ifndef _MYFORM_H
#define _MYFORM_H

#include "User.h"

namespace CarRental {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Button^ buttonRegister;

	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelSignin;
	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::Label^ labelPassword;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::TextBox^ tbPassword;


	private: System::Windows::Forms::Button^ buttonSignin;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::CheckBox^ cbAgree;
	private: System::Windows::Forms::Label^ labelTerms;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;



		   /// <summary>
		   /// Required designer variable.
		   /// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->labelSignin = (gcnew System::Windows::Forms::Label());
			   this->labelUsername = (gcnew System::Windows::Forms::Label());
			   this->labelPassword = (gcnew System::Windows::Forms::Label());
			   this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			   this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			   this->buttonSignin = (gcnew System::Windows::Forms::Button());
			   this->buttonExit = (gcnew System::Windows::Forms::Button());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->cbAgree = (gcnew System::Windows::Forms::CheckBox());
			   this->labelTerms = (gcnew System::Windows::Forms::Label());
			   this->buttonRegister = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // labelSignin
			   // 
			   this->labelSignin->AutoSize = true;
			   this->labelSignin->BackColor = System::Drawing::Color::Transparent;
			   this->labelSignin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			   this->labelSignin->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->labelSignin->Location = System::Drawing::Point(97, 101);
			   this->labelSignin->Name = L"labelSignin";
			   this->labelSignin->Size = System::Drawing::Size(153, 54);
			   this->labelSignin->TabIndex = 0;
			   this->labelSignin->Text = L"Sign In";
			   // 
			   // labelUsername
			   // 
			   this->labelUsername->AutoSize = true;
			   this->labelUsername->BackColor = System::Drawing::Color::Transparent;
			   this->labelUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->labelUsername->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelUsername->Location = System::Drawing::Point(102, 198);
			   this->labelUsername->Name = L"labelUsername";
			   this->labelUsername->Size = System::Drawing::Size(71, 19);
			   this->labelUsername->TabIndex = 1;
			   this->labelUsername->Text = L"Username";
			   // 
			   // labelPassword
			   // 
			   this->labelPassword->AutoSize = true;
			   this->labelPassword->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->labelPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->labelPassword->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->labelPassword->Location = System::Drawing::Point(102, 272);
			   this->labelPassword->Name = L"labelPassword";
			   this->labelPassword->Size = System::Drawing::Size(64, 17);
			   this->labelPassword->TabIndex = 2;
			   this->labelPassword->Text = L"Password";
			   // 
			   // tbUsername
			   // 
			   this->tbUsername->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->tbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tbUsername->ForeColor = System::Drawing::Color::White;
			   this->tbUsername->Location = System::Drawing::Point(106, 225);
			   this->tbUsername->Name = L"tbUsername";
			   this->tbUsername->Size = System::Drawing::Size(289, 18);
			   this->tbUsername->TabIndex = 3;
			   this->tbUsername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			   // 
			   // tbPassword
			   // 
			   this->tbPassword->BackColor = System::Drawing::Color::Black;
			   this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F));
			   this->tbPassword->ForeColor = System::Drawing::Color::White;
			   this->tbPassword->Location = System::Drawing::Point(106, 306);
			   this->tbPassword->Name = L"tbPassword";
			   this->tbPassword->Size = System::Drawing::Size(289, 18);
			   this->tbPassword->TabIndex = 4;
			   this->tbPassword->UseSystemPasswordChar = true;
			   this->tbPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox2_KeyDown);
			   // 
			   // buttonSignin
			   // 
			   this->buttonSignin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(128)));
			   this->buttonSignin->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->buttonSignin->Enabled = false;
			   this->buttonSignin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->buttonSignin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->buttonSignin->Location = System::Drawing::Point(105, 402);
			   this->buttonSignin->Name = L"buttonSignin";
			   this->buttonSignin->Size = System::Drawing::Size(144, 46);
			   this->buttonSignin->TabIndex = 5;
			   this->buttonSignin->Text = L"Sign In";
			   this->buttonSignin->UseVisualStyleBackColor = false;
			   this->buttonSignin->Click += gcnew System::EventHandler(this, &MyForm::buttonSignin_Click);
			   // 
			   // buttonExit
			   // 
			   this->buttonExit->BackColor = System::Drawing::Color::Transparent;
			   this->buttonExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->buttonExit->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->buttonExit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F));
			   this->buttonExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(128)));
			   this->buttonExit->Location = System::Drawing::Point(105, 472);
			   this->buttonExit->Name = L"buttonExit";
			   this->buttonExit->Size = System::Drawing::Size(294, 46);
			   this->buttonExit->TabIndex = 6;
			   this->buttonExit->Text = L"Exit";
			   this->buttonExit->UseVisualStyleBackColor = false;
			   this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // panel1
			   // 
			   this->panel1->Location = System::Drawing::Point(105, 249);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(290, 4);
			   this->panel1->TabIndex = 7;
			   // 
			   // panel2
			   // 
			   this->panel2->Location = System::Drawing::Point(106, 330);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(290, 4);
			   this->panel2->TabIndex = 8;
			   // 
			   // cbAgree
			   // 
			   this->cbAgree->AutoSize = true;
			   this->cbAgree->BackColor = System::Drawing::Color::Transparent;
			   this->cbAgree->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->cbAgree->ForeColor = System::Drawing::Color::White;
			   this->cbAgree->Location = System::Drawing::Point(105, 354);
			   this->cbAgree->Name = L"cbAgree";
			   this->cbAgree->Size = System::Drawing::Size(111, 23);
			   this->cbAgree->TabIndex = 9;
			   this->cbAgree->Text = L"I agree to the";
			   this->cbAgree->UseMnemonic = false;
			   this->cbAgree->UseVisualStyleBackColor = false;
			   this->cbAgree->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			   // 
			   // labelTerms
			   // 
			   this->labelTerms->AutoSize = true;
			   this->labelTerms->BackColor = System::Drawing::Color::Transparent;
			   this->labelTerms->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->labelTerms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->labelTerms->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(128)));
			   this->labelTerms->Location = System::Drawing::Point(207, 356);
			   this->labelTerms->Name = L"labelTerms";
			   this->labelTerms->Size = System::Drawing::Size(142, 19);
			   this->labelTerms->TabIndex = 10;
			   this->labelTerms->Text = L"Terms and Conditions";
			   this->labelTerms->Click += gcnew System::EventHandler(this, &MyForm::labelTerms_Click);
			   // 
			   // buttonRegister
			   // 
			   this->buttonRegister->BackColor = System::Drawing::Color::Transparent;
			   this->buttonRegister->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->buttonRegister->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->buttonRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->buttonRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F));
			   this->buttonRegister->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(128)));
			   this->buttonRegister->Location = System::Drawing::Point(255, 402);
			   this->buttonRegister->Name = L"buttonRegister";
			   this->buttonRegister->Size = System::Drawing::Size(144, 46);
			   this->buttonRegister->TabIndex = 12;
			   this->buttonRegister->Text = L"Register";
			   this->buttonRegister->UseVisualStyleBackColor = false;
			   this->buttonRegister->Click += gcnew System::EventHandler(this, &MyForm::buttonRegister_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(900, 600);
			   this->Controls->Add(this->buttonRegister);
			   this->Controls->Add(this->labelTerms);
			   this->Controls->Add(this->cbAgree);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->buttonExit);
			   this->Controls->Add(this->buttonSignin);
			   this->Controls->Add(this->tbPassword);
			   this->Controls->Add(this->tbUsername);
			   this->Controls->Add(this->labelPassword);
			   this->Controls->Add(this->labelUsername);
			   this->Controls->Add(this->labelSignin);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Name = L"MyForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"MyForm";
			   this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			   this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			   this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	//Init null user instance for Login Form
	public: User^ user = nullptr;

	private: System::Void buttonSignin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->tbUsername->Text;
		String^ password = this->tbPassword->Text;

		//check if username or password empty
		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter username and password!", "Username or Password Empty", 
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		try {
			String^ connString = "Data Source=localhost;Initial Catalog=db2;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE username=@username AND password=@password;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@password", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) 
			{
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->username = reader->GetString(2);
				user->password = reader->GetString(3);
				this->Close();
			}
			else {
				MessageBox::Show("Username or password is incorrect!", "Username or Password Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch(Exception^ e) {
			MessageBox::Show("Failed to connect to the local database.", "Database Connection Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cbAgree->Checked) buttonSignin->Enabled = true;
		else buttonSignin->Enabled = false;
	}
		   //dragging the form
		   bool windowDrag;
		   Point offset;
	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//enable window dragging
		windowDrag = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//disable window dragging
		windowDrag = false;
	}
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (windowDrag) {
			Point currentWindowPosition = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentWindowPosition.X - offset.X, currentWindowPosition.Y - offset.Y);
		}
	}
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) tbPassword->Focus();
	}
	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) buttonSignin->PerformClick();
	}
	public: bool switchToRegister = false;

	private: System::Void buttonRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}
private: System::Void labelTerms_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("By accessing this software we assume you accept these terms and conditions." + 
		" Do not continue to use software if you do not agree to take all of the terms and conditions stated on this page.", 
		"Terms and Conditions", MessageBoxButtons::OK);
}
};
}


#endif