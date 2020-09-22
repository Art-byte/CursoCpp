//Escribir un programa que tenga un arreglo definido y multiplicar todos sus elementos

#include<iostream>
using namespace std;

int main(){

    int vector[] = {1,2,3,4,5};
    int multiplica = 1;

    for(int i=0; i<5; i++){
        multiplica *= vector[i];
    }

    cout<<"Elementos: "<<multiplica<<endl;

    return 0;
}