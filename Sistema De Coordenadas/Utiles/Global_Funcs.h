#ifndef GLOBAL_FUNCS_H_INCLUDED
#define GLOBAL_FUNCS_H_INCLUDED
#endif // GLOBAL_FUNCS_H_INCLUDED

#include <conio.h>

int read_arrows()
{
    char key = getch();

    if (key == -32)
    {
        char arrow = getch();
        switch(arrow)
        {
            case 72: // Arriba = 0
                return 0;
                break;
            case 75: // Izquierda = 1
                return 1;
                break;
            case 77: // Derecha = 2
                return 2;
                break;
            case 80: // Abajo = 3
                return 3;
                break;
        }
    }

    return 4;
}
