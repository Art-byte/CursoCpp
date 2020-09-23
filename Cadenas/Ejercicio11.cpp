/**
 * convertir dos cadenas de minusculas a mayusculas y comparar si son iguales
*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char cadena1[] = "Arturo";
    char cadena2[] = "Arturo";

    strupr(cadena1);
    cout<<cadena1<<endl;
    strupr(cadena2);
    cout<<cadena2<<endl;

    if(strcmp(cadena1, cadena2) != 0){
        cout<<"Ambas cadenas son diferentes";
    }else{
        cout<<"Ambas cadenas son iguales";
    }
    

    return 0;
}