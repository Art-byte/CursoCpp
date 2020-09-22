/**
 * Crear una matriz preguntando el tamanio, llenarla y copiar el contenido en otra matriz.
 * por ultimo mostrarla por pantalla
*/
#include<iostream>
using namespace std;

int main(){

    int matrizA[100][100];
    int matrizB[100][100];
    int filas, columnas;

    cout<<"Inserta el numero de filas: ";
    cin>>filas;
    cout<<"Inserta el numero de columnas: ";
    cin>>columnas;

//Para insertar datos a la matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Inserta un numero: ";
            cin>>matrizA[i][j];
        }
    }


    //Mostrar la matriz
    cout<<"Datos de la matriz original \n";
    for(int i=0; i<filas; i++){
            for(int j=0; j<columnas; j++){
                cout<<matrizA[i][j];
            }
            cout<<"\n";
        }

    //Copiamos los datos de la matriz en el nuevo
      for(int i=0; i<filas; i++){
            for(int j=0; j<columnas; j++){
                matrizB[i][j] = matrizA[i][j];
            }
        }

    //Finalmente mostramos el nuevo arreglo copiado
    cout<<"Datos de la nueva matriz \n";
    for(int i=0; i<filas; i++){
            for(int j=0; j<columnas; j++){
                cout<<matrizB[i][j];
            }
            cout<<"\n";
        }




    return 0;
}