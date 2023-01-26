// 2. Hacer un programa para ingresar dos números distintos y luego se muestre por pantalla el menor de ellos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;

    if (A < B) {
        cout << "\nEl menor es: " << A << endl;
    }
    else {
        cout << "\nEl menor es: " << B << endl;
    }

    return 0;
}

