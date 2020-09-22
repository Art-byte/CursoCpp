/*
Realizar la suma de dos matrices cuadradas de 3 x 3
**/

#include<iostream>
using namespace std;

int main(){

    int matrizA[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int matrizB[3][3] = {{4,2,6}, {3,8,1}, {9,5,6}};
    int matrizResultado[3][3];

    cout<<"Matriz 1 \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrizA[i][j];
        }
        cout<<"\n";
    }

    cout<<"\n";

    cout<<"Matriz 2 \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrizB[i][j];
        }
        cout<<"\n";
    }


    //Suma de la matriz
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }


    cout<<"\n";
    
    cout<<"Matriz resultado \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrizResultado[i][j];
        }
        cout<<"\n";
    }


    return 0;
}