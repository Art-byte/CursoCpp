// Paso de parametros de tipo estrutura

#include<iostream>
using namespace std;


struct Persona
{
    char nombre[30];
    int edad;

} persona1;


void pedirDatos();
void verDatos(Persona);


int main(){

    pedirDatos();
    verDatos(persona1);

    return 0;
}



void pedirDatos(){
    cout<<"Digite su nombre: ";
    cin.getline(persona1.nombre, 30, '\n');
    cout<<"Digite su edad: ";
    cin>>persona1.edad;
}


void verDatos(Persona p){
    cout<<"Nombre: "<<p.nombre<<endl;
    cout<<"Edad: "<<p.edad<<endl;
}