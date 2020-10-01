/**
 * REalizar una funcion que tome como parametros un vector y devuelva la suma de sus elementos
*/

#include<iostream>
using namespace std;

void datos();
int suma(int vector[], int);

int vector[100], size;


int main(){

    datos();

    cout<<"La suma de los datos es: "<<suma(vector,size)<<endl;

    return 0;
}


void datos(){
    cout<<"Digite el tamanio del vector: ";
    cin>>size;

    for(int i=0; i<size; i++){
        cout<<i+1<<"Digita un numero: ";
        cin>>vector[i];
    }
}

int suma(int vector[], int size){
    int suma;

    for(int i=0; i<size; i++){
        suma += vector[i];
    }

    return suma;
}