#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#include "funciones.h"
#include "cartas.h"

int main()
{
    establecer_semilla();

    int puntos = 0;
    int embaucado = obtener_palo_carta();
    mostrar_palo(embaucado);
    cout << endl << endl;

    for (int i = 0; i < 5; i ++)
    {
       int num_carta = obtener_num_carta();
       int palo = obtener_palo_carta();

       if(embaucado != palo )
       {
           puntos += num_carta;
       }

        cout << num_carta << endl;
        mostrar_palo(palo);
        cout << endl << endl;
    }
    cout << puntos;

    return 0;
}
