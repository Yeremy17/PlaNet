#pragma once
#include "Matriz.h"
#include "Ciudad.h"

class Grafo
{
private:
	Matriz* matriz;
	Ciudad* ciudades;

    string escalas1[15];
    string escalas2[2][15];

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

    void obtener1Escala(string origen, string destino);
    void obtener2Escala(string origen, string destino);

    Matriz* getMatriz();
    Ciudad* getCiudades();
    string getEscala(int ind);
    string getEscalas(int ind, int ind2);
};

