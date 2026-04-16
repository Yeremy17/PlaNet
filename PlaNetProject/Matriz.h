#pragma once

// i: filas
// j: columnas
// valor: 1 o 0

class Matriz
{
private:
    int** datos;
    int n;

public:
    Matriz(int n);
    ~Matriz();

    void setBinario(int i, int j, int valor);
    int getBinario(int i, int j);

    int getSize();

    Matriz* multiplicacionDeBinarios(Matriz* otraMatriz);
    Matriz* elevarMatriz(int nPotencia);
};
