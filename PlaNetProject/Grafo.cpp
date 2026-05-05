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

	if (A2->getBinario(i, j) == 0)
	{
		delete A2;
		return false;
	}

	delete A2;

	// validar ruta real
	for (int k = 0; k < ciudades->getCantidad(); k++)
	{
		if (
			matriz->getBinario(i, k) == 1 &&
			matriz->getBinario(k, j) == 1 &&
			k != i &&
			k != j
			)
		{
			return true;
		}
	}

	return false;
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


void Grafo::obtener1Escala(string origen, string destino)
{
	int count = 0;
	if (ciudades->existeCiudad(origen) && ciudades->existeCiudad(destino))
	{
		// limpiar cada ves que quiero obtener la escala , para eliminar resultados anteriores y se borren las escalas viejas
		for (int i = 0; i < 15; i++) // 5 noma, indice 4
		{
			escalas1[i] = "";
		}


		for (int i = 0; i < ciudades->getCantidad(); i++)
		{
			if (matriz->getBinario(ciudades->buscarIndiceDeCiudad(origen), i) == 1 && matriz->getBinario(i, ciudades->buscarIndiceDeCiudad(destino)) == 1 && i != ciudades->buscarIndiceDeCiudad(origen) &&
				i != ciudades->buscarIndiceDeCiudad(destino))
			{
				if (count == 15) {
					break;
				}
				escalas1[count] = ciudades->getSegunIndice(i);
				count++;
			}
		}
	}

}

void Grafo::obtener2Escala(string origen, string destino)
{
	int i = ciudades->buscarIndiceDeCiudad(origen);
	int j = ciudades->buscarIndiceDeCiudad(destino);

	int count = 0;
	if (ciudades->existeCiudad(origen) && ciudades->existeCiudad(destino))
	{
		// limpiar cada ves que quiero obtener la escala , para eliminar resultados anteriores y se borren las escalas viejas
		for (int k = 0; k < 15; k++)
		{
			escalas2[0][k] = "";	// usamos en ves de la condcion:  
			escalas2[1][k] = "";	//if (count < 5 | 15) { escalas1[count] = ""; } sin count + 1
		}

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
					if (count == 15) {
						break;
					}
					escalas2[0][count] = ciudades->getSegunIndice(k);
					escalas2[1][count] = ciudades->getSegunIndice(q);
					count++;

				}
			}
		}
	}


}

Matriz* Grafo::getMatriz() {
	return this->matriz;
}
Ciudad* Grafo::getCiudades() {
	return this->ciudades;
}

string Grafo::getEscala(int ind) {
	return escalas1[ind];
}
string Grafo::getEscalas(int ind, int ind2) {
	return escalas2[ind][ind2];
}
