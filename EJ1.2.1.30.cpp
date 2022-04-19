/*
 * EJ1.2.1.30.cpp
 *
 *  Created on: 17/04/2022
 *      Author: 895
 */

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;


bool validarMENOR(int a, int b)
      {
         if (a<b){return true;}
   return false;
         }
bool validarMAXIMA(int a, int b)
      {
         if (a>b){return true;}
   return false;
         }
int sumar(int a,int b){
   int suma =0;
   suma=a+b;
   return suma;
}
void reset(int &a){
   a=999999999;
}

bool validarSeguidilla(int a, int b){
   if (a>b)
      {return true;}
   return false;
}

void logearSeguidilla(int a, int b){

//int seguidilla[b]=a;

}


int main(void)

{//MENOR
   int valor=0,n=0,contadorN=1,grupo_MAXIMA=0,MAXIMA=0,grupo=1,
         Cantidad_de_seguidillas=0,valor_Anterior=0,indice=0;
   int seguidilla[128];
   bool aux=true;

while (aux==true){
   cout<<"ingrese un valor numerico entero: ";
   cin>>valor;
   if (n==0){valor_Anterior=valor;
            //seguidilla[n]=valor;
   }

   if (valor!=0){
      if (validarSeguidilla(valor,valor_Anterior)){
         contadorN++;

         if (validarMAXIMA(contadorN,MAXIMA)){MAXIMA=contadorN;
                                             grupo_MAXIMA = sumar(Cantidad_de_seguidillas,1);}

         //logearSeguidilla(valor,n);
         seguidilla[indice]=valor;
         if (contadorN==2){seguidilla[indice]=valor_Anterior;
                           indice++;
                           seguidilla[indice]=valor;}
         //if(n==1){seguidilla[indice]=valor_Anterior;}
         indice++;
         n++;

      }
      else {//cout<<seguidilla<<" "<<endl;
            if (contadorN>=2){Cantidad_de_seguidillas++;}
            //if (contadorN==1){seguidilla[indice]=valor;indice++;}
            n=1;
            contadorN=1;
            }

      } // cierra valor!=0
   else if (valor==0){
      if (contadorN>1){Cantidad_de_seguidillas++;}
      cout<<endl;
      cout<<"Cantidad de seguidillas: "<<Cantidad_de_seguidillas<<endl;
      cout<<"seguidilla MAXIMA: "<<MAXIMA<<" en Grupo# "<<grupo_MAXIMA<<endl;
      cout<<endl;
      for (int i=0;i<indice;i++){
         if (i==0){grupo = 1;cout<<"Seguidilla #"<<grupo<<": ";}
         if (i>0 && seguidilla[i]<=seguidilla[i-1]){cout<<endl;
                                                   grupo++;
                                                   cout<<"Seguidilla #"<<grupo<<": ";
                                                   }
         //else {grupo++; cout<<"Seguidilla #"<<grupo<<": ";}
         cout<<" "<<seguidilla[i];

      }
      contadorN=0;
      aux=false;

         }
   //cout<<valor;
      valor_Anterior=valor;
      } // cierra while aux
   return 0;

}


