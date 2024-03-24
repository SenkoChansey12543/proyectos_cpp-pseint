#include <iostream>

using namespace std;

/// Hacer un programa para ingresar:
/// Los litros de un acuario,
/// el nombre del pez a poner en el acuario,
/// la cantidad de peces que se desea poner,
/// y los litros que ocupa cada pez.

/// Si el acuario tiene suficientes litros para mantener a todos los peces, mostrar por pantalla un mensaje aclarandolo.
/// En caso contrario, mostrar un mensaje informando que no hay suficientes litros y mostrar la cantidad maxima de peces de esa especie que se pueden tener en ese acuario.

int main()
{
    // Declaración de variables
    string nombre_pez; // String es un tipo de variable que contiene una palabra, o también se le dice "Cadena de caracteres"
    int litros_acuario, cant_peces;
    float litros_por_pez;

    cout << "Ingrese litros del acuario: " << endl;
    cin >> litros_acuario;
    cout << "Ingrese el nombre del pez: " << endl;
    cin >> nombre_pez;
    cout << "Ingrese cantidad de peces: " << endl;
    cin >> cant_peces;
    cout << "Ingrese litros por pez: " << endl;
    cin >> litros_por_pez;
    // Todos los datos cargados

    // Calcular el total de litros que ocupan los peces, multiplicando litros por cada pez y la cantidad de peces
    // Se declara una variable entero para asignar el total de litros
    int litros_totales = litros_por_pez * cant_peces;

    if (litros_acuario >= litros_totales) // Si litros_acuario es mayor o igual a litros_totales...
    {
        cout << "Se pueden introducir " << cant_peces << " " << nombre_pez << " en un acuario de " << litros_acuario << " litros sin problema." << endl;
    }
    else // Sino...
    {
        cout << "Los litros totales de todos los peces son " << litros_totales << ", excediendo los litros del acuario." << endl;
        int cant_maxima = litros_acuario / litros_por_pez; // Obtener la cantidad maxima de peces para el acuario dividiendo litros_acuario por litros_por_pez.
        cout << "La cantidad maxima de " << nombre_pez << " que se puede introducir en un acuario de " << litros_acuario << " litros es de " << cant_maxima << " peces." << endl;
    }

    return 0;
}
