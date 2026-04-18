#include <windows.h>
#include <iostream>
#include "PlaNetForm.h"
#include "Matriz.h"
#include "Ciudad.h"
#include "Grafo.h"
#include "CargadorRutas.h"

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
    Grafo* g = new Grafo(100);

    // 2. Agregar ciudades(en este caso está todo dentro de la clase)
    CargadorRutas::cargarTodo(g);

    cout << "Ciudades cargadas: " << g->getCiudades()->getCantidad() << endl;


    cout << "\n--- PRUEBA VUELO DIRECTO ---" << endl;
    cout << "Lima -> Cusco directo: ";
    cout << (g->existeVueloDirecto("Lima", "Cusco") ? "SI" : "NO") << endl;

    cout << "Lima -> Madrid directo: ";
    cout << (g->existeVueloDirecto("Lima", "Madrid") ? "SI" : "NO") << endl;

    cout << "\n--- PRUEBA UNA ESCALA ---" << endl;
    cout << "Lima -> Bogota con 1 escala: ";
    cout << (g->existeUnaEscala("Lima", "Bogota") ? "SI" : "NO") << endl;

    cout << g->obtenerRutaUnaEscala("Lima", "Bogota") << endl;

    cout << "\n--- PRUEBA DOS ESCALAS ---" << endl;
    cout << "Lima -> Madrid con 2 escalas: ";
    cout << (g->existeDosEscalas("Lima", "Madrid") ? "SI" : "NO") << endl;

    cout << g->obtenerRutaDosEscalas("Lima", "Madrid") << endl;

    delete g;

    /// <-


    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew PlaNetProject::PlaNetForm()); // gcnew "NombreDelProyecto":"NombreDelForms"()

    return;
}