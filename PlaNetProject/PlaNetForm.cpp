#include <windows.h>
#include <iostream>
#include "PlaNetForm.h"
#include "Matriz.h"
#include "Ciudad.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
	AllocConsole();

	FILE* fp;
	freopen_s(&fp, "CONOUT$", "w", stdout);
	freopen_s(&fp, "CONIN$", "r", stdin);








	//BORRA DSPS ES PRUEBA DE CONSOLITA
	std::cout << "Consola activa!" << std::endl;

	cout << "=== PRUEBA MATRIZ + CIUDADES ===" << endl;

	Ciudad* c = new Ciudad(10);

	c->agregarCiudad("Lima");
	c->agregarCiudad("Cusco");
	c->agregarCiudad("Arequipa");

	cout << "Indice Lima: " << c->buscarIndiceDeCiudad("Lima") << endl;
	cout << "Indice Cusco: " << c->buscarIndiceDeCiudad("Cusco") << endl;

	Matriz* m = new Matriz(10);

	int i = c->buscarIndiceDeCiudad("Lima");
	int j = c->buscarIndiceDeCiudad("Cusco");

	m->setBinario(i, j, 1);
	m->setBinario(j, i, 1);

	cout << "\nMatriz:\n";

	for (int fila = 0; fila < c->getCantidad(); fila++)
	{
		for (int col = 0; col < c->getCantidad(); col++)
		{
			cout << m->getBinario(fila, col) << " ";
		}
		cout << endl;
	}














	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew PlaNetProject::PlaNetForm()); // gcnew "NombreDelProyecto":"NombreDelForms"()

	return;
}
