// 4. Hacer un programa para ingresar un número y luego se emita un cartel por pantalla “Positivo” si el 
//    número es mayor a cero, “Negativo” si el número es menor a cero o “Cero” si el número es igual a cero.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;

    cout << "Ingrese un numero: ";
    cin >> N;

    if (N > 0)
    {
        cout << "\nEl numero es positivo." << endl;
    }
    else
    {
        if (N < 0)
        {
            cout << "\nEl numero es negativo." << endl;
        }
        else
        {
            cout << "\nEl numero es 0." << endl;
        }
    }

    return 0;
}