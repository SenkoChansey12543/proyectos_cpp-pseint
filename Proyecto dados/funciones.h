#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <cstdlib>
#include <ctime>

int generar_numero()
{
    static bool asignada = false;
    // Variable bool estatica (el valor solo se asigna cuando se declara y luego se conserva al llamar la funcion)

    if (!asignada) // Si la semilla aun no se asigno, se le asigna una semilla
    {
        srand(time(NULL)); // Asignar semilla
        asignada = true; //
    }

    return (rand() % 6) + 1;
}
#endif // FUNCIONES_H_INCLUDED
