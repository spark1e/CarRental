#pragma once

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
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelRegister;
	protected:
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::Label^ labelPassword;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ labelCPassword;
	private: System::Windows::Forms::TextBox^ tbCPassword;
	private: System::Windows::Forms::Button^ buttonOK;
	private: System::Windows::Forms::Button^ buttonCancel;
	private: System::Windows::Forms::LinkLabel^ linkLabelLogin;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->labelRegister = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelCPassword = (gcnew System::Windows::Forms::Label());
			this->tbCPassword = (gcnew System::Windows::Forms::TextBox());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->linkLabelLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// labelRegister
			// 
			this->labelRegister->AutoSize = true;
			this->labelRegister->BackColor = System::Drawing::Color::Transparent;
			this->labelRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->labelRegister->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelRegister->Location = System::Drawing::Point(81, 29);
			this->labelRegister->Name = L"labelRegister";
			this->labelRegister->Size = System::Drawing::Size(368, 54);
			this->labelRegister->TabIndex = 0;
			this->labelRegister->Text = L"Register New User";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->BackColor = System::Drawing::Color::Transparent;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelName->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelName->Location = System::Drawing::Point(86, 131);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(52, 21);
			this->labelName->TabIndex = 1;
			this->labelName->Text = L"Name";
			// 
			// labelUsername
			// 
			this->labelUsername->AutoSize = true;
			this->labelUsername->BackColor = System::Drawing::Color::Transparent;
			this->labelUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsername->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelUsername->Location = System::Drawing::Point(86, 182);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(81, 21);
			this->labelUsername->TabIndex = 2;
			this->labelUsername->Text = L"Username";
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->BackColor = System::Drawing::Color::Transparent;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPassword->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelPassword->Location = System::Drawing::Point(86, 235);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(76, 21);
			this->labelPassword->TabIndex = 3;
			this->labelPassword->Text = L"Password";
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::SystemColors::MenuText;
			this->tbName->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->tbName->Location = System::Drawing::Point(245, 133);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(172, 20);
			this->tbName->TabIndex = 4;
			// 
			// tbUsername
			// 
			this->tbUsername->BackColor = System::Drawing::SystemColors::MenuText;
			this->tbUsername->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->tbUsername->Location = System::Drawing::Point(245, 187);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(172, 20);
			this->tbUsername->TabIndex = 5;
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::SystemColors::MenuText;
			this->tbPassword->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->tbPassword->Location = System::Drawing::Point(245, 238);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '#';
			this->tbPassword->Size = System::Drawing::Size(172, 20);
			this->tbPassword->TabIndex = 6;
			// 
			// labelCPassword
			// 
			this->labelCPassword->AutoSize = true;
			this->labelCPassword->BackColor = System::Drawing::Color::Transparent;
			this->labelCPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCPassword->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->labelCPassword->Location = System::Drawing::Point(86, 283);
			this->labelCPassword->Name = L"labelCPassword";
			this->labelCPassword->Size = System::Drawing::Size(137, 21);
			this->labelCPassword->TabIndex = 3;
			this->labelCPassword->Text = L"Confirm Password";
			// 
			// tbCPassword
			// 
			this->tbCPassword->BackColor = System::Drawing::SystemColors::MenuText;
			this->tbCPassword->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->tbCPassword->Location = System::Drawing::Point(245, 286);
			this->tbCPassword->Name = L"tbCPassword";
			this->tbCPassword->PasswordChar = '#';
			this->tbCPassword->Size = System::Drawing::Size(172, 20);
			this->tbCPassword->TabIndex = 6;
			// 
			// buttonOK
			// 
			this->buttonOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonOK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonOK->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F));
			this->buttonOK->Location = System::Drawing::Point(90, 363);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(149, 34);
			this->buttonOK->TabIndex = 7;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = false;
			this->buttonOK->Click += gcnew System::EventHandler(this, &RegisterForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->BackColor = System::Drawing::Color::Black;
			this->buttonCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F));
			this->buttonCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->buttonCancel->Location = System::Drawing::Point(268, 363);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(149, 34);
			this->buttonCancel->TabIndex = 8;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = false;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &RegisterForm::buttonCancel_Click);
			// 
			// linkLabelLogin
			// 
			this->linkLabelLogin->AutoSize = true;
			this->linkLabelLogin->BackColor = System::Drawing::Color::Transparent;
			this->linkLabelLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkLabelLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabelLogin->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->linkLabelLogin->Location = System::Drawing::Point(93, 432);
			this->linkLabelLogin->Name = L"linkLabelLogin";
			this->linkLabelLogin->Size = System::Drawing::Size(148, 30);
			this->linkLabelLogin->TabIndex = 9;
			this->linkLabelLogin->TabStop = true;
			this->linkLabelLogin->Text = L"Back to LOGIN";
			this->linkLabelLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::linkLabelLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(900, 600);
			this->Controls->Add(this->linkLabelLogin);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->tbCPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->labelCPassword);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->labelRegister);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
public: bool switchToLogin = false;
private: System::Void linkLabelLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	switchToLogin = true;
	this->Close();
}


public: User^ user = nullptr;
private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = tbName->Text;
	String^ username = tbUsername->Text;
	String^ password = tbPassword->Text;
	String^ cpassword = tbCPassword->Text;

	if (name->Length == 0 || username->Length == 0 ||
		password->Length == 0 || cpassword->Length == 0) {
		MessageBox::Show("Please enter log in info for all fields.", "Empty Field Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::Compare(password, cpassword) != 0) {
		MessageBox::Show("Passwords do not match!", "Password Entry Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	try {
		String^ connString = "Data Source=localhost;Initial Catalog=db2;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO users " +
			"(name, username, password) VALUES " +
			"(@name, @username, @password);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@username", username);
		command.Parameters->AddWithValue("@password", password);

		command.ExecuteNonQuery();

		user = gcnew User;
		user->name = name;
		user->username = username;
		user->password = password;

		this->Close();

	}
	catch (Exception^ x) {
		MessageBox::Show("New user register failed!", "Register Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
