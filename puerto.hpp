/*
 * puerto.hpp
 *
 *  Created on: 01/05/2022
 *      Author: Iván Fortunesky
 *      UTN - FRBA - AyED - K1001
 */
#include <iostream>

using namespace std;

struct puerto {
   int idPuerto;
   int peso;
   int n;
};
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


