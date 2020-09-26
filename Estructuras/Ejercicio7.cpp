/**
 * Hacer 2 estructuras. una llamada promedio con los campos
 * nota1, nota 2, y nota 3
 * 
 * La segunda se llamara alumno y tendra los campos: nombre, sexo y edad. Anidar la estructura
 * promedio dentro de alumno y pedir los datos para luego calcular su promedio e imprimir los resultados
*/
#include<iostream>
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
} alumno;



int main(){

    float promedio;

    cout<<"Bienvenido"<<endl;
    cout<<"\n";

    cout<<"Inserta tu nombre: ";
    cin.getline(alumno.nombre, 30, '\n');

    cout<<"Inserta el genero: ";
    cin.getline(alumno.sexo, 10, '\n');

    cout<<"Inserta tu edad: ";
    cin>>alumno.edad;

    cout<<"Ingresar calificaciones: \n";
    cout<<"Nota 1: ";
    cin>>alumno.cal.nota1;
    cout<<"Nota 2: ";
    cin>>alumno.cal.nota2;
    cout<<"Nota 3: ";
    cin>>alumno.cal.nota3;

    promedio = (alumno.cal.nota1 + alumno.cal.nota2 + alumno.cal.nota3 )/ 3;


    cout<<"\n";

    cout<<"--------Datos del Alumno--------"<<endl;
    cout<<"Nombre: "<<alumno.nombre<<endl;
    cout<<"Sexo: "<<alumno.sexo<<endl;
    cout<<"Edad: "<<alumno.edad<<endl;
    cout<<"Calificacion final: "<<promedio<<endl;


    return 0;
}