#include <iostream>
using namespace std;

int main()
{
    int horas;
    float phora = 2.5, salario, salario1;
    string nombre;
    char letra='s';

    while(letra =='s'){

    cout << "ingresa nu nombre\n";
    cin >> nombre;

    cout << "ingresa tus horas trabajadas durante la semana\n";
    cin >> horas;

    

    if (horas <= 44)
    {
        salario = (2.5 * horas);
        cout << "Empleado " << nombre << endl;
        cout << "Su salario es " << salario << endl;
    }
    else
    {
        salario1 = 44 * phora + 1.5 * phora * (horas - 44);

        cout << "Empleado " << nombre << endl;
        cout << "Su salario es $" << salario1 << endl;
    }

    cout<<"deseas egregar algunos otros datos\ns=si\nn=no\n";
    cin>>letra;
}



    return 0;
}