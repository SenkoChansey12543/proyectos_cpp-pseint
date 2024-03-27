#include <iostream>
#include <conio.h>
using namespace std;

#include "Utiles/rlutil.h"
using namespace rlutil;

#include "Utiles/Global_Funcs.h"

#include "Utiles/Vector2_cls.h"

#include "Utiles/IDManager_cls.h"

#include "Objetos2D/Objeto2D.h"
#include "Objetos2D/Figuras2D/figura_cls.h"
#include "Objetos2D/Figuras2D/rectangulo_cls.h"

#include "Utiles/Arrays.h"

// Un sistema de coordenadas para planos 2D hecho con c++.
// También hay otras cosas útiles.

int main()
{
    IDManager id_man;

    Array<Objeto2D> objetos;

    for (int i = 0; i < 20; i++)
    {
        objetos.append(Objeto2D(id_man, Vector2(i * i * 0.4, i * i / i * 3)));
    }

    for (int i = 0; i < objetos.get_size(); i++)
    {
        cout << objetos[i].get_pos() << endl;
    }

    return 0;
}
