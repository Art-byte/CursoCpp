
#include<iostream>
#include<string.h>
 
using namespace std;

int main(){

    char palabra[] = "Arturo";
    char palabra2[] = {'a','r','t','u','r','o'};
    char nombre[15];

    cout<<"Digita tu nombre: ";
    cin.getline(nombre,15,'\n');
    cout<<nombre<<endl;

    return 0;
}