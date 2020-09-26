/**
 * Escribir una funcion que calcule el cuadrado de el valor
 * que se le manda, esta debera ser capaz de elevar al cuadrado numeros floantes
*/

#include<iostream>
using namespace std;


void pedirNum();
void cuadradoNum(float n);
float numero;


int main(){

    pedirNum();
    cuadradoNum(numero);

    return 0;
}


void pedirNum(){
    cout<<"Ingresa un numero: ";
    cin>>numero;
}

void cuadradoNum(float n){
    float dato =0;
    dato = numero * numero;
    cout<<"El cuadrado del numero es: "<<dato<<endl;
}