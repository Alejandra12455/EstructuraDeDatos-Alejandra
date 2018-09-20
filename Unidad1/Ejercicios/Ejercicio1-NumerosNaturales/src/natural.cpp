#include <iostream>
#include "natural.h"
using namespace std;

natural::natural()
{
    //ctor
}

int natural::antecesor(int numeros[10]){
   int ant;

    for(int i=0; i<=10; i++)
    {
        if(numeros[i]>0)
        {
        cout<<"El antecesor de "<<numeros[i]<<" es "<<numeros[i]-1<<endl;
        }
       else
        {
            cout <<"El numero "<<numeros[i]<<" sin antecesor\n";
        }
    }


}

int natural::sucesor(int numeros[10]){
   int ant;

    for(int i=0; i<=10; i++)
    {
        if(numeros[i]>=0)
        {
        cout<<"El Sucesor de "<<numeros[i]<<" es "<<numeros[i]+1<<endl;
        }
       else
        {
            cout <<"el numero "<<numeros[i]<<" no tiene antecesor\n";
        }
    }
}


int natural::suma(int numeros[10]){
    int sum =0;
    for(int i=0; i<=9; i++){
        sum += numeros[i];
    }
    return sum;
}

int natural::menor(int numeros[10]){
    int me=numeros[0];
    for(int i=0; i<=9; i++){
        if(numeros[i+1]<me)
            me = numeros[i+1];
        }
    return me;
}
