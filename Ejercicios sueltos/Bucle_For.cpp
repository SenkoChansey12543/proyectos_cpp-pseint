#include <iostream>

using namespace std;

/// Bucle for

int main()
{
    int numero;

    // En este bucle for se hace...
    // Asignar a numero el valor 0 (numero = 0)
    // Ejecutar el codigo dentro de for indefinidamente siempre que numero sea menor a 10 (numero < 10)
    // Sumar 1 a numero cada vez que se ejecuta el bucle (numero++)

    cout << "Primer bucle: ";
    for (numero = 0; numero < 10; numero++)
    {
        cout << numero + 1 << " ";
    }

    // Tambien se puede declarar una variable para usar dentro del bucle for
    // Con int contador = 0 se declara una variable contador que unicamente existe dentro del bucle for
    // Mientras contador sea menor a 20 (contador < 20) se ejecuta indefinidamente el codigo dentro del bucle
    // Tambien se le puede sumar mas de 1 a la variable del for en cada ejecucion del bucle, por ejemplo sumarle 2 (contador += 2)

    cout << endl << "Segundo bucle: ";
    for (int contador = 0; contador < 20; contador += 2)
    {
        cout << contador + 2 << " ";
    }

    cout << endl;
    return 0;
}
