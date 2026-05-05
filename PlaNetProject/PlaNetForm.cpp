#include "PlaNetForm.h"
#include "Grafo.h"
#include "CargadorRutas.h"



using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
   
    /// <-


    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew PlaNetProject::PlaNetForm()); // gcnew "NombreDelProyecto":"NombreDelForms"()

    return;
}