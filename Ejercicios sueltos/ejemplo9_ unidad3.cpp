 ///ejemplo_9 
 ///en el if para resumir el ELSE IF podemos hacer:
 ///if(i==0 || n1 > max_num)
 ///hacer un programa para ingresar 10 numeros, luego informar el maximo  

#include <iostream>
using namespace std;

int main()
{
    int n1, max_num, pos;
    for (int i=0; i < 10; i++)
    {
        cout << "escribir un numero" << endl;
        cin>>n1;
    
        if (i==0)
        {
            max_num = n1;
            pos = i;

        }
        else if(n1 > max_num) max_num = n1;

    }

    cout<< "NUMERO MAXIMO" << max_num << endl << pos << endl;
    return 0;
}
