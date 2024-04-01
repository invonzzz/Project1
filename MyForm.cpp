#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;


[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    InvForm::MyForm form;
    Application::Run(% form);
}
