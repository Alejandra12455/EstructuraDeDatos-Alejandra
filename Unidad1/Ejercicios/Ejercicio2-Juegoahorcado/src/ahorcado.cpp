#include "ahorcado.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <time.h>
using namespace std;

ahorcado::ahorcado()
{
    //ctor
}

string palabra_original;
string palabra_mostrar;
int vidas;


void ahorcado::mein(){


    inicializar();
    mostrar();
    while(vidas>0 && palabra_mostrar!=palabra_original){
        char x;
        cin>>x;
        system("cls");
        ingresar(x);
        mostrar();

    }
    if(vidas>0){
        cout << "Ganaste, supiste encontrar la palabra!!"<<endl;
    }else{
        cout << "Perdiste :c , la palabra era: " << palabra_original << endl;
    }


}




void ahorcado::mostrar(){
    cout << "Juego del ahorcado, acerta la palabra y ganaras!" << endl;

    cout << endl<<endl;
    cout << " Tienes " << vidas << " Vidas: " << endl;
    cout << palabra_mostrar<<endl;
}




void ahorcado::ingresar(char x){
    bool perdividas=true;

    for(int i=0; i<palabra_original.length(); i++){
        if(x==palabra_original[i]){
            perdividas=false;
            palabra_mostrar[i]=x;
        }
    }

    if(perdividas) vidas--;
}



void ahorcado::inicializar(){
        vidas = 5;
        palabra_original=obtener_palabra_aleatoria();

    /*inicia for*/
        for(int i=0; i<palabra_original.length() ; i++){
        if(palabra_original[i]>='A' && palabra_original[i]<='Z'){
            palabra_original[i]+=32;
        }
    }

    //inicia segundo for
    for (int j=0; j<palabra_original.length() ; j++){
        if(palabra_original[j]>='a' && palabra_original[j]<='z'){
            palabra_mostrar+='*';
        }else{
            palabra_mostrar+=palabra_original[j];
        }
    }
}



string ahorcado::obtener_palabra_aleatoria(){
  int dato;

    vector<string>palabras;
    palabras.push_back("manzana");
    palabras.push_back("amado");
    palabras.push_back("parangaricutirimicuaro");
    palabras.push_back("elefante");
    palabras.push_back("computadora");
    palabras.push_back("mano");
    palabras.push_back("animal");
    palabras.push_back("perro");
    palabras.push_back("nashito");
    palabras.push_back("amor");
    palabras.push_back("ahorcado");
    palabras.push_back("ventana");
    palabras.push_back("puerta");
    palabras.push_back("television");
    palabras.push_back("gorra");

    srand(time(NULL));
    dato = 0 + rand()%(5);

    return palabras[dato];
}

