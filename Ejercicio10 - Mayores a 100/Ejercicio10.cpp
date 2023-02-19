// 10. Hacer un programa para ingresar cuatro números y luego mostrar por pantalla cuáles son mayores a 100.

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int A, B, C, D;
    int Con = 0;
    std::string As, Bs, Cs, Ds, May;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;
    cout << "Ingrese el tercer numero: ";
    cin >> C;
    cout << "Ingrese el cuarto numero: ";
    cin >> D;

    if (A > 100)
    {
        As = "el primero";
        Con++;
    }
    else
    {
        As = "";
    }
    if (B > 100)
    {
        if (Con == 1)
        {
            Bs = ", el segundo";
        }
        else
        {
            Bs = "el segundo";
        }
        Con++;
    }
    else
    {
        Bs = "";
    }
    if (C > 100)
    {
        if (Con >= 1)
        {
            Cs = ", el tercero";
        }
        else
        {
            Cs = "el tercero";
        }
        Con++;
    }
    else
    {
        Cs = "";
    }
    if (D > 100)
    {
        if (Con >= 1)
        {
            Ds = " y el cuarto";
        }
        else
        {
            Ds = "el cuarto";
        }
        Con++;
    }
    else
    {
        Ds = "";
    }

    May = As + Bs + Cs + Ds;

    if (Con > 1)
    {
        cout << "\nNumeros mayores a 100: " << May << "." << endl;
    }
    else if (Con > 0)
    {
        cout << "\nEl numero mayor a 100 es: " << May << "." << endl;
    }
    else
    {
        cout << "\nNingun numero es mayor a 100." << endl;
    }

    return 0;
}