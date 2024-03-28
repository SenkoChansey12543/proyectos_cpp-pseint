#include <iostream>

using namespace std;

int main()
{
    int importe;
    cout << "escribir importe total" << endl;
    cin >> importe;

    if (importe < 100)
    {
        cout << "Importe con 5% descuento: $" << importe * 0.95 << endl;
    }
    else if (importe < 500)
    {
        cout << "Importe con 10% descuento: $" << importe * 0.90 << endl;
    }
    else
    {
        cout << "Importe con 15% descuento: $" << importe * 0.85 << endl;
    }

    return 0;
}
