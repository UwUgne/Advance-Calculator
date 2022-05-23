#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array < String^>^ args)
{
Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
AdvanceCalculator::Main form;
Application::Run(% form);
}