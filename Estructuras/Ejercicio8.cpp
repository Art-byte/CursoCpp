/**
 * Utilizar las estructuras del ejercicio 7 pero ahora pedir n numero de alumnos
 * y de este verificar quien tiene la mayor calificacion
 */

#include <iostream>
using namespace std;

struct Calificaciones
{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno
{
    char nombre[30];
    char sexo[10];
    int edad;
    struct Calificaciones cal;
} alumno[50];

int main()
{
    int pos,calMayor=0, calMin = 100, mejorPromedio=0;
    int numero_alumnos;
    float promedio;

    cout << "Bienvenido" << endl;
    cout << "\n";
    cout << "Inserte el numero de alumnos a guardar: ";
    cin >> numero_alumnos;
    cout << "\n";

    for (int i = 0; i < numero_alumnos; i++)
    {
        cin.ignore();
        cout << "Inserta tu nombre: ";
        cin.getline(alumno[i].nombre, 30, '\n');

        cout << "Inserta el genero: ";
        cin.getline(alumno[i].sexo, 10, '\n');

        cout << "Inserta tu edad: ";
        cin >> alumno[i].edad;

        cout << "Ingresar calificaciones: \n";
        cout << "Nota 1: ";
        cin >> alumno[i].cal.nota1;
        cout << "Nota 2: ";
        cin >> alumno[i].cal.nota2;
        cout << "Nota 3: ";
        cin >> alumno[i].cal.nota3;

        promedio = (alumno[i].cal.nota1 + alumno[i].cal.nota2 + alumno[i].cal.nota3) / 3;

        if(promedio > calMayor){
            calMayor = promedio;
            mejorPromedio = i;
        }
           cout << "\n";
    }

    cout << "--------Datos del Alumno--------" << endl;
    cout << "Nombre: " << alumno[mejorPromedio].nombre << endl;
    cout << "Sexo: " << alumno[mejorPromedio].sexo << endl;
    cout << "Edad: " << alumno[mejorPromedio].edad << endl;
    cout << "Calificacion final: " << promedio << endl;

    return 0;
}