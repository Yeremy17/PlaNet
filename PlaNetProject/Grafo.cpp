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
		for (int i = 0; i < ciudades->getCantidad(); i++)
		{
			if (matriz->getBinario(ciudades->buscarIndiceDeCiudad(origen), i) == 1 && matriz->getBinario(i, ciudades->buscarIndiceDeCiudad(destino)) == 1)
			{
				return ciudades->getSegunIndice(ciudades->buscarIndiceDeCiudad(origen)) + " --> " +
					ciudades->getSegunIndice(i) + " --> " +
					ciudades->getSegunIndice(ciudades->buscarIndiceDeCiudad(destino)) + "\n";
			}
		}

		return "No existe";
	}
	else
		return "No existe ps";
}

string Grafo::obtenerRutaDosEscalas(string origen, string destino) 
{
	int i = ciudades->buscarIndiceDeCiudad(origen);
	int j = ciudades->buscarIndiceDeCiudad(destino);


	if (ciudades->existeCiudad(origen) && ciudades->existeCiudad(destino))
	{
		for (int k = 0; k < ciudades->getCantidad(); k++)
		{
			for (int q = 0; q < ciudades->getCantidad(); q++)
			{
				if (
					matriz->getBinario(i, k) == 1 &&
					matriz->getBinario(k, q) == 1 &&
					matriz->getBinario(q, j) == 1
					)
				{
					return ciudades->getSegunIndice(i) + " --> " +
						ciudades->getSegunIndice(k) + " --> " +
						ciudades->getSegunIndice(q) + " --> " +
						ciudades->getSegunIndice(j) + "\n";
				}
			}
		}
		return "No existe";
	}
	else
		return "No existe pssss";
}

Matriz* Grafo::getMatriz() {

	return this->matriz;
}
Ciudad* Grafo::getCiudades() {
	return this->ciudades;
}