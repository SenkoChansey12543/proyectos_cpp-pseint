#include <iostream>

using namespace std;

/// Esta es una version más avanzada del programa de litros peces usando cosas de programacion 2.

/// Hacer un programa para ingresar:
/// Los litros de un acuario,
/// el nombre del pez a poner en el acuario,
/// la cantidad de peces que se desea poner,
/// y los litros que ocupa cada pez.

/// Si el acuario tiene suficientes litros para mantener a todos los peces, mostrar por pantalla un mensaje aclarandolo.
/// En caso contrario, mostrar un mensaje informando que no hay suficientes litros y mostrar la cantidad maxima de peces de esa especie que se pueden tener en ese acuario.

class Cardumen // Se crea una clase Cardumen. Esta clase sirve para usar un nuevo tipo de variable llamado Cardumen.
{
public:
    // El tipo de variable cardumen contiene 3 variables que se ven abajo
    int cantidad;
    float litros;
    string nombre;

    float obtener_litros_totales()
    {
        return litros * cantidad;
    }
};

int main()
{
    // Declaración de variables
    int litros_acuario;
    Cardumen cardumen; // Se crea una variable de tipo Cardumen, ese tipo se creo mas arriba.

    cout << "Ingrese litros del acuario: " << endl;
    cin >> litros_acuario;
    cout << "Ingrese el nombre del pez: " << endl;
    cin >> cardumen.nombre;
    cout << "Ingrese cantidad de peces: " << endl;
    cin >> cardumen.cantidad;
    cout << "Ingrese litros por pez: " << endl;
    cin >> cardumen.litros;
    // Todos los datos cargados

    // Se llama al metodo obtener_litros_totales() de la variable cardumen para obtener automaticamente los litros totales de la variable cardumen.
    if (litros_acuario >= cardumen.obtener_litros_totales()) // Si litros_acuario es mayor o igual a litros_totales...
    {
        // Usando, por ejemplo, cardumen.cantidad, se puede acceder a la variable cantidad dentro de la variable cardumen.
        cout << "Se pueden introducir " << cardumen.cantidad << " " << cardumen.nombre << " en un acuario de " << litros_acuario << " litros sin problema." << endl;
    }
    else // Sino...
    {
        cout << "Los litros totales de todos los peces son " << cardumen.obtener_litros_totales() << ", excediendo los litros del acuario." << endl;
        int cant_maxima = litros_acuario / cardumen.litros; // Obtener la cantidad maxima de peces para el acuario dividiendo litros_acuario por litros_por_pez.
        cout << "La cantidad maxima de " << cardumen.nombre << " que se puede introducir en un acuario de " << litros_acuario << " litros es de " << cardumen.cantidad << " peces." << endl;
    }

    return 0;
}
