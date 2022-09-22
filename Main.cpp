#include "MyForm.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);


    User^ user = nullptr;
    while (true) {
        CarRental::MyForm loginForm;
        loginForm.ShowDialog();
        if (loginForm.switchToRegister) {
            CarRental::RegisterForm registerForm;
            registerForm.ShowDialog();
            if (registerForm.switchToLogin) {
                continue;
            }
        }
        else {
            user = loginForm.user;
            break;
        }
    }


    if (user != nullptr) {
        CarRental::MainForm mainForm(user);
        Application::Run(% mainForm);

    }
    else {
        MessageBox::Show("Loggin Canceled ", "Car Rental Software", MessageBoxButtons::OK);
    }

    //Application::Run(% loginForm);
}
