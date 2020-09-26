/**
 * Realizar un programa que lea un arreglo deestructuras de n empleados de la empresa
 * e imprima los datos del empelado con mayor y menos salario
*/
#include <iostream>
using namespace std;

struct Empleado
{
    char nombre[20];
    float salario;
} emp[100];

int main()
{

    int num_empleados, posMayor = 0, posMenor = 0;
    float mayor = 0, menor = 99999;
    cout << "Ingresa el numero de empleados: ";
    cin >> num_empleados;

    for (int i = 0; i < num_empleados; i++)
    {
        cin.ignore();
        cout << "Digita tu nombre: ";
        cin.getline(emp[i].nombre, 20, '\n');

        cout << "Digita tu salario: ";
        cin >> emp[i].salario;

        if (emp[i].salario > mayor)
        {
            mayor = emp[i].salario;
            posMayor = i;
        }
        else if (emp[i].salario < menor)
        {
            menor = emp[i].salario;
            posMenor = i;
        }
        cout << "\n";
    }

    cout << "Empleado con mayor salario " << endl;
    cout << "Nombre: " << emp[posMayor].nombre << endl;
    cout << "Salario: " << emp[posMayor].salario << endl;

    cout << "Empleado con menor salario " << endl;
    cout << "Nombre: " << emp[posMenor].nombre << endl;
    cout << "Salario: " << emp[posMenor].salario << endl;

    return 0;
}