//Copiar el contenido de una cadena a otra 

#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char cadena1[] = "Arturo";
    char cadena2[50];

    strcpy(cadena2, cadena1);
    cout<<cadena2<<endl;

    return 0;
}