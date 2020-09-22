/**
 * Determinar si una matriz es simetrica o no
*/
#include<iostream>
using namespace std;

int main(){

    int numeros[100][100];
    int filas, columnas;
    char simetrica ='F';

    cout<<"Ingresa el numero de filas: ";
    cin>>filas;
    cout<<"Inserta el numero de columnas: ";
    cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Inserta un numero: ";
            cin>>numeros[i][j];
        }
    }

    if(filas == columnas){
        for(int i=0; i<filas; i++){
            for(int j=0; j<columnas; j++){
                if(numeros[i][j] == numeros[j][i]){
                    simetrica = 'V';
                }
            }
        }
    }

    if(simetrica == 'V'){
        cout<<"Es una matriz simetrica";
    }else{
        cout<<"La matriz no es simetrica";
    }

    return 0;
}