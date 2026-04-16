#include <windows.h>
#include <iostream>
#include "PlaNetForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
	AllocConsole();

	FILE* fp;
	freopen_s(&fp, "CONOUT$", "w", stdout);
	freopen_s(&fp, "CONIN$", "r", stdin);

	std::cout << "Consola activa!" << std::endl;

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew PlaNetProject::PlaNetForm()); // gcnew "NombreDelProyecto":"NombreDelForms"()
}
