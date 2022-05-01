/*
 * infraccion.hpp
 *
 *  Created on: 01/05/2022
 *      Author: Iván Fortunesky
 *      UTN - FRBA - AyED - K1001
 */
using namespace std;
#include<conio.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "cargarString.hpp"


struct infraccion {

   int tInfr;
   string motivo;
   int valor;
   char gravedad;
};

struct gravedad{
   char gravedad;
   int valor;
   int n;
};

string infraccionGravedadToString(gravedad a){

   string x="";
   x = x +"gravedad: "+a.gravedad+" valor: "+to_string(a.valor)+" N infracciones graves:  "+to_string(a.n);
   return x;
}


void infraccionVaciar(infraccion &a){

   a.tInfr=0;
   a.motivo="";
   a.valor=0;
   a.gravedad=0;

}

string infraccionToString(infraccion a){

   string x="";
   x = x +"tInfr: "+to_string(a.tInfr)+" motivo: "+a.motivo+" valor:  "+to_string(a.valor)+" gravedad: "+a.gravedad;
   return x;
}

infraccion infraccionCargar(void)
{
   infraccion x;
   string aux;
   cout<<"tInfr: ";
   cin>>x.tInfr;
   cout<<endl;
   if (x.tInfr>0 && x.tInfr<5){
         cout<<"motivo: ";
         x.motivo = cargarString();
         cout<<endl;
         cout<<"valor: ";
         cin>>x.valor;
         cout<<endl;
         cout<<"gravedad: ";
         cin>>x.gravedad;
   }
   return x;
}
void infraccionRegistrarGravedad (infraccion a, gravedad &b, gravedad &c,gravedad &d){ // done

   char i = a.gravedad;

   if  (i == 'L'){
       b.gravedad='L';
       b.n++;
       b.valor=b.valor+a.valor;

    }
   else if (i == 'M'){
       c.gravedad='M';
       c.n++;
       c.valor=c.valor+a.valor;

        }
   else if (i == 'G'){
       d.gravedad='G';
       d.n++;
       d.valor=d.valor+a.valor;

        }

    }

bool infraccionValidarMenorValor(infraccion c, infraccion b ){

    if (c.valor <= b.valor) {return true;}
    else {return false;}
}

bool infraccionContarClausura(infraccion c){

    if (c.tInfr >= 3 && c.gravedad == 'G') {return true;}
    else {return false;}
}

void infraccionVaciarGravedad(gravedad &a){
         a.valor=0;
         a.n=0;
         a.gravedad =' ';}






