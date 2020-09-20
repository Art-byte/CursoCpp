/*
Escribir un programa que indique si un dato es vocal minuscula o mayuscula o no es una vocal
*/

#include<iostream>
using namespace std;

int main(){

    char letra;
    cout<<"Ingresa una vocal:";
    cin>>letra;

    if(letra == 'a' || letra =='e' || letra == 'i' || letra == 'o' || letra == 'u'){
        cout<<letra<<" Es una vocal minuscula"<<endl;
    }else if(letra == 'A' || letra =='E' || letra == 'I' || letra == 'O' || letra == 'U'){
        cout<<letra<<" Es una vocal mayuscula"<<endl;
    }else{
        cout<<"No es una vocal"<<endl;
    }

    return 0;
}