// 1. Hacer un programa para ingresar un número y luego se emita por pantalla un cartel aclaratorio si 
//    “Es mayor a 10” o “No es mayor a 10”.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    if (N > 10)
    {
        cout << "\n" << N << " es mayor a 10." << endl;
    }
    else if (N < 10)
    {
        cout << "\n" << N << " es menor a 10." << endl;
    }
    else
    {
        cout << "\n" << N << " es igual a 10." << endl;
    }

    return 0;
}