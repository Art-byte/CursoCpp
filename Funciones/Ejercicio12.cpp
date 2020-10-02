/**
 * Paso de parametros tipo matriz
*/
#include<iostream>
using namespace std;


void verMatriz(int matriz[][3], int, int);
void matrizCuadrada(int matriz[][3], int, int);
void verMatrizCuadrada(int matriz[][3], int, int);


int main(){

    const int fil = 2;
    const int col = 3;

    int matriz[fil][col] ={{1,2,3},{4,5,6}};

    verMatriz(matriz, fil, col);
    matrizCuadrada(matriz, fil, col);
    verMatrizCuadrada(matriz, fil, col);

    return 0;
}


void verMatriz(int matriz[][3], int filas, int columnas){
    cout<<"Matriz original \n";
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
}



void matrizCuadrada(int matriz[][3], int filas, int columnas){
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            matriz[i][j] *= matriz[i][j];
        }
    }

}



void verMatrizCuadrada(int matriz[][3], int filas, int columnas){
    cout<<"Matriz al cuadrado: \n";
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
}
