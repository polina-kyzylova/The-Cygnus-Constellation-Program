#include "UnitMain.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab7_Kyzylova_Task1_Graph::UnitMain form;
	Application::Run(%form);
}


