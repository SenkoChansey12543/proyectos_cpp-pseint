#ifndef OBJETO2D_H_INCLUDED
#define OBJETO2D_H_INCLUDED
#endif // OBJETO2D_H_INCLUDED

class Objeto2D
{
protected:
    string nombre;
    int ID;
    Vector2 posicion;
public:
    Objeto2D (IDManager& id_man, Vector2 init_pos = Vector2(0,0))
    {
        posicion = init_pos;
        ID = id_man.add_id();
    }
    Objeto2D(){}

    void set_pos(Vector2 new_pos) {posicion = new_pos;}
    Vector2 get_pos(){return posicion;}

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
};
