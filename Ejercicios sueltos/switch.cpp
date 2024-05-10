#include <iostream>

using namespace std;

int main()
{
    int n;

    for (int i = 0; i <= 5; i++)
    {
        cin >> n;
        switch(n)
        {
        case 1:
            cout << "Es uno " << endl;
            break;
        case 2 :
            cout << " es dos " << endl;
            break;
        case 3:
            cout << "es tres " << endl;
            break;
        case 4:
            cout << " es cuatro " << endl;
            break;
        default:
            cout << " es otro " << endl;
            break;
        }
    }

    return 0;
}

