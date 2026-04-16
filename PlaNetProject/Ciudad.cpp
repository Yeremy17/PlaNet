#include "Ciudad.h"

Ciudad::Ciudad(int capacidad)
{
    this->capacidadMaxDeCiudades = capacidad;
    this->cantidadDeCiudades = 0;

    lista = new string[capacidad];
}

void Ciudad::agregarCiudad(string nombre)
{
    if (!this->existeCiudad(nombre))
    {
        this->lista[this->cantidadDeCiudades] = nombre;
        this->cantidadDeCiudades++;
    }
}

int Ciudad::buscarIndiceDeCiudad(string nombre)
{
    for (int i = 0; i < this->cantidadDeCiudades; i++)
    {
        if (this->lista[i] == nombre)
            return i;
    }
    return -1;
}

bool Ciudad::existeCiudad(string nombre)
{
    return buscarIndiceDeCiudad(nombre) != -1;
}

string Ciudad::getSegunIndice(int i)
{
    return this->lista[i];
}

int Ciudad::getCantidad()
{
    return this->cantidadDeCiudades;
}
