#include "Matriz.h"
Matriz::Matriz(int n)
{
	this->n = n;

	datos = new int*[n];
	
	for(int i = 0; i < n; i++)
	{	
		datos[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			datos[i][j] = 0;
		}
	}
}

Matriz::~Matriz() 
{
	for (int i = 0; i < n; i++)
	{
		delete[] datos[i];
	}
	delete[] datos;
}

void Matriz::set(int i, int j, int valor) 
{
	this->datos[i][j] = valor;
}

int Matriz::get(int i, int j)
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

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				newMatrizResultante->datos[i][j] =
					newMatrizResultante->datos[i][j] | (this->datos[i][k] & otraMatriz->datos[k][j]);
				if (newMatrizResultante->datos[i][j] == 1)
					break;
			}
		}

	return newMatrizResultante;
}


Matriz* Matriz::elevarMatriz(int nPotencia) 
{
	if (nPotencia <= 0) return nullptr;

	if (nPotencia == 1) 
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

	Matriz* newMatrizElevada = this->multiplicacionDeBinarios(this);

	for (int i = 2; i < nPotencia; i++) 
	{
		Matriz* temp = newMatrizElevada->multiplicacionDeBinarios(this);

		delete newMatrizElevada;
		newMatrizElevada = temp;
	}

	return newMatrizElevada;
}