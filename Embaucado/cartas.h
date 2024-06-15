#ifndef CARTAS_H_INCLUDED
#define CARTAS_H_INCLUDED
/*
los palos estan representados por numeros:

0 = corazon
1 = diamante
2 = pica
3 = trebol


*/

/*
En base a un numero aleatorio(del 0 al 4) se elije el valor para la carta
dependiendo de ese valor es:

numero_aleatorio 0 = carta 10 = 10 puntos
numero_aleatorio 1 = carta j = 11 puntos
numero_aleatorio 2 = carta q = 12 puntos
numero_aleatorio 3 = carta k = 15 puntos
numero_aleatorio 4 = carta a = 20 puntos
*/

int obtener_num_carta()
{
    int valor_carta = 0;
    switch(num_aleatorio (0, 4))
    {
        case 0: valor_carta = 10;
        break;
        case 1: valor_carta = 11;
        break;
        case 2: valor_carta = 12;
        break;
        case 3: valor_carta = 15;
        break;
        case 4: valor_carta = 20;
        break;

    }
    return valor_carta;
}

int obtener_palo_carta()
{
    return num_aleatorio(0,3);
}



#endif // CARTAS_H_INCLUDED
