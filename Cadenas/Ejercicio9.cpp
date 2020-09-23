//Comprobar si una palabra es palindromo o no

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string texto;
    int aux=0, igual=0;

    cout<<"Agrega tu palindromo: ";
    getline(cin>> ws, texto);

    for(int i = texto.length()-1; i>=0; i--){
        if(texto[i] == texto[aux]){
            igual++;
        }
        aux++;
    }

    if(texto.length() == igual) {
        cout << "Es palindromo" << endl;
    } else {
        cout << "No es palindromo" << endl;
    }



    return 0;
}