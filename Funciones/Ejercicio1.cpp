/*Escribir una funcion que acepte dos numeros dd  punto flotante como parametro
y multiplique estos desplegando el resultado
*/
#include<iostream>
using namespace std;

void mult(float x, float y);

int main(){

    float n1, n2;
    cout<<"Insera dos numeros: ";
    cin>>n1>>n2;

    mult(n1, n2);

    return 0;

}

void mult(float x, float y){
    float multi = x * y;

    cout<<"El resultado es: "<<multi<<endl;
}