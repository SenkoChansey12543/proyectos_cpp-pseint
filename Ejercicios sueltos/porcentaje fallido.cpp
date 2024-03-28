#include <iostream>

using namespace std;

int main ()
{
   int importe, /*Esta variable se borra: */ pagar;
    cout << "escribir importe total" << endl;
    cin >> importe;
   if ( importe < 100)
   {
      // Aplicar aca 5 descuento
      // Usar . y no , en los float
      // No usar % para calcular porcentaje, en este caso se usa *
      // Ejemplo de descuento: cout << "5 de descuento: " << importe * 0.95 << endl;
     cout << " 5 porciento de descuento " <<  pagar = importe% 0,95; << endl;
   }
   if (importe > 500) // Cambiado a else if (importe < 500)  
   {
      // Aplicar aca 10 descuento
     cout << " 15 porciento de descuento " << pagar = importe % 0,85 << endl;
   }
   else
   {
      // Aplicar aca 15 descuento
     cout << " 10 porciento de descuento " << pagar = importe % 0,90 << endl;
   }

    cout << pagar; // Eliminado en version corregida

    return 0;
}
