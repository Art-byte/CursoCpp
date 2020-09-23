//Agregar una cadena con el mensaje "hola que tal ", y concatenarlo con el nombre del usuario por consola
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    
    char cadena1[] = "Hola que tal ";
    char cadena2[30];

    cout<<"Inserta tu nombre: ";
    cin.getline(cadena2, 30, '\n');

    cout<<strcat(cadena1, cadena2);

    return 0;
}