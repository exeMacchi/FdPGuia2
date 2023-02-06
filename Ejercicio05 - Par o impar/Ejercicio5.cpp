// 5. Hacer un programa para ingresar un número y mostrar por pantalla un cartel aclaratorio si el mismo es PAR o IMPAR.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;

    cout << "Ingrese un numero: ";
    cin >> N;

    if (N % 2 == 0) {
        cout << "\nEl numero es par." << endl;
    }
    else {
        cout << "\nEl numero es impar." << endl;
    }

    return 0;
}