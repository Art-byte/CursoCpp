/**
 * crear una funcion que con base a una matriz devuelva el menor de los elementos
 * almacenados en dicha fila
*/
#include<iostream>
using namespace std;


void perdirDatos();
int numeroMenor(int matriz[][100], int, int);



int matriz[100][100];
int filas, columnas;


int main(){

    perdirDatos();
    cout<<"El elemento de la fila seleccionada es: "<< numeroMenor(matriz, filas, columnas)<<endl;


    return 0;
}


void perdirDatos(){
    cout<<"Inserta el numero de filas: ";
    cin>>filas;
    cout<<"Inserta el numero de columnas: ";
    cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Inserta un numero: ";
            cin>>matriz[i][j];
        }
    }
}



int numeroMenor(int matriz[][100], int filas, int columnas){
    int fila;
    int aux=9999;

    cout<<"Digite el numero a comprobar: ";
    cin>>fila;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            if(i == fila){
                if(matriz[i][j] < aux){
                    aux = matriz[i][j];
                }
            } 
        }
    }

    return aux;

}
