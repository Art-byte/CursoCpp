//Encontrar el mayor de dos numeros
#include<iostream>
using namespace std;

//Prototipo de funcion
int numMayor(int x, int y);

int main(){
    int n1, n2, mayor;
    cout<<"Digita el primer numero: ";
    cin>>n1;
    cout<<"Digita el segundo numero: ";
    cin>>n2;

    mayor = numMayor(n1,n2);

    cout<<"El numero mayor es: "<<mayor<<endl;

    return 0;
}


//Definicion de funcion
int numMayor(int x, int y){
    int numMax;
    if(x>y){
        numMax=x;
    }else{
        numMax=y;
    }

    return numMax;
}
