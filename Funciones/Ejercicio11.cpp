/**
 * Crear una funcion que tome como parametros un vector y su tamanio
 * e imprima un nuevo vector con los elementos impares del vector recibido 
 */

#include<iostream>
using namespace std;

void datos();
void verImpares(int vector[], int);

int vector[100],tam;

int main(){

    datos();
    verImpares(vector, tam);

    return 0;
}



void datos(){
    cout<<"Ingrese el tamanio del vector: ";
    cin>>tam;

    for(int i=0; i<tam; i++){
        cout<<i+1<<". Inserta un numero: ";
        cin>>vector[i];
    }
}


void verImpares(int vec[], int tam){
    //Nuevo vector
    int vecImpares[100];
    int aux=0;

    for(int i=0; i<tam; i++){
        if(vec[i]%2!=0){

            //Todo lo de i ahora es de aux
            vecImpares[aux] = vec[i];
            //Esto agrega los datos al nuevo vector 
            aux++; 
        }
    }

    cout<<"Datos impares del vector: "<<endl;
    for(int i=0; i<aux; i++){
        cout<<vecImpares[i]<<" "<<endl;
    }

}