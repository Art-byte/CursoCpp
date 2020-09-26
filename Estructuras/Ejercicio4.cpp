/***Crear una estructura llamada 
 * alumno que tenga, nombre edad, promedio, pedir datos al usuario 
 * para 3 alumnos y mostrar quien tiene mejor promedio */
#include <iostream>
using namespace std;

struct alumno
{
    char nombre[100];
    int edad;
    double promedio;
} alumno[3];

int main()
{
    int mayor=0, pos=0;

    for (int i=0; i<3; i++)
    {
        cout << "Ingresa tu nombre: ";
        cin.getline(alumno[i].nombre, 100, '\n');
        cout<<"Ingresa tu edad: "; 
        cin>>alumno[i].edad;
        cout<<'\n';
        cout<<"Ingresa tu promedio: ";
        cin>>alumno[i].promedio;

        if(alumno[i].promedio > mayor){
            mayor = alumno[i].promedio;
            pos = i;
        }
        cout<<"\n";
    }
        cout<<"------Mejor promedio--------";
        cout<<"Nombre del alumno: "<<alumno[pos].nombre<<endl;
        cout<<"Edad: "<<alumno[pos].edad<<endl;
        cout<<"Promedio del alumno: "<<alumno[pos].promedio<<endl;
    
    return 0;
}