#include <iostream>

using namespace std;

/// Hacer un programa para ingresar 2 palabras.
/// Luego mostrar por consola las dos palabras sumadas.

int main()
{
    // Declarar dos variables string.
    string palabra_1, palabra_2;

    cout << "Ingresar dos palabras: " << endl;
    cin >> palabra_1 >> palabra_2;
    
    // Si se suman dos (o más) palabras, se puede obtener una palabra que es la primera y segunda palabra una al lado de la otra.
    string palabra_resultado = palabra_1 + palabra_2;
    cout << "El resultado de sumar las dos palabras es: " << palabra_resultado << endl;

    return 0;
}
