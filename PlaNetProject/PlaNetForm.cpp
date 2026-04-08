#include "PlaNetForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew PlaNetProject::PlaNetForm()); // gcnew "NombreDelProyecto":"NombreDelForms"()
}

// Model: Clases: .cpp, .h
// Resource: Imagenes, Fondos, SpritesImagen
// Service: Logica de programa: Service.cpp, Service.h
// UI: Formularios: Frm.cpp, Frm.h

// Source.cpp: Main principal