#include <iostream>
///hacer un programa para ingresar 10 numero y informar el maximo y el minimo
using namespace std;

int main()
{
    int n1, max_num, min_num;
    for(int i = 0; i < 10; i++)
    {
        cin >> n1;

        if(i == 0)
        {
            max_num = n1;
            min_num = n1;
        }
        else if (n1 > max_num )  max_num = n1;
        else if (n1 < min_num )  min_num = n1;
    }
    cout << "numero maximo " << max_num << endl;
    cout << "numero minimo " << min_num << endl;


    return 0;
}
