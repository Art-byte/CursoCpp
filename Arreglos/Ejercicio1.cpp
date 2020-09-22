//Definir un arreglo de numeros y calcular la suma de sus elementos

#include<iostream>
using namespace std;

int main(){

    int numeros[] = {1,2,3,4,5};
    int suma = 0;

    for(int i=0; i<5;i++){
        suma += numeros[i];
    }

    cout<<"Suma de elementos: "<<suma<<endl;
    

    return 0;
}