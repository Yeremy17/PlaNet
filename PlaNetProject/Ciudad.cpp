#include "Ciudad.h"

Ciudad::Ciudad(int capacidad)
{
    this->capacidadMaxDeCiudades = capacidad;
    this->cantidadDeCiudades = 0;

    lista = new string[capacidad];  // establecer constructor predeterminado
}

Ciudad::~Ciudad()
{
    delete[] lista;

}

void Ciudad::agregarCiudad(string nombre)
{
    if (!this->existeCiudad(nombre))       // if existe no agrega nada
    {
        if (this->cantidadDeCiudades < this->capacidadMaxDeCiudades)
        {
            this->lista[this->cantidadDeCiudades] = nombre;
            this->cantidadDeCiudades++;
        }
    }
}

int Ciudad::buscarIndiceDeCiudad(string nombre)
{
    for (int i = 0; i < this->cantidadDeCiudades; i++)
    {
        if (this->lista[i] == nombre) // pasar nombre y retorna indice de la ciudad en la lista
            return i;
    }
    return -1;  // -1 si no lo encuentra
}

bool Ciudad::existeCiudad(string nombre)
{
    return buscarIndiceDeCiudad(nombre) != -1; // doble verificacion
}

string Ciudad::getSegunIndice(int i)
{
    return this->lista[i];          // buscar esa ciudad segun su indice
}

int Ciudad::getCantidad()
{
    return this->cantidadDeCiudades;       //obtener cantidad total de ciudades
}
