/*
Leer dos numeros y determinar cual de los dos es mayor
*/

#include<iostream>
using namespace std;

int main(){

    int n1, n2;

    cout<<"Ingresa dos numeros: ";
    cin>>n1>>n2;

    if(n1==n2){
        cout<<"Son numeros iguales";
    }else if(n1 > n2){
        cout<<"El mayor es: "<<n1;
    }else{
        cout<<"El mayor es: "<<n2;
    }

    return 0;
}