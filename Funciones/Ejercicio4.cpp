//Devolver valores multiples

#include<iostream>
using namespace std;


void calcular(int, int, int&, int&);


int main(){

    int num1, num2;
    int sum=0, prod=0;

    cout<<"Ingrese dos numeros: ";
    cin>>num1>>num2;

    calcular(num1, num2, sum, prod);

    cout<<"Valor de la suma: "<<sum<<endl;
    cout<<"Valor del producto: "<<prod<<endl;



    return 0;
}

void calcular(int num1, int num2, int& suma, int& prod){

    suma = num1 + num2;
    prod = num1 * num2;
}