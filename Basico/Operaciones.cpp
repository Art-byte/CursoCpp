/*Escribir un programa que lea dos numeros y muestra la suma
de estos, multiplicacion y division
*/

#include<iostream>
using namespace std;

int main(){
	
	int num1, num2;
	int sum=0, rest=0, mult=0, div=0;
	
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	
	 sum = num1 + num2;
	 rest = num1 - num2;
	 mult = num1 * num2;
	 div = num1 / num2;
	
	cout<<"La suma es: "<<sum<<endl;
	cout<<"La resta es: "<<rest<<endl;
	cout<<"La division es: "<<div<<endl;
	cout<<"La multiplicacion : "<<mult<<endl;
	
	return 0;
}
