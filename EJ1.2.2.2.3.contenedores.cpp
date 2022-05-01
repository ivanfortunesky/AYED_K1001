/*

 * EJ1.2.2.2.contenedores.cpp
 *
 *  Created on: 30/04/2022
 *      Author: Iván Fortunesky
 *      UTN - FRBA - AyED - K1001
*/


/*#include <iostream>
#include <string>
#include <locale.h>
//#include "contenedor.hpp"

using namespace std;


int cargarSueldo(void)
{
   int a;
   cout<<" Ingresar Valor: :"<<endl;
   cin>>a;
   return a;
}

struct contenedor{ // done
    int idCont;
    long int peso;
    int idPuerto;};


contenedor contenedorCargar(void)  // done
{
   contenedor x;
   cout<<"idCont: ";
   cin>>x.idCont;
   cout<<endl;
   cout<<"Peso: ";
   cin>>x.peso;
   cout<<endl;
   cout<<"idPuerto: ";
   cin>>x.idPuerto;

   return x;
}

bool contenedorValidarMaximoPeso(contenedor c, contenedor b ){ // done

    if (c.peso >= b.peso) {return true;}
    else {return false;}
}

string contenedorToString(){  //done

   string x="";


   return x;
}

void contenedorVaciar(contenedor &a){ // done

   a.peso =0;
   a.idCont =0;
   a.idPuerto =0;

}

struct puerto {
   int idPuerto;
   int peso;
   int n;
};

void contenedorRegistrarPuerto (contenedor a, puerto &b, puerto &c,puerto &d){ // done

   int i = a.idPuerto;

   if  (i == 1){
       b.idPuerto=1;
       b.n++;
       b.peso=b.peso+a.peso;

    }
   else if (i == 2){
       c.idPuerto=2;
       c.n++;
       c.peso=c.peso+a.peso;

        }
   else if (i == 3){
       d.idPuerto=3;
       d.n++;
       d.peso=d.peso+a.peso;

        }

    }


void puertoVaciar(puerto &a){

   a.idPuerto=0;
   a.peso=0;
   a.n=0;

}

string puertoToStringImprimir(puerto a){

   string x="";
   x = x +"idPuerto: "+to_string(a.idPuerto)+" Peso en puerto: "+to_string(a.peso)+" N Contenedores:  "+to_string(a.n);
   return x;
}



double pesoTotal =0;
int pesoMaximo=0;

contenedor contenerdorCargadoUltimo, contenedorMaximo;
puerto puerto1, puerto2, puerto3;

int main(void)
{
   int contador=0;
   contenedorVaciar(contenedorMaximo);
   puertoVaciar(puerto1);
   puertoVaciar(puerto2);
   puertoVaciar(puerto3);

   do{
         contenerdorCargadoUltimo = contenedorCargar();
         pesoTotal = pesoTotal + contenerdorCargadoUltimo.peso;
         if (contenedorValidarMaximoPeso(contenerdorCargadoUltimo,contenedorMaximo)){contenedorMaximo = contenerdorCargadoUltimo;}
         contenedorRegistrarPuerto(contenerdorCargadoUltimo,puerto1,puerto2,puerto3);
         contador ++;
         }
   while (contador<10); // Se puede ampliar a 100 contenedores

cout<<endl;
cout<<"pesoTotal: "<<pesoTotal<<endl;
cout<<"to_string(contenedorMaximo.idCont): "<<to_string(contenedorMaximo.idCont)<<endl;
cout<<"to_string(contenedorMaximo.peso): "<<to_string(contenedorMaximo.peso)<<endl;
cout<<endl;
cout<<"Imprimir Puerto #1: "<<puertoToStringImprimir(puerto1)<<endl;
cout<<"Imprimir Puerto #2: "<<puertoToStringImprimir(puerto2)<<endl;
cout<<"Imprimir Puerto #3: "<<puertoToStringImprimir(puerto3)<<endl;




return 0;}*/


