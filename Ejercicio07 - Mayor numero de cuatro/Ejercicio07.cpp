// 7. Hacer un programa para ingresar cuatro números distintos y luego mostrar por pantalla el mayor de ellos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B, C, D, May;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;
    cout << "Ingrese el tercer numero: ";
    cin >> C;
    cout << "Ingrese el cuarto numero: ";
    cin >> D;

    if (A > B)
    {
        May = A;
    }
    else
    {
        May = B;
    }

    if (C > May)
    {
        May = C;
    }

    if (D > May)
    {
        May = D;
    }

    cout << "\nEl mayor es: " << May << endl;
    return 0;
}