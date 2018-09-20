#include <iostream>
#include "Conjuntos.h"
#include <stdlib.h>
#include<string>
using namespace std;

int main()
{

    int num = 5;
    int conjuntoA[num];
    int conjuntoB[num];

    cout << "Ingresa 5 numeros mayores o igual a cero"<< endl;

    cout << "conjunto A\n"<< endl;
    for(int i=0; i<num; i++){
        cin >> conjuntoA[i];
        cout << "\n";
    }
    cout << "\nconjunto B\n"<< endl;
    for(int j=0; j<num; j++){
        cin >> conjuntoB[j];
        cout << "\n";
    }

    char a;
do{
    system("cls");

    Conjuntos C;


    C.lista(conjuntoA, conjuntoB);
    int op;
    cout << "\nOPERACION DE CONJUNTOS\n"<< endl;
    cout << "\n1. UNION \n"<< endl;
    cout << "2. INTERSECCIÓN \n"<< endl;
    cout << "3. DIFERNCIA SIMETRICA \n"<< endl;
    cout << "4. PERTENECE NUMERO \n"<< endl;

    cin >> op;
    switch(op){

    case 1:
        system("cls");
            cout << "\n1. UNION \n"<< endl;
            cout << "\nLA UNION ES\n"<< endl;
            C.Union(conjuntoA, conjuntoB);
    break;
    case 2:
        system("cls");
            cout << "\n2. INTERSECCIÓN \n"<< endl;
            cout << "\nLA INTERSECCIÓN ES\n"<< endl;
            C.Interseccion(conjuntoA, conjuntoB);
    break;
    case 3:
        system("cls");
        cout << "\n3. DIFERNCIA \n"<< endl;

        C.Diferencia(conjuntoA, conjuntoB);
    break;
    case 4:
        system("cls");
        int c;
        cout << "\n4. PERTENECE NUMERO \n"<< endl;
        cout << "\n1. CONJUNTO A \n"<< endl;
        cout << "\n2. CONJUNTO B \n"<< endl;
        cin >> c;
        if(c==1){
            int a;
            cout << "\NUMERO QUE QUIERE BUCAR \n"<< endl;
            cin >> a;
            C.Setnumero(a);
            C.PerteneceAlConjunto(conjuntoA);
        }else{
            int b;
            cout << "\NUMERO QUE QUIERE BUCAR \n"<< endl;
            cin >> b;
            C.Setnumero(b);
            C.PerteneceAlConjunto(conjuntoB);
        }
    break;
    case 5:
        system("cls");

        cout << "\n5. RETIRAR NUMERO \n"<< endl;
        cout << "\n1. CONJUNTO A \n"<< endl;
        cout << "\n2. CONJUNTO B \n"<< endl;
        cin >> c;
        if(c==1){
            int a;
            cout << "\nINTRODUZCA EL NUMERO A RETIRAR \n"<< endl;
            cin >> a;
            C.Setnumero(a);
            C.RetirarElemento(conjuntoA);
        }else{
            int x;
            cout << "\nINTRODUZCA EL NUMERO A RETIRAR \n"<< endl;
            cin >> x;
            C.Setnumero(x);
            C.RetirarElemento(conjuntoB);
            }
            break;
    case 6:
        system("cls");

        cout << "6. AÑADIR NUMERO \n"<< endl;
        cout << "\n1. CONJUNTO A \n"<< endl;
        cout << "\n2. CONJUNTO B \n"<< endl;
        cin >> c;
        if(c==1){
            int a,z;
            cout << "\nINTRODUZCA EL NUMERO A ANADIR \n"<< endl;
            cin >> a;
            C.Setnumero(a);
            cout << "\nINTRODUZCA LA POSICIÓN EN LA QUE LO DESEA \n"<< endl;
            cin >> z;
            C.Setpos(z);
            C.AnadirElemento(conjuntoA);
        }else{
            int a,z;
            cout << "\nINTRODUZCA EL NUMERO A ANADIR \n"<< endl;
            cin >> a;
            C.Setnumero(a);
            cout << "\nINTRODUZCA LA POSICIÓN EN LA QUE LO DESEA \n"<< endl;
            cin >> z;
            C.Setpos(z);
            C.AnadirElemento(conjuntoB);
            }
            break;

    }
cout << "\n\n DESEA SEGUIR (S/N)"<< endl;
cin>> a;
}while(a=='S'||a=='s');

return 0;
}
