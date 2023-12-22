#include "Main.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::Main form; //назва створеного проекту
	Application::Run(% form); //запуск форми
}