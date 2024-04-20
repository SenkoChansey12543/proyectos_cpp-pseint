#include <iostream>
///hacer un programa para ingresar 10 numero y informar el maximo numero par
using namespace std;

int main()
{
    int n1, max_num;
    bool asignado = false;

    for(int i = 0; i < 10; i++)
    {
        cin >> n1;
        if ( n1 % 2 == 0)
        {
            if(asignado == false)
            {
                max_num = n1;
                asignado = true;
            }
            else if ( n1 > max_num) max_num = n1;
        }
    }
    cout << " MAXIMO NUMERO DE PARES " << max_num << endl;


    return 0;
}
