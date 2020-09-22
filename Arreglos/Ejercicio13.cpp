/**
 * Crear una matriz de 3x3 y que esta cree una matriz transpuesta
*/

#include<iostream>
using namespace std;

int main(){

    int matrizA[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>matrizA[i][j];
        }
    }

    //Matriz normal
    cout<<"Matriz normal \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrizA[i][j];
        }
        cout<<"\n";
    }

    //Matriz transpuesta
    cout<<"Matriz transpuesta \n";
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<matrizA[j][i];
        }
        cout<<"\n";
    }




    return 0;
}