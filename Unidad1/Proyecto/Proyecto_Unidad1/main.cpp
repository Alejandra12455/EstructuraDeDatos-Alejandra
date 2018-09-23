#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include "Datos.h"
#include <string.h>


using namespace std;

int main()
{

int opcion;
  string nom;
  char aux;
  FILE *f;

  f = fopen("NOMBRES.txt", "r");
  if(f == NULL)
  {
      cout << "No se ha podido abrir el fichero\n";
      exit(1);
  }

   cout << "La lista es: " << endl;
    while(aux != EOF)
    {

        aux = fgetc(f);
        cout << aux;
    }
Datos as;
    cout << endl;

    cout << "Que deseas hacer?: " << endl;
    cout << "1. Ordenar los nombres" << endl;
    cout << "2. Buscar algun nombre" << endl;
    cin >> opcion;

    switch(opcion)
    {
    case 1:
        {
          as.orden();
            break;
        }
    case 2:
        {
            as.encotrar();

            break;

        }
    }
    return 0;
}
