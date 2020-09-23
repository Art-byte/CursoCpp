/**
 * Convertir a mayuscula una cadena
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char palabra[50];

    cout<<"Ingresa una palabra: ";
    cin.getline(palabra, 50, '\n');

    strupr(palabra);
    cout<<palabra<<endl;

    return 0;
}