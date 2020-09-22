//Realizar la multiplicacion de dos matrices de 3 x 3

#include<iostream>
using namespace std;

int main(){

    int matrizA[3][3] ={{1,2,3},{3,5,6},{6,7,2}};
    int matrizB[3][3] ={{4,6,9}, {3,9,5},{0,1,2}};
    int matrizResultado[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j=3; j++){
            matrizResultado[i][j] = 0;
            for(int k=0; k<3; k++){
                matrizResultado[i][j] =  matrizResultado[i][j] + matrizA[i][k] * matrizB[k][j];
            }
        }
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrizResultado[i][j];
        }
        cout<<"\n";
    }

    return 0;
}