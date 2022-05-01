/*

 * contenedor.hpp
 *
 *  Created on: 01/05/2022
 *      Author: Iván Fortunesky
 *      UTN - FRBA - AyED - K1001
*/
#include <iostream>
#include "puerto.hpp"

using namespace std;

struct contenedor{
    int idCont;
    long int peso;
    int idPuerto;};

contenedor contenedorCargar(void)
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

bool contenedorValidarMaximoPeso(contenedor c, contenedor b ){

    if (c.peso >= b.peso) {return true;}
    else {return false;}
}
string contenedorToString(){

   string x="";


   return x;
}
void contenedorVaciar(contenedor &a){

   a.peso =0;
   a.idCont =0;
   a.idPuerto =0;

}



