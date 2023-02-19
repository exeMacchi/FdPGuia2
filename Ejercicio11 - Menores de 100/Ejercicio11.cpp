// 11. Hacer un programa para ingresar cuatro números y luego mostrar por pantalla cuántos son menores a 100.

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int Con = 0;
    int A, B, C, D;
    std::string Men;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;
    cout << "Ingrese el tercer numero: ";
    cin >> C;
    cout << "Ingrese el cuarto numero: ";
    cin >> D;

    if (A < 100)
    {
        Con++;
    }
    if (B < 100)
    {
        Con++;
    }
    if (C < 100)
    {
        Con++;
    }
    if (D < 100)
    {
        Con++;
    }

    switch (Con)
    {
    case 1:
        Men = "Solo un numero es menor a 100.";
        break;
    case 2:
        Men = "Dos numeros son menores a 100.";
        break;
    case 3:
        Men = "Tres numeros son menores a 100.";
        break;
    case 4:
        Men = "Cuatro numeros son menores a 100.";
        break;
    default:
        Men = "Ningun numero es menor a 100.";
    }

    cout << "\n" << Men << endl;
    return 0;
}