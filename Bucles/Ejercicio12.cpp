//Realizar la serie fibonacci
#include<iostream>
using namespace std;

int main(){

    int n; 
    int a=0, b=1, c=1;

    cout<<"Ingresa un valor: ";
    cin>>n;

    for(int i=1; i<n; i++){
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }

    return 0;
}