#include <iostream>
using namespace std;

struct ejercicio
{
    string nombre;
    int carnet;
    int edad;
};
float cum(float suma)
{
    int uv=5;
    float resultado = 0;
    resultado = suma * uv;
    return resultado;
}

int main()
{
    
    int estu;
    float notas[3];
    float suma=0;
    cout << "ingresa la cantidad de estudiantes: " << endl;
    cin >> estu;

    ejercicio Eje1[estu];
    for (int i = 0; i < estu; i++)
    {
        cout << "Ingresa el nombre del estudiane: " << i + 1 << endl;
        cin >>Eje1[i].nombre;
        cout<<"Ingresa tu numero de carnet: "<<endl;
        cin>>Eje1[i].carnet;
        cout<<"Ingresa la edad: "<<endl;
        cin>>Eje1[i].edad;
        for(int j=0;j<4;j++){
            cout<<"ingresa nota "<<i<<endl;
            cin>>notas[j];
            suma=suma+notas[j];

        }
    }
     for (int n = 0; n < estu; n++)
    {
        cout << "Nombre: " << Eje1[n].nombre << endl;
        cout << "Carnet: " << Eje1[n].carnet << endl;
        cout << "Edad: " << Eje1[n].edad << endl;
        cout << "Cum: " << Eje1[n].cum << endl;
    }

    return 0;
}