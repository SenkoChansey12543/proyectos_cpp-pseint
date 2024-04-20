#include <iostream>
///hacer un programa para ingresar 7 numero y informar el prier numero par ingresado y
///el ultimo numero impar ingresado
using namespace std;

int main()
{ int j, i, num, cd, ultimo_primo, primer_par, post_par;
  int pos_primo = 0;
  bool banpar = false;
for(j = 1; j <= 7; j++)
{
    cout << " ingrese #"<< j << ": ";
    cin >> num;
    ///primer par
    if((num % 2 == 0) && (banpar == false))
    {
        primer_par = num;
        post_par = j;
        banpar = true;
    }

    cd =0; ///cuenta divisores ( se coloca antes del sengundo for)

    for(i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cd++;
        }
    }
  if (cd ==2)
  {
        ultimo_primo = num;
        pos_primo = j;
  }

}
if ( banpar == true )
{
    cout << "el primer par " << primer_par << endl;
    cout << "en la posicion " << post_par << endl;
}
else
{
    cout << "no hubo numeros pares" << endl;
}
if( pos_primo > 0)
{
    cout << "ultimo primo : " << ultimo_primo << endl;
    cout << "en la posicion : " << pos_primo << endl;

}
else
{
    cout << "no hubo numeros primos " << endl;
}

    return 0;
}
/*int main()
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
*/
