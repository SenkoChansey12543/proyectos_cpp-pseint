#include <iostream>

using namespace std;

/// Hacer un programa para ingresar un grupo de 5 numeros.
/// Mostrar por consola el mayor de esos 5 numeros.

int main()
{
    // Declarar variables.
    int num, num_max;
    bool primer_numero = true;

    cin >> num;

    // Se inicia el contador en 1 porque ya se ingresó el primer número más arriba.
    // Si no se hubiera ingresado, tendría que ser cero para que se ingresen cinco números adentro del while.
    int contador = 1;
    while (contador < 5) // Ejecutar este bloque de codigo indefinidamente hasta que contador sea mayor o igual a cinco.
    {
        if (primer_numero) // Si primer_numero es true...
        {
            // Si se está adentro de este if, significa que el número es el primer número ingresado.
            // Al no haber ningún otro número, no se lo puede comparar con nada y por eso al principio siempre va a ser el mayor.
            num_max = num;
            primer_numero = false;
            // Ya pasó el primer número, se pone en false para que no ingrese al if la proxima vez
        }
        else if (num_max < num) // Sino si num_max es menor a num...
        {
            num_max = num; // El número máximo pasa a ser el número ingresado ahora.
        }

        contador++; // Sumar 1 a la variable contador
        cin >> num; // Volver a ingresar num, para que se ingrese las 5 veces correspondientes.
    }

    cout << "El numero maximo es: "<< num_max << endl; // Mostrar el número máximo almacenado.

    return 0;
}
