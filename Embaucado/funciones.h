#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
void establecer_semilla()
{
    srand(time(nullptr));
}
int num_aleatorio(int minimo, int maximo)
{
    return (rand() % (maximo + 1)) + minimo;
}

#endif // FUNCIONES_H_INCLUDED
