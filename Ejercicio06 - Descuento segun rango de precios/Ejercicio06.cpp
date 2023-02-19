// 6. Una casa de videojuegos otorga un descuento dependiendo del importe de la compra realizada según 
//    los siguientes valores:
//       • Si el importe es menor a ARS 1000, no hay descuento.
//       • Si el importe es ARS 1000 o más pero menor a ARS 5000, aplica un descuento del 10 %.
//       • Si el importe es ARS 5000 o más, aplica un descuento del 18 % .
//    Hacer un programa para ingresar un importe de venta y luego muestre por pantalla el importe 
//    final con el descuento que corresponda.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float I, IF;
    float const D1 = 0.90;
    float const D2 = 0.82;

    cout << "Introduzca el importe: $";
    cin >> I;

    if (I >= 1000 && I < 5000)
    {
        IF = I * D1;
    }
    else if (I >= 5000)
    {
        IF = I * D2;
    }
    else
    {
        IF = I;
    }

    cout << "\nEl importe final es: $" << IF << endl;
    return 0;
}