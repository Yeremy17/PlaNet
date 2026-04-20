#pragma once

using namespace System;
using namespace System::Drawing;

ref class Circulo {
public:
    int x, y;
    String^ nombre;

    Circulo(int _x, int _y, String^ _nombre) {
        x = _x;
        y = _y;
        nombre = _nombre;
    }

    void dibujar(Graphics^ papel, System::Drawing::Font^ fuente) {
        papel->FillEllipse(Brushes::White, x, y, 20, 20);
        papel->DrawEllipse(Pens::Black, x, y, 20, 20);
        float offsetX = (nombre->Length > 1) ? 2.0f : 5.0f;
        papel->DrawString(nombre, fuente, Brushes::Black, (float)x + offsetX, (float)y + 3.0f);
    }

    
};