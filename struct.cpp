#include <iostream>
using namespace std;
// estructura
struct Estudiante
{
    int edad;
    string nombre;
    string carnet;
    char genero;
    string carrera;
};

int main()
{
    // estudiante1 para representar toda la estructura de estudiante
    /*estudiante estudiante1={18,"Erick","00185725", 'M',"informatica"};
    pido la edad como la tengo declarada arriba
    cout<<"Edad: "<<estudiante1.edad<<endl;
    cout<<"Nombre: "<<estudiante1.nombre<<endl;
    cout<<"Carnet: "<<estudiante1.carnet<<endl;
    cout<<"Genero: "<<estudiante1.genero<<endl;
    cout<<"Carrera: "<<estudiante1.carrera<<endl;*/

    int cantidad;
    cout << "Ingresa la cantidad de estudiante: " << endl;
    cin >> cantidad;
    Estudiante estudiante[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese la edad del estudiante: " << i + 1 << endl;
        cin >> estudiante[i].edad;
        cout << "Ingresa el nombre del estudiante:  " << endl;
        cin >> estudiante[i].nombre;
        cout << "Ingresa tu numero de carnet: " << endl;
        cin >> estudiante[i].carnet;
        cout << "Ingresa su genero: " << endl;
        cin >> estudiante[i].genero;
        cout << "Ingresa tu carrera: " << endl;
        cin >> estudiante[i].carrera;
    }

    for (int j = 0; j < cantidad; j++)
    {
        cout << "Edad: " << estudiante[j].edad << endl;
        cout << "Nombre: " << estudiante[j].nombre << endl;
        cout << "Carnet: " << estudiante[j].carnet << endl;
        cout << "Genero: " << estudiante[j].genero << endl;
        cout << "Carrera: " << estudiante[j].carrera << endl;
    }

    return 0;
}