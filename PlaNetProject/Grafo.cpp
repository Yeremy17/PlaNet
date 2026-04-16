#include "Grafo.h"

Grafo::Grafo(int dato)
{
	this->matriz = new Matriz(dato);
	this->ciudades = new Ciudad(dato);

}

void Grafo::agregarNombreCiudad(string nombre)
{
	ciudades->agregarCiudad(nombre);
}

void Grafo::agregarRuta(string origen, string destino)
{
	if (ciudades->existeCiudad(origen) && ciudades->existeCiudad(destino))
	{
		int i = ciudades->buscarIndiceDeCiudad(origen);
		int j = ciudades->buscarIndiceDeCiudad(destino);

		matriz->setBinario(i, j, 1);
	}
}

bool Grafo::existeVueloDirecto(string origen, string destino)
{
	return 1;
}

bool Grafo::existeUnaEscala(string origen, string destino)
{
	return 1;
}

bool Grafo::existeDosEscalas(string origen, string destino)
{
	return 1;
}

string Grafo::obtenerRutaUnaEscala(string origen, string destino) {
	return "a";
}

string Grafo::obtenerRutaDosEscalas(string origen, string destino) {
	return "1";
}

Matriz* Grafo::getMatriz() {

	return this->matriz;
}
Ciudad* Grafo::getCiudades() {
	return this->ciudades;
}