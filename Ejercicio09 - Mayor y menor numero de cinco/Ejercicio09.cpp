// 9. Hacer un programa para ingresar cinco números distintos y luego mostrar por pantalla el mayor y el menor de ellos.


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B, C, D, E, May, Men;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;
    cout << "Ingrese el tercer numero: ";
    cin >> C;
    cout << "Ingrese el cuarto numero: ";
    cin >> D;
    cout << "Ingrese el quinto numero: ";
    cin >> E;

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
    if (E > May)
    {
        May = E;
    }

    if (A < B)
    {
        Men = A;
    }
    else
    {
        Men = B;
    }
    if (C < Men)
    {
        Men = C;
    }
    if (D < Men)
    {
        Men = D;
    }
    if (E < Men)
    {
        Men = E;
    }

    cout << "\nEl numero mayor es: " << May << endl;
    cout << "\nEl numero menor es: " << Men << endl;
    return 0;
}