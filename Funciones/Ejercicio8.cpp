/**
 * Paso de parametros de tipo vector
 */

#include<iostream>

using namespace std;

void cuadrado(int vector[], int);
void mostrarVector(int vector[], int);

int main(){

    const int Size = 5;
    int vector[Size] = {1,2,3,4,5};

    cuadrado(vector, Size);
    mostrarVector(vector, Size);

    return 0;
}


void cuadrado(int vector[], int size){
    for(int i=0; i<size; i++){
        vector[i] *= vector[i];
    }
}

void mostrarVector(int vector[], int size){
    for(int i=0; i<size; i++){
        cout<<vector[i]<<" "<<endl;
    }
}
