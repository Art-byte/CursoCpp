/*Pedir un numero por consola y que de este
nos muestre su tabla de multiplicar
*/

#include<iostream>

using namespace std;

int main(){

    int num; 
    do{
        cout<<"Ingresa un numero";
        cin>>num;

    }while((num <1) || (num>10));
    /*Asi verificamos que este dentro de un rango 
    si hay un numero menor a 1 o mayor a 10, volvera a preguntar
    de lo contrario, llevara a cabo el bucle
    */

    for(int i=1; i<=20; i++){
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }

    return 0;
}