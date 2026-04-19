#include "Matriz.h"

//comments para explicar

Matriz::Matriz(int n)
{
	this->n = n;

	datos = new int*[n];
	
	for(int i = 0; i < n; i++)
	{	
		datos[i] = new int[n];
		for (int j = 0; j < n; j++)	// reserva e inicializa a 0 al crear un objeto matriz
		{
			datos[i][j] = 0;
		}
	}
}

Matriz::~Matriz() 
{
	for (int i = 0; i < n; i++)
	{
		delete[] datos[i];			// destructor borra todo al finalizar (por ahora)
	}
	delete[] datos;
}

void Matriz::setBinario(int i, int j, int valor) 
{
	this->datos[i][j] = valor;
}

int Matriz::getBinario(int i, int j)
{
	return datos[i][j];
}

int Matriz::getSize()
{
	return n;
}

Matriz* Matriz::multiplicacionDeBinarios(Matriz* otraMatriz)
{
	Matriz* newMatrizResultante = new Matriz(n); //object

	for (int i = 0; i < n; i++)			// filas
		for (int j = 0; j < n; j++)		// columnas
		{
			for (int k = 0; k < n; k++)	// iterador
			{
				newMatrizResultante->datos[i][j] =
					newMatrizResultante->datos[i][j] | (this->datos[i][k] & otraMatriz->datos[k][j]);
				if (newMatrizResultante->datos[i][j] == 1)	// formula = ((datoA and datoB) or datoActual(i,j)) = datoC ->>>>> DatoC para nueva matriz resultante
					break;
			}
		}

	return newMatrizResultante;
}


Matriz* Matriz::elevarMatriz(int nPotencia) 
{
	if (nPotencia <= 0) return nullptr;	// si es 0, nada

	if (nPotencia == 1)		// si es uno, creo una copia o puede no hacer nada
	{
		Matriz* copia = new Matriz(n);
		for (int i = 0; i < n; i++) 
		{
			for (int j = 0; j < n; j++) 
			{
				copia->datos[i][j] = this->datos[i][j];
			}
		}
		return copia;
	}

	Matriz* newMatrizElevada = this->multiplicacionDeBinarios(this);	// aqui recien crea una multiplicacion de la matrizActual * matrizActual

	for (int i = 2; i < nPotencia; i++) 
	{
		Matriz* temp = newMatrizElevada->multiplicacionDeBinarios(this);	// crea temp porsiacaso, ya que es un for y el puntero o direccion se puede ocupar mucha memory

		delete newMatrizElevada;	// borra y lo asigna  para temp
		newMatrizElevada = temp;
	}

	return newMatrizElevada;
}