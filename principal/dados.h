#ifndef DADOS_H_INCLUDED
#define DADOS_H_INCLUDED

#include <cstdlib>
#include <ctime>

class Dado
{
public:
    int numero;

    void generar_numero()
    {
        srand(time(nullptr));

        numero = (rand() % 6) + 1;
    }
};

#endif // DADOS_H_INCLUDED
