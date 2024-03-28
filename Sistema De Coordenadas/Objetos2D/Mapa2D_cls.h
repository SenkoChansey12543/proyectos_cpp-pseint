#ifndef MAPA2D_CLS_H_INCLUDED
#define MAPA2D_CLS_H_INCLUDED
#endif // MAPA2D_CLS_H_INCLUDED

/// Un mapa 2D que puede contener objetos dentro.
/// Puede dibujar sus límites y mantener a los objetos dentro de los bordes.
/// También puede dibujar todos los objetos que esten dentro.
/// Si se intenta añadir un objeto cuya posición esté fuera de sus límites, el mapa lo rechaza.

class Mapa2D : Objeto2D
{
private:
    Vector2 top_left_limit;
    Vector2 down_right_limit;
    Array<Objeto2D*> objetos_dentro;
    Array<bool> objetos_dinamicos;
public:
    Mapa2D(Vector2 top_left, Vector2 down_right)
    {
        top_left_limit = top_left;
        down_right_limit = down_right;
    }

    int get_objects_amount(){return objetos_dentro.get_size();}

    void keep_objects_inside()
    {
        for (int i = 0; i < objetos_dentro.get_size(); i++)
        {
            if (objetos_dentro[i] != nullptr)
            {
                if (!is_object_inside(*objetos_dentro[i]))
                {
                    (*objetos_dentro[i]).set_pos(Vector2(top_left_limit.x + 5, top_left_limit.y + 5));
                }
            }
        }
    }

    bool is_object_inside(Objeto2D& objeto)
    {
        // A la derecha de top_left_limit e izquierda de down_right_limit
        if (objeto.get_pos().x > top_left_limit.x && objeto.get_pos().x < down_right_limit.x)
            // Abajo de top_left_limit y arriba de down_right_limit
            if (objeto.get_pos().y > top_left_limit.y && objeto.get_pos().y < down_right_limit.y)
                return true;;

        return false;
    }

    void add_object(Objeto2D& objeto)
    {
        if (is_object_inside(objeto))
        {
            objetos_dentro.append(&objeto);
            objetos_dinamicos.append(false);
        }
    }

    void add_object(Objeto2D&& objeto)
    {
        if (is_object_inside(objeto))
        {
            objetos_dentro.append(new Objeto2D(objeto));
            objetos_dinamicos.append(true);
        }
    }

    void draw_objects()
    {
        for (int i = 0; i < objetos_dentro.get_size(); i++)
        {
            if (objetos_dentro[i] != nullptr) (*objetos_dentro[i]).draw();
        }
        draw_borders();
        rlutil::locate(1,1);

    }

    void draw_borders()
    {
        for (int i = 0; i <= down_right_limit.y - top_left_limit.y; i++)
        {
            Vector2(top_left_limit.x, top_left_limit.y + i).cpos();
            cout << '*';
            Vector2(down_right_limit.x, top_left_limit.y + i).cpos();
            cout << '*';
        }

        for (int i = 0; i <= down_right_limit.x - top_left_limit.x; i++)
        {
            Vector2(top_left_limit.x + i, top_left_limit.y).cpos();
            cout << '*';
            Vector2(top_left_limit.x + i, down_right_limit.y).cpos();
            cout << '*';
        }
    }

    ~Mapa2D()
    {
        for (int i = 0; i < objetos_dentro.get_size(); i++)
        {
            if (objetos_dinamicos[i])
            {
                delete[] objetos_dentro[i];
            }
        }
    }
};
