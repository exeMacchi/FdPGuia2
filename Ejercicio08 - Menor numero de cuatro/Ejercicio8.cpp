// 8. Hacer un programa para ingresar cuatro números distintos y luego mostrar por pantalla el menor de ellos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B, C, D, men;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;
    cout << "Ingrese el tercer numero: ";
    cin >> C;
    cout << "Ingrese el cuarto numero: ";
    cin >> D;

    if (A < B) {
        men = A;
    }
    else {
        men = B;
    }

    if (C < men) {
        men = C;
    }
    if (D < men) {
        men = D;
    }

    cout << "\nEl menor es: " << men << endl;
    return 0;
}
