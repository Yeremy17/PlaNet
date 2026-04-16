#pragma once
#include <string>
using namespace std;

class Ciudad
{
private:
    string* lista;
    int cantidadDeCiudades;
    int capacidadMaxDeCiudades;

public:
    Ciudad(int capacidad);

    void agregarCiudad(string nombre);
    int buscarIndiceDeCiudad(string nombre);
    bool existeCiudad(string nombre);

    string getSegunIndice(int i);
    int getCantidad();
};
