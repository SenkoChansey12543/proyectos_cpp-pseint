#ifndef CAJA_H_INCLUDED
#define CAJA_H_INCLUDED
#endif // CAJA_H_INCLUDED

class Caja2D : public Objeto2D
{
public:
    Caja2D(IDManager& _id_man, Vector2 _posicion = Vector2(0,0)) : Objeto2D(_id_man, _posicion, /*Drawable=*/true)
    {
        draw_icon = 'I';
    }
};
