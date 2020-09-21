/*Solicitar numero y cuando entre un cero 
se detiene el programa y te mostrar los datos ingresados
*/

#include<iostream>
using namespace std;

int main(){

    int numero, aux;

    do{
        cout<<"Ingresa un numero: ";
        cin>>numero;

    }while(numero != 0);

    numero = aux;

    cout<<"Numeros ingresado: "<<aux<<endl;

    return 0;
}