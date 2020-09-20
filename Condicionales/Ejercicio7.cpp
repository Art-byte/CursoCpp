/**
 * Solicitar una edad entera e indicar si la edad introducidad esta en el ranco de 10 a 25
*/
#include<iostream>
using namespace std;


int main(){
    int edad;
    cout<<"Inserta tu edad";
    cin>>edad;

    if(edad >= 18 && edad <= 25){
        cout<<"Estas en el rango de edad";
    }else{
        cout<<"Estas fuera del rango de edad";
    }

    return 0;
}