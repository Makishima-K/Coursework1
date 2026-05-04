#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>

#include <string>


[STAThreadAttribute]




int main(cli::array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Display::MyForm1 form;
    Application::Run(%form);
    return 0;
}