// 3. Hacer un programa para ingresar dos n�meros y que luego emita por pantalla el mayor de ellos o un 
//    cartel aclaratorio �Son iguales� en el caso de que as� sea.

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

    if (A >= B)
    {
        if (A > B)
        {
            cout << "\nEl mayor es: " << A << endl;
        }
        else
        {
            cout << "\nAmbos numeros son iguales" << endl;
        }
    }
    else
    {
        cout << "\nEl mayor es: " << B << endl;
    }

    return 0;
}