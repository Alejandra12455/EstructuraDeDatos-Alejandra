#ifndef DATOS_H
#define DATOS_H
#include <istream>
#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
using namespace std;
class Datos
{
public:
    Datos();
     char  mat [20][20];
     string nom2[20];
     char  aux[20];
     string bu;
     int acomodo;
     int comp2;
     int i,j;
     bool r=true;
  void orden(){

            ifstream nombres ("NOMBRES.txt");

            for (i=0;i<20;i++)
            {
             nombres>>mat[i];
            }
                for (i=0;i<20;++i)
                {
                 for ( j=0;j<20;++j)
                 {
                    acomodo=strcmp(mat[j],mat[j+1]);
                            if (acomodo>0)
                            {
                                strcpy(aux,mat[j]);
                                strcpy(mat[j],mat[j+1]);
                                strcpy(mat[j+1],aux);
                            }
                 }
                }

                    for (  i=0;i<20;++i)

                    {cout <<mat[i]<<endl;}

cout<<endl;
         }

void encotrar(){

ifstream nombres("Nombres.txt");
    for (i=0;i<20;i++)
        {
             nombres>>nom2[i];
        }
          cout <<"Introduce el nombre que desea buscar \n";
          cin>>bu;

      for (i=0;i<20;i++)
        {
        if (bu==nom2[i])
           {
           cout<< "\n Si se encontro el nombre "<<bu<<" en la lista"<<endl;
           r=false;

           }
        }
     if (r){
        cout << "\n El nombre No exite en la lista\n"<<endl;
     }
}
    protected:

    private:
};

#endif // DATOS_H

