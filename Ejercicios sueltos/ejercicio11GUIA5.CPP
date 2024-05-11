#include <iostream>
/*dada una lista de numero compuesta por 10 grupos y cada grupo separado del siguiente por cero
se pide determinar e informar.

a_ para cada uno de los grupos el maximo y el minimo de los numeros pares. se informan 2 resultados para cada grupo.

b_ la cantidad de grupos donde se detenctan 2 numeros perfectos consecutivos se informa 1 resultado al final
.
c_ informar cuantos grupos estan formados por tods numeros alternados positivos y negativos.
se informa un resultado al final.
*/
using namespace std;

int main()
{
    int num, i;
    ///pto a
    int contPar, maxPar, minPar;
    ///pto b
    int acuDiv, p, contNumperf, contGrupoNumPerf = 0;
    bool bandPerf;
    /// pto c
    int contPost, contNeg, contNum;
    bool bandalter;
    /// nivel total
    for ( i= 1; i <= 3; i ++)
    {
        ///variables a nivel de grupos
        ///pto a
        contPar = 0;
        ///pto b
        contNumperf = 0;
        bandPerf = false;
        ///pto c
        contPost, contNeg = 0;
        bandalter = true ;
        ///validacion


        cout << " ingrese numero: ";
        cin >> num;
       while( num!= 0)
        {
            ///aca se procesan todos los numeros
            /// pto a
            if ( num % 2 == 0)
            {
                ///par
                contPar ++;
                if (contPar == 1)
                {
                    maxPar = num;
                    minPar = num;
                }
            }
            else if(num > maxPar)
            {
                maxPar = num;
            }
            else if(num < minPar)
            {
                minPar = num;
            }
            ///pto b
            acuDiv = 0;
            for (p = 1; p < num; p++)
            {
                if ( num % p == 0 )
                {
                    acuDiv += p;
                }
            }
            if (acuDiv == num )
            {
                contNumperf ++;
                if( contNumperf == 2 )
                {
                    bandPerf = true;
                }
            }
            else
            {
                contNumperf = 0;
            }
            /// pto c
            contNum ++;
            if (num > 0)
            {
                 contPost ++;
                 contNeg = 0;
            }
            else
            {
                contNeg++;
                contPost = 0;
            }
            if ((contPost == 2) || (contNeg == 0))
            {
                bandalter = false;
            }

            cout << " ingrese : ";
            cin >> num;
        }
        /// nivel grupo
        ///pto a
        if(contPar > 0)
        {
            cout << "maximo par " << maxPar << endl;
            cout << "maximo par " << minPar << endl;

        }
        else {
            cout << " grupo sin numeros pares " << endl;
        }
        ///pto b
        if ( bandPerf == true)
        {
           contGrupoNumPerf ++;
        }
        ///pto c
        if (( bandalter == true ) && ( contNum != 0))
        {
            contGrupoNumPerf++;
        }
    }
    ///nivel total / todos los numeros
    cout << "pto b total de grupos con dos num. perfec consecutivos " << contGrupoNumPerf << endl;
    cout << " pto c total de grupos " << endl;
    return 0;
}
