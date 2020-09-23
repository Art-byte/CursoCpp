//Obtener la logitud d euna cadena de caracteres con la funcion strlen();

#include<iostream>
#include<string.h>

using namespace std;

int main(){

    char cadena[] = "Jose Arturo Pedraza Bonilla";
    int len = 0;

    len = strlen(cadena);

    cout<<"Longitud de la cadena: "<<len<<endl;


    return 0;
}