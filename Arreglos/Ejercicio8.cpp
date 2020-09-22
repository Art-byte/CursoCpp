/*
Hacer un programa que lea 5 numeros en un arreglo y los copie en otro
una vez copiados, que multiplique cada valor por 2 y muestre el segundo arreglo 
 */

#include<iostream>
using namespace std;

int main(){

    int vector[5] ={1,2,3,4,5};
    int vectorN[5];

    for(int i=0; i<5; i++){

        vectorN[i] = vector[i];
    }

    for(int i=0; i<5; i++){
        cout<<vectorN[i] * 2;
    }



    return 0;
}

