#pragma once
#include "Matriz.h"
#include "Ciudad.h"

class Grafo
{
private:
	Matriz* matriz;
	Ciudad* ciudades;

public:
    Grafo(int dato);
    ~Grafo();

    void agregarNombreCiudad(string nombre);
    void agregarRuta(string origen, string destino);

    bool existeVueloDirecto(string origen, string destino);
    bool existeUnaEscala(string origen, string destino);
    bool existeDosEscalas(string origen, string destino);

    string obtenerRutaUnaEscala(string origen, string destino);
    string obtenerRutaDosEscalas(string origen, string destino);

    Matriz* getMatriz();
    Ciudad* getCiudades();
};

