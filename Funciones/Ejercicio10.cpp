/**
 * Realizar una funcion que tome por parametros un vector y su tamanio
 * y cambiar el signo de los elementos
*/
#include<iostream>
using namespace std;


void datos();
void cambiarSigno(int vector[], int);
void mostrarVector(int vector[], int);

int vector[100], tam;


int main(){

    datos();
    cambiarSigno(vector, tam);
    mostrarVector(vector, tam);


    return 0;
}

void datos(){
    cout<<"Ingrese el tamanio del vector: ";
    cin>>tam;

    for(int i=0; i<tam; i++){
        cout<<"Inserta un numero: ";
        cin>>vector[i]; 
    }
}

void cambiarSigno(int vector[], int tam){
    for(int i=0; i<tam; i++){
        vector[i] *= -1;
    }
}


void mostrarVector(int vector[], int tam){
    cout<<"Datos del vector: \n";
    for(int i=0; i<tam; i++){
        cout<<vector[i]<<" ";
    }
}
