/*Crear una estructura la cual tendra los siguientes campos
nombre, edad, sexo, club, pedir datos al usuairo para un corredos asi como una
categoria de competicion

juvenil <= 18;
senior <= 40 anios
veterano > 40 anios
posteriormente imprimir todos los datos del corredor incluida la categoria de competicion
*/

#include <iostream>
#include<string.h>
using namespace std;

struct competidor
{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
    
} competidor;

int main()
{
    char categoria[20];

    cout << "Ingresa tu nombre: ";
    cin.getline(competidor.nombre, 100, '\n');
    cout << "Ingresa tu edad: ";
    cin >> competidor.edad;
    cout << "Ingresa tu sexo: ";
    cin>>competidor.sexo;
    cout << "\n";
    cin.getline(competidor.sexo, 10, '\n');
    cout << "Ingresa el club de procedencia: ";
    cin.getline(competidor.club, 50, '\n');
    cout << "\n";

    if (competidor.edad <= 18)
    {
        strcpy(categoria, "Juvenil");
    }
    else if (competidor.edad <= 40)
    {
        strcpy(categoria, "Senior");
    }
    else if (competidor.edad > 40)
    {
        strcpy(categoria, "Veterano");
    }
    cout<<"---------Datos del corredor--------------"<<endl;
    cout << "Nombre: " << competidor.nombre << endl;
    cout << "Edad: " << competidor.edad << endl;
    cout << "Sexo: " << competidor.sexo << endl;
    cout << "Club: " << competidor.club << endl;
    cout<<"Categoria: "<<categoria;
    cout<<"\n";

    return 0;
}