/**
 * Crear un programa que pida el nombre al usuario, luego verificar la logitud.
 * si la cadena supera 10 caracteres, mostrarla en pantalla, caso contrario no mostrarla
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char cadena[100];

    cout<<"Ingresa una cadena de caracteres: ";
    cin.getline(cadena, 100, '\n');

    if(strlen(cadena) > 10){
        cout<<cadena;
    }

    return 0;
}