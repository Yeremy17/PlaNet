#include "Matriz.h"

//comments para explicar

Matriz::Matriz(int n)
{
	this->n = n;

	datos = new int* [n]; // reserva memoria para un arreglo de n punteros a int (fila)
	
	for(int i = 0; i < n; i++)
	{	
		datos[i] = new int[n];		// reserva memoria para n enteros en la fila i (columnas)
		for (int j = 0; j < n; j++)	
		{
			datos[i][j] = 0;	// inicializa a 0 al crear un objeto matriz
		}
	}
}

Matriz::~Matriz() 
{
	for (int i = 0; i < n; i++)
	{
		delete[] datos[i];			// destructor libera memoria reservada por cada fila (columnas)
	}
	delete[] datos;		// destructor libera memoria reservada por el arreglo de punteros n (filas)
}

void Matriz::setBinario(int i, int j, int valor) 
{
	this->datos[i][j] = valor;	// para asignar valor (1 o 0) manualmente a posicion i,j
}

int Matriz::getBinario(int i, int j)
{
	return datos[i][j];	// obtener el valor (1 o 0) de la posicion i,j
}

int Matriz::getSize()
{
	return n;	//obtener el tamaño n de la matriz
}

Matriz* Matriz::multiplicacionDeBinarios(Matriz* otraMatriz) //MULTIPLACION DE DOS MATRICES BINARIAS
{
	Matriz* newMatrizResultante = new Matriz(n); // crea una nueva matriz puntero a objeto Matriz en el heap inicializado en cero
	for (int i = 0; i < n; i++)			// filas
		for (int j = 0; j < n; j++)		// columnas
		{
			for (int k = 0; k < n; k++)	// iterador auxiliar
			{
				// formula de multiplicacion binaria:
				// matrizResultante = ((datoA and datoB) or datoActual(i,j)) = datoC ->>>>> para nueva matriz resultante
				// newMatrizResultante[i][j] += datos[i][k] * datos[k][j]

				newMatrizResultante->datos[i][j] =
					newMatrizResultante->datos[i][j] | (this->datos[i][k] & otraMatriz->datos[k][j]);

				if (newMatrizResultante->datos[i][j] == 1)	// si hay un 1, entonces ya no es necesario continuar esa posicion
					break;
			}
		}

	return newMatrizResultante;
}


Matriz* Matriz::elevarMatriz(int nPotencia) 
{
	if (nPotencia <= 0) return nullptr;	// si es 0, nada

	if (nPotencia == 1)		// si es uno, creo una copia exacta
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
		Matriz* temp = newMatrizElevada->multiplicacionDeBinarios(this);// crea temp para liberar memoria, ya que es un for y el puntero o direccion se puede ocupar mucha memory
		
		
		bool matrizInfinito = true;
		for (int f = 0; f < n; f++)
		{
			for (int c = 0; c < n; c++)
			{
				if (newMatrizElevada->datos[f][c] != temp->datos[f][c])		// compara valores si son iguales
				{
					matrizInfinito = false;
					break;
				}
			}

			if (!matrizInfinito) break;
		}
		if (matrizInfinito)
		{
			delete temp;   // nueva innecesaria
			break;
		}


		delete newMatrizElevada;	// borra y lo asigna para temp
		newMatrizElevada = temp;
	}

	return newMatrizElevada;
}