// 12. Hacer un programa para ingresar un valor que estará expresado en minutos. 
//     Si los minutos superan los 60, pasar el valor a horas, de lo contrario dejarlo en minutos. 
//     Mostrar el resultado en pantalla aclarando si se muestran minutos u horas.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float H, M;

    cout << "Ingrese la cantidad de minutos: ";
    cin >> M;

    if (M >= 60)
    {
        H = M / 60;
        if (H == 1)
        {
            cout << "\n" << H << " hora." << endl;
        }
        else
        {
            cout << "\n" << H << " horas." << endl;
        }
    }
    else
    {
        if (M == 1)
        {
            cout << "\n" << M << " minuto." << endl;
        }
        else
        {
            cout << "\n" << M << " minutos." << endl;
        }
    }

    return 0;
}