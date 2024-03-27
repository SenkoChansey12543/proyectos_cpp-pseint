#ifndef GLOBAL_FUNCS_H_INCLUDED
#define GLOBAL_FUNCS_H_INCLUDED
#endif // GLOBAL_FUNCS_H_INCLUDED

#include <conio.h>

void read_arrows()
{
    char key = getch();

    while(true)
    {
        if (key == -32)
        {
            char arrow = getch();
            switch(arrow)
            {
                case 72: // Arriba
                    cout << "Tecla de flecha arriba presionada" << std::endl;
                    break;
                case 75: // Izquierda
                    cout << "Tecla de flecha izquierda presionada" << std::endl;
                    break;
                case 77: // Derecha
                    cout << "Tecla de flecha derecha presionada" << std::endl;
                    break;
                case 80: // Abajo
                    cout << "Tecla de flecha abajo presionada" << std::endl;
                    break;
            }
        }
    }
}
