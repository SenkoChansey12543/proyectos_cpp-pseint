#include <iostream>

using namespace std;

#include "Clase.h"

int main()
{
    int total_pasajes = 0;
    for (int i = 0; i < 5; i++)
    {
        int destino;
        cout << "Ingresar destino: " << endl;
        cin >> destino;
        float total = 0;

        for(int j = 0; i < 12; j++)
        {
            int mes, pasajes, recaudado;
            cout << "Ingresar mes: " << endl;
            cin >> mes;
            cout << "Ingresar pasajes: " << endl;
            cin >> pasajes;
            cout << "Ingresar recaudado: " << endl;
            cin >> recaudado;

            total_pasajes += pasajes;
            total += recaudado;
        }

        cout << "Total recaudado en el destino " << destino << ": "  << total << endl;
    }

    cout << "Total de pasajes vendidos: " << total_pasajes << endl;

    return 0;
}
