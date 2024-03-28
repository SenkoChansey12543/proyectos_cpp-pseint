#ifndef OBJETO2D_H_INCLUDED
#define OBJETO2D_H_INCLUDED
#endif // OBJETO2D_H_INCLUDED

class Objeto2D
{
protected:
    string nombre;
    char draw_icon;
    bool drawable;
    int ID;
    Vector2 posicion;
public:
    Objeto2D (IDManager& id_man, Vector2 init_pos = Vector2(0,0), bool init_drawable = false)
    {
        posicion = init_pos;
        ID = id_man.add_id();
        drawable = init_drawable;
    }
    Objeto2D()
    {
        posicion = Vector2(0,0);
        drawable = true;
    }

    void set_pos(Vector2 new_pos) {posicion = new_pos;}
    Vector2 get_pos(){return posicion;}

    int get_id(){return ID;}

    Objeto2D& operator= (const Objeto2D& obj)
    {
        if (this != &obj)
        {
            nombre = obj.nombre;
            ID = obj.ID;
            posicion = obj.posicion;
        }
        return *this;
    }

    void set_draw_icon(char icon){draw_icon = icon;}

    void draw()
    {
        if (!drawable) return;
        posicion.cpos();
        cout << draw_icon;
    }
};
