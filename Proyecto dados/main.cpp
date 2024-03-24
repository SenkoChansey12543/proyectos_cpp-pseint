#include <iostream>

using namespace std;

#include "dados.h"

int main()
{
    Dado dado;
    dado.generar_numero();
    cout << dado.numero;
    return 0;
}
