/*Hacer un programa que calcule y muestre 
la suma de los cuadrados  de los 10 primero numeros mayores a cero ingresados
por consola
*/

#include<iostream>
using namespace std;

int main(){
    
    int suma=0, cuadrado;

    for(int i =0; i<=10; i++){

        cuadrado = i * i;
        suma = suma + cuadrado;
    }
    
    cout<<"Suma de los valores: "<<suma<<endl;


    return 0;
}