/**
 * Definir una estructura que represente a una persona con el campo nombre y un booleano que indique si la persona 
 * tiene o no una discapacidad.
 * 
 * Dado el vector de personas, rellenar dos nuevos vectores, uno con las personas con discapacidad
 * y otro con pas personas sin discapacidad
*/

#include <iostream>
#include<string.h>
using namespace std;

struct Persona
{
    char nombre[50];
    bool discapacidad;
} personas[100],personasCon[100], personasSin[100];

int main()
{

    int numero_personas;
    int j=0, k=0;

    cout << "Cuantas personas vas a registrar?: ";
    cin >> numero_personas;

    for (int i = 0; i < numero_personas; i++)
    {

        cin.ignore();
        cout << "Ingrese el nombre del paciente: ";
        cin.getline(personas[i].nombre, 50, '\n');

        cout << "Presenta alguna discapacidad?: ";
        cin>>personas[i].discapacidad;

        if(personas[i].discapacidad == 1){
            strcpy(personasCon[j].nombre, personas[i].nombre);
            j++;
        }else{
            strcpy(personasSin[k].nombre, personas[i].nombre);
        }

    }

    cout<<"Personas con discapacidad \n";
    for(int i=0; i<numero_personas; i++){
        cout<<personasCon[i].nombre<<endl;
    }

    cout<<"\n";
    cout<<"Personas sin discapacidad: ";
    for(int i=0; i<numero_personas; i++){
        cout<<personasSin[i].nombre<<endl;
    }

    return 0;

}


