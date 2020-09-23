/**
 * Pedir el nombre al usuario en mayuscula, si su nombre comienza en A convertir su nombre a minusculas
 * caso contrario dejalo sin convertirlo
*/
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char nombre[100];

    cout<<"Ingrese su nombre en mayusculas: ";
    cin.getline(nombre, 100, '\n');

    if(nombre[0] == 'A'){
        strlwr(nombre);

        cout<<"Bienvenido: "<<nombre<<endl;
    }else{
        cout<<"Bienvenido: "<<nombre<<endl;
    }

    return 0;
}