/**
 * Comprobar si una matriz es simetrica o no por medio de una funcion
*/
#include <iostream>
using namespace std;

void datos();
void esSimetrica(int matriz[][100], int, int);

int matriz[100][100];
int filas, columnas;

int main()
{

    datos();
    esSimetrica(matriz, filas, columnas);

    return 0;
}

void datos(){
    cout << "Digita el numero de filas: ";
    cin >> filas;
    cout << "Digita el numero de columnas: ";
    cin >> columnas;

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "Agrega un numero: ";
            cin >> matriz[i][j];
        }
    }
}

void esSimetrica(int matriz[][100], int filas, int columnas){
    int cont = 0;
    if (filas == columnas){
        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                if(matriz[i][j] == matriz[j][i]){
                    cont++;
                }
            }
        }
    }

    if(cont == filas * columnas){
        cout<<"La matriz es simetrica";
    }else{
        cout<<"La matriz no es simetrica";
    }
}
