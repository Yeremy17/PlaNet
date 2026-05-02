#pragma once
using namespace System;
using namespace System::Drawing;

ref class Avion {
private:
    float x, y, angulo;
    cli::array<Point>^ cuerpo;

public:
    Avion() {
        x = 0; y = 0; angulo = 0;
        // Definimos la forma del avión una sola vez
        cuerpo = gcnew cli::array<Point>(3);
        cuerpo[0] = Point(0, -12); // Punta
        cuerpo[1] = Point(-7, 8);  // Ala izq
        cuerpo[2] = Point(7, 8);   // Ala der
    }

    // Lógica matemática del movimiento
    void ActualizarPosicion(PointF p1, PointF p2, float t) {
        // Interpolación Lineal (LERP) para la posición
        this->x = p1.X + (p2.X - p1.X) * t;
        this->y = p1.Y + (p2.Y - p1.Y) * t;

        // Cálculo del ángulo de rotación
        float dx = p2.X - p1.X;
        float dy = p2.Y - p1.Y;
        this->angulo = (float)(Math::Atan2(dy, dx) * 180.0 / Math::PI) + 90;
    }

    void Dibujar(Graphics^ g) {
        // Guardamos el estado actual del lienzo
        Drawing2D::GraphicsState^ estadoOriginal = g->Save();

        // Aplicamos transformaciones
        g->TranslateTransform(x, y);
        g->RotateTransform(angulo);

        // Dibujamos el avión
        g->FillPolygon(Brushes::DarkBlue, cuerpo);
        g->DrawPolygon(Pens::Black, cuerpo);

        // Restauramos el lienzo para no afectar otros dibujos
        g->Restore(estadoOriginal);
    }
};