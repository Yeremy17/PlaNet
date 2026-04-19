#pragma once
#include "Grafo.h"

//registra todas las ciudades y rutas de TACA y Avianca
//aqui el grafo ya tiene todas las ciudades y rutas

class CargadorRutas
{
public:
    static void cargarTodo(Grafo* grafo);

private:
    static void cargarCiudades(Grafo* grafo);
    static void cargarRutasTACA(Grafo* grafo);
    static void cargarRutasAvianca(Grafo* grafo);
};
