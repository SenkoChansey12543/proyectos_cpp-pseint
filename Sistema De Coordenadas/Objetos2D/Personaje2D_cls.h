#ifndef PERSONAJE2D_CLS_H_INCLUDED
#define PERSONAJE2D_CLS_H_INCLUDED
#endif // PERSONAJE2D_CLS_H_INCLUDED

class Personaje2D : public Objeto2D
{
public:
    Personaje2D(IDManager& _id_man, char init_draw_icon, Vector2 _posicion = Vector2(0,0)) : Objeto2D(_id_man, _posicion, /*drawable=*/true)
    {
        draw_icon = init_draw_icon;
    }
    void moverse()
    {
        switch (read_arrows())
        {
            case 0:
                posicion.cpos();
                cout << ' ';
                posicion.y -= 1;
                draw();
            break;
            case 1:
                posicion.cpos();
                cout << ' ';
                posicion.x -= 1;
                draw();
            break;
            case 2:
                posicion.cpos();
                cout << ' ';
                posicion.x += 1;
                draw();
            break;
            case 3:
                posicion.cpos();
                cout << ' ';
                posicion.y += 1;
                draw();
            break;
        }
    }
};
