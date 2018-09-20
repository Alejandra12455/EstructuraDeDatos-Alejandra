#include <iostream>
#include "include/natural.h"
using namespace std;
#include <stdlib.h>
int main()
{

    int numeros[10];

    cout <<" <Ingresa 10 numeros mayor o igual a 0> \n";
    for(int i=0; i<=9; i++){

    cin >>numeros[i];
        if (numeros[i]<0)
        {
            cout<<"El numero que ingresaste debe ser Mayor a cero "<<endl;
            i--;
        }
    }
    system("cls");
    natural nat;
    cout <<"\n\n  ANTECESORES \n";
    nat.antecesor(numeros);
    cout<<"\n\n SUCESOR \n";
    nat.sucesor(numeros);
    cout<<"\n\n SUMA \n";
    cout <<"la suma es: "<<nat.suma(numeros);
    cout <<"\n\n MENOR";
    cout <<"\n numero menor es:"<<nat.menor(numeros);

    return 0;
}

