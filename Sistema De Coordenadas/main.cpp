#include <iostream>
#include <conio.h>
using namespace std;

#include "Utiles/rlutil.h"
using namespace rlutil;

#include "Utiles/Arrays.h"


#include "Utiles/Global_Funcs.h"

#include "Utiles/Vector2_cls.h"

#include "Utiles/IDManager_cls.h"

#include "Objetos2D/Objeto2D.h"
#include "Objetos2D/Figuras2D/figura_cls.h"
#include "Objetos2D/Figuras2D/rectangulo_cls.h"
#include "Objetos2D/Personaje2D_cls.h"
#include "Objetos2D/Caja.h"
#include "Objetos2D/Mapa2D_cls.h"


int main()
{
    cout << boolalpha;
    rlutil::hidecursor();

    IDManager id_man;

    Mapa2D mapa(Vector2(10,12), Vector2(75,50));

    Personaje2D jugador(id_man, 'O', Vector2(25,25));
    mapa.add_object(jugador);

    for (int i = 0; i < 10; i++)
    {
        mapa.add_object(Caja2D(id_man, Vector2(23+i+i, 15+i*i)));
    }

    while (true)
    {
        mapa.draw_objects();
        jugador.moverse();
        mapa.keep_objects_inside();
    }

    return 0;
}
