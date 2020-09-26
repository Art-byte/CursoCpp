//Estructura basicas

#include<iostream>
using namespace std;

struct Persona{
    char nombre[20];
    int edad;
} 
persona1 ={"Karla", 23},
persona2;


int main(){

    cout<<"\n";
    cout<<"Nombre 1: "<<persona1.nombre<<endl;
    cout<<"Edad 1: "<<persona1.edad<<endl;

    cout<<"\n";
    cout<<"Nombre:";
    cin.getline(persona2.nombre, 20, '\n');
    cout<<"Edad:";
    cin>>persona2.edad;

    cout<<"\n";
    cout<<"Nombre 2: "<<persona2.nombre<<endl;
    cout<<"Edad 2: "<<persona2.edad<<endl;

    return 0;
}
