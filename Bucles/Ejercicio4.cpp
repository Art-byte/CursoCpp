/*Hacer un programa que lea valores enteros
hasta que se introduzca un valor en el rango de [20-30] o el valor 0
entregar la suma de los valores mayores a 0 introducidos
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int numero, suma=0;

    do{
        cout<<"Introduzca un numero: ";
        cin>>numero;

        if(numero > 0){
            suma += numero;
        }

    }while(((numero < 20 || numero > 30 )&& numero!=0));
    cout<<"Suma de los numeros: "<<suma<<endl;
    
    return 0;
}