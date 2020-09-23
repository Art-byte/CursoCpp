//Comparar dos cadenas 

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char palabra1[50];
    char palabra2[50];

    cout<<"Escribe una la primer palabra: ";
    cin.getline(palabra1, 30, '\n');

    
    cout<<"Escribe una la segunda palabra: ";
    cin.getline(palabra2, 30, '\n');

    if(strcmp(palabra1,palabra2) != 0){
        cout<<"Ambas cadenas son diferentes";
    }else{
        cout<<"Ambas cadenas son iguales";
    }


    return 0;
}