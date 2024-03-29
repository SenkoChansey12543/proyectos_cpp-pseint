#ifndef CAJA_H_INCLUDED
#define CAJA_H_INCLUDED

class Caja2D : public Objeto2D
{
public:
    Caja2D(Vector2 _posicion = Vector2(0,0)) : Objeto2D("Caja2D", _posicion, /*Drawable=*/true, rlutil::BROWN)
    {
        draw_icon = char(254);
    }
};

#endif // CAJA_H_INCLUDED
