#include <iostream>

// funcion suma si trabajo con float, todo sera float
float suma(float numerouno, float numerodos)
{
    float resultado = 0;
    resultado = numerouno + numerodos;
    return resultado;
}

float resta(float numerouno, float numerodos)
{
    float resultado = 0;
    resultado = numerouno - numerodos;
    return resultado;
}

float multiplicacion(float numerouno, float numerodos)
{
    float resultado = 0;
    resultado = numerouno * numerodos;
    return resultado;
}

float division(float numerouno, float numerodos)
{
    float resultado = 0;
    if (numerodos == 0)
    {
        resultado = 3000;
        return resultado;
    }
    else
    {
        resultado = numerouno / numerodos;
        return resultado;
    }
}
using namespace std;

int main()
{
    string nombre;
    int opcion,edad;
    float n1, n2, sumatotal = 0, resulresta = 0, resulmulti = 0, resuldivision;

    cout<<"ingresa tu nombre"<<endl;
    cin>>nombre;
    cout<<"ingresa tu edad"<<endl;
    cin>>edad;
    if(edad <12){
        cout<<"no puedes realizar ninguna operacion"<<endl;
        return 0;
    }
    else{
        cout<<"puedes continuar"<<endl;
    }
    
    cout << "ingrese el primer numero" << endl;
    cin >> n1;
    cout << "ingresa el segundo numero" << endl;
    cin >> n2;

    cout << "que operaciones quieres hacer " <<nombre<< endl;
    cout << "1-suma los numeros" << endl;
    cout << "2-restar los numeros" << endl;
    cout << "3-multiplicar los numeros" << endl;
    cout << "4.dividir los numeros" << endl;
    cout << "5-todo los casos" << endl;
    cin >> opcion;

    sumatotal = suma(n1, n2);

    resulresta = resta(n1, n2);

    resulmulti = multiplicacion(n1, n2);

    resuldivision = division(n1, n2);

    switch (opcion)
    {
    case 1:
        cout << "el resultado de la suma es: " << sumatotal << endl;
        break;

    case 2:
        cout << "el resultado de la resta es: " << resulresta << endl;
        break;
    case 3:
        cout << "el resultado de la multiplicacion de sus numeros es: " << resulmulti << endl;
        break;
    case 4:
        if (resuldivision == 3000)
        {
            cout << "no se puede dividir";
        }
        else
        {
            cout << "el resultado de la division de sus numeros es: " << resuldivision << endl;
        }
        break;
    case 5:

        cout << "el resultado de la suma es: " << sumatotal << endl;
        cout << "el resultado de la resta es: " << resulresta << endl;
        cout << "el resultado de la multiplicacion de sus numeros es: " << resulmulti << endl;

        if (resuldivision == 3000)
        {
            cout << "no se puede dividir";
        }
        else
        {
            cout << "el resultado de la division de sus numeros es: " << resuldivision << endl;
        }
        break;
    default:
        cout << "opcion invalida" << endl;
        break;
    }

    return 0;
}