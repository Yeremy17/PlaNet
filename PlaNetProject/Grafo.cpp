#include "Grafo.h"
#include <iostream>

Grafo::Grafo(int dato)  // aqui se usan relaciones, y conjuntos { posicion, "ciudad" } 
{
	this->matriz = new Matriz(dato);
	this->ciudades = new Ciudad(dato);

}

Grafo::~Grafo()
{
	delete matriz;
	delete ciudades;
}

void Grafo::agregarNombreCiudad(string nombre)		// añadir desde grafo grafico
{
	ciudades->agregarCiudad(nombre);
}

void Grafo::agregarRuta(string origen, string destino)	// agregar ruta = agregar vuelo directo
{
	if (ciudades->existeCiudad(origen) && ciudades->existeCiudad(destino))
	{
		int i = ciudades->buscarIndiceDeCiudad(origen);
		int j = ciudades->buscarIndiceDeCiudad(destino);

		matriz->setBinario(i, j, 1);  // relacion binaria
	}
}

bool Grafo::existeVueloDirecto(string origen, string destino)
{
	int i = ciudades->buscarIndiceDeCiudad(origen);
	int j = ciudades->buscarIndiceDeCiudad(destino);

	if (i == -1 || j == -1)
		return false;

	return matriz->getBinario(i, j) == 1;	// 1-> si hay vuelo directo 0-> no hay
}

bool Grafo::existeUnaEscala(string origen, string destino)
{
	Matriz* A2 = matriz->elevarMatriz(2);

	int i = ciudades->buscarIndiceDeCiudad(origen);  // buscar para obtener
	int j = ciudades->buscarIndiceDeCiudad(destino);

	if (i == -1 || j == -1)
	{
		delete A2;
		return false;
	}

	bool existe = A2->getBinario(i, j);		// obtener valor
	delete A2;

	return existe;
}

bool Grafo::existeDosEscalas(string origen, string destino)
{
	Matriz* A3 = matriz->elevarMatriz(3);

	int i = ciudades->buscarIndiceDeCiudad(origen);
	int j = ciudades->buscarIndiceDeCiudad(destino);

	if (i == -1 || j == -1)
	{
		delete A3;
		return false;
	}

	if (A3->getBinario(i, j) == 0)
	{
		delete A3;
		return false;
	}

	delete A3;

	// validar ruta real
	for (int k = 0; k < ciudades->getCantidad(); k++)
	{
		for (int q = 0; q < ciudades->getCantidad(); q++)
		{
			if (
				matriz->getBinario(i, k) == 1 &&
				matriz->getBinario(k, q) == 1 &&
				matriz->getBinario(q, j) == 1 &&
				i != k && i != q && k != q && k != j && q != j
				)
				return true;
		}
	}

	return false;
}

string Grafo::obtenerRutaUnaEscala(string origen, string destino)
{
	int i = ciudades->buscarIndiceDeCiudad(origen);		// i -> indice origen
	int j = ciudades->buscarIndiceDeCiudad(destino);		// j -> indice destino

	if (ciudades->existeCiudad(origen) && ciudades->existeCiudad(destino))
	{
		string resultado = "";	// guarda string para mostrar resultado
		bool encontrado = false;	// bool de ruta encontrada

		for (int k = 0; k < ciudades->getCantidad(); k++)
		{
			if (
				matriz->getBinario(i, k) == 1 && 
				matriz->getBinario(k, j) == 1 && 
				k != i &&
				k != j
				)
			{
				resultado += ciudades->getSegunIndice(i) + " --> " +
							ciudades->getSegunIndice(k) + " --> " +
							ciudades->getSegunIndice(j) + "\r\n";
				encontrado = true;
			}
		}

		if (encontrado) {
			
			return resultado;
		}
		else 
			return "===No existe===";
	}
	return 
		"Ciudad no encontrada.";
	
}

string Grafo::obtenerRutaDosEscalas(string origen, string destino) 
{
	int i = ciudades->buscarIndiceDeCiudad(origen);	// i -> indice origen
	int j = ciudades->buscarIndiceDeCiudad(destino);	// j -> indice destino

	if (ciudades->existeCiudad(origen) && ciudades->existeCiudad(destino))
	{

		string resultado = "";	// guarda string para mostrar resultado
		bool encontrado = false;	// bool de ruta encontrada

		for (int k = 0; k < ciudades->getCantidad(); k++)
		{
			for (int q = 0; q < ciudades->getCantidad(); q++)
			{
				if (
					matriz->getBinario(i, k) == 1 &&
					matriz->getBinario(k, q) == 1 &&
					matriz->getBinario(q, j) == 1 && i != k && i != q && k != j && k != q && q != j
					)
				{
					resultado+= ciudades->getSegunIndice(i) + " --> " +
						ciudades->getSegunIndice(k) + " --> " +
						ciudades->getSegunIndice(q) + " --> " +
						ciudades->getSegunIndice(j) + "\r\n";
					encontrado = true;
				}
			}
		}
		if (encontrado) {

			return resultado;
		}
		else 
			return "===No existe===";
	}
	return 
		"Ciudad no encontrada.";
	
}

Matriz* Grafo::getMatriz() {
	return this->matriz;
}
Ciudad* Grafo::getCiudades() {
	return this->ciudades;
}