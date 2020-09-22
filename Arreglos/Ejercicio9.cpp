/**
 * Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas
 * luego mostrar la matriz
*/
#include<iostream>
using namespace std;

int main(){

    int vector[50][50];
    int f, c;

    cout<<"Ingresa el numero de filas: ";
    cin>>f;
    cout<<"Ingresa el numero de columnas: ";
    cin>>c;

    for(int i=0; i<f;i ++){
        for(int j=0; j<c; j++){
            cout<<"Ingresa un numero: ["<<i<<"]["<<j<<"]: ";
            cin>>vector[i][j];
        }
    }

    for(int i=0; i<f;i ++){
        for(int j=0; j<c; j++){
            cout<<vector[i][j];
        }
        cout<<"\n";
    }

    return 0;
}