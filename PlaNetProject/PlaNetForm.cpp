#include <windows.h>
#include <iostream>
#include "PlaNetForm.h"
#include "Matriz.h"
#include "Ciudad.h"
#include "Grafo.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
	AllocConsole();

	FILE* fp;
	freopen_s(&fp, "CONOUT$", "w", stdout);
	freopen_s(&fp, "CONIN$", "r", stdin);


    /// ->

	//BORRA DSPS ES PRUEBA DE CONSOLITA
    cout << "=== PRUEBA PLANET ===" << endl;

    // 1. Crear grafo con capacidad
    Grafo* g = new Grafo(20);

    // 2. Agregar ciudades
    g->agregarNombreCiudad("Lima");
    g->agregarNombreCiudad("Cusco");
    g->agregarNombreCiudad("Arequipa");
    g->agregarNombreCiudad("Bogota");
    g->agregarNombreCiudad("Madrid");

    // 3. Agregar rutas (relaciones binarias)
    g->agregarRuta("Lima", "Cusco");
    g->agregarRuta("Cusco", "Bogota");
    g->agregarRuta("Bogota", "Madrid");
    g->agregarRuta("Lima", "Arequipa");

    cout << "\n--- PRUEBAS ---\n";

    // 4. Vuelo directo
    cout << "Existe Lima -> Cusco directo...... ";
    cout << (g->existeVueloDirecto("Lima", "Cusco") ? "SI" : "NO") << endl;

    // 5. Una escala
    cout << "Existe Lima -> Bogota con 1 escala..... ";
    cout << (g->existeUnaEscala("Lima", "Bogota") ? "SI" : "NO") << endl;

    // 6. Dos escalas
    cout << "Existe Lima -> Madrid con 2 escalas........ ";
    cout << (g->existeDosEscalas("Lima", "Madrid") ? "SI" : "NO") << endl;

    // 7. Mostrar ruta con una escala
    cout << "\nRuta Lima -> Bogota (1 escala):\n";
    cout << g->obtenerRutaUnaEscala("Lima", "Bogota") << endl;

    // 8. Mostrar ruta con dos escalas
    cout << "Ruta Lima -> Madrid (2 escalas):\n";
    cout << g->obtenerRutaDosEscalas("Lima", "Madrid") << endl;

    // 9. Caso que NO existe
    cout << "\nArequipa -> Madrid directo ";
    cout << (g->existeVueloDirecto("Arequipa", "Madrid") ? "SI" : "NO") << endl;

    delete g;

    /// <-


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew PlaNetProject::PlaNetForm()); // gcnew "NombreDelProyecto":"NombreDelForms"()

	return;
}
