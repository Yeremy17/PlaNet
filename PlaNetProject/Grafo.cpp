#include "Grafo.h"

Grafo::Grafo(int dato)  // aqui se usan relaciones, o conjuntos { 1.
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

		matriz->setBinario(i, j, 1);  // relacion binaria
	}
}

bool Grafo::existeVueloDirecto(string origen, string destino)
{
	int i = ciudades->buscarIndiceDeCiudad(origen);
	int j = ciudades->buscarIndiceDeCiudad(destino);

	if (i == -1 || j == -1)
		return false;

	return matriz->getBinario(i, j) == 1;
}

bool Grafo::existeUnaEscala(string origen, string destino)
{
	Matriz* A2 = matriz->elevarMatriz(2);

	int i = ciudades->buscarIndiceDeCiudad(origen);
	int j = ciudades->buscarIndiceDeCiudad(destino);

	if (i == -1 || j == -1)
	{
		delete A2;
		return false;
	}

	bool existe = A2->getBinario(i, j);
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
	bool existe = A3->getBinario(ciudades->buscarIndiceDeCiudad(origen), ciudades->buscarIndiceDeCiudad(destino));
	delete A3;

	return existe;


}

string Grafo::obtenerRutaUnaEscala(string origen, string destino) // forma fea xd
{
	if (ciudades->existeCiudad(origen) && ciudades->existeCiudad(destino))
	{
		string resultado = "";
		bool encontrado = false;

		for (int i = 0; i < ciudades->getCantidad(); i++)
		{
			if (matriz->getBinario(ciudades->buscarIndiceDeCiudad(origen), i) == 1 && matriz->getBinario(i, ciudades->buscarIndiceDeCiudad(destino)) == 1 && i != ciudades->buscarIndiceDeCiudad(origen) &&
				i != ciudades->buscarIndiceDeCiudad(destino))
			{
				resultado += ciudades->getSegunIndice(ciudades->buscarIndiceDeCiudad(origen)) + " --> " +
					ciudades->getSegunIndice(i) + " --> " +
					ciudades->getSegunIndice(ciudades->buscarIndiceDeCiudad(destino)) + "\r\n";

				encontrado = true;
			}
		}


		if (encontrado) {

			return resultado;
		}
		else return "No existe";
	}
	
}

void Grafo::obtener1Escala(string origen, string destino) 
{
	int count = 0;
	if (ciudades->existeCiudad(origen) && ciudades->existeCiudad(destino))
	{
		

		for (int i = 0; i < ciudades->getCantidad(); i++)
		{
			if (matriz->getBinario(ciudades->buscarIndiceDeCiudad(origen), i) == 1 && matriz->getBinario(i, ciudades->buscarIndiceDeCiudad(destino)) == 1 && i != ciudades->buscarIndiceDeCiudad(origen) &&
				i != ciudades->buscarIndiceDeCiudad(destino))
			{
				if (count == 5) {
					break;
				}
				escalas1[count] = ciudades->getSegunIndice(i);
				count++;
			}
		}

		if (count < 5) {
			escalas1[count + 1] = "";
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
					if (count == 5) {
						break;
					}
					escalas2[0][count] = ciudades->getSegunIndice(k);
					escalas2[1][count] = ciudades->getSegunIndice(q);
					count++;

					
				}
			}
		}
		if (count < 5) {
			escalas2[0][count + 1] = "";
			escalas2[1][count + 1] = "";
		}
	}


}

string Grafo::obtenerRutaDosEscalas(string origen, string destino) 
{
	int i = ciudades->buscarIndiceDeCiudad(origen);
	int j = ciudades->buscarIndiceDeCiudad(destino);


	if (ciudades->existeCiudad(origen) && ciudades->existeCiudad(destino))
	{


		string resultado = "";
		bool encontrado = false;

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
		else return "No existe";
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