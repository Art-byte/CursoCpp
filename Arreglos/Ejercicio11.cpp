/*
Hacer una matriz de tipo entera de 2 * 2, llenarla de numeros y copiarla en una nueva
*/

#include<iostream>
using namespace std;

int main(){

    int matrizA[2][2] = {{1,2},{3,4}};
    int matrizB[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            matrizB[i][j] = matrizA[i][j];
        }
    }


    cout<<"Matriz de copia";

     for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Matriz de copia";
            cout<<matrizB[i][j];
        }
        cout<<"\n";
    }


    return 0;
}