#include "Users.h"
#include"LoginOwner.h"
#include"LoginStaff.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project5::Users B;
	Application::Run(% B);
}