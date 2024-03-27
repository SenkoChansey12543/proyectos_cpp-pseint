#ifndef RECTANGULO_CLS_H_INCLUDED
#define RECTANGULO_CLS_H_INCLUDED
#endif // RECTANGULO_CLS_H_INCLUDED

class Rectangulo : Figura
{
private:
    double altura;
    double base;
public:
    Rectangulo (double init_altura, double init_base) : Figura(4)
    {
        altura = init_altura;
        base = init_base;
    }

    friend ostream& operator<< (ostream& out, const Rectangulo& rectangulo)
    {
        out << "H: " << rectangulo.altura << ", W: " << rectangulo.base;
        return out;
    }
};
