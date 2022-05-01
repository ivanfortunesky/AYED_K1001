/*

 * EJ1.2.2.4.fabricaPintura.cpp
 *
 *  Created on: 01/05/2022
 *      Author: Iván Fortunesky
 *      UTN - FRBA - AyED - K1001
*/

#include <iostream>
#include <string>
#include "infraccion.hpp"

using namespace std;
int main(void){
   setlocale(LC_CTYPE, "Spanish");
   infraccion data, MENOR;
   gravedad gravedadL, gravedadM, gravedadG;
   bool clausurar = false;
   int aux=0;

   infraccionVaciarGravedad(gravedadL);
   infraccionVaciarGravedad(gravedadM);
   infraccionVaciarGravedad(gravedadG);
   infraccionVaciar(MENOR);

do
{
   data = infraccionCargar();
   if(data.tInfr>0 && data.tInfr<5){
      if (MENOR.tInfr==0){MENOR = data;}
      if (infraccionValidarMenorValor(data,MENOR)){MENOR=data;};

      infraccionRegistrarGravedad(data,gravedadL,gravedadM,gravedadG);
      if (infraccionContarClausura(data)) {aux++; if(aux >3) {clausurar=true;};}
   }

}
while (data.tInfr>0);

cout<<"Imprimir gravedadL: "<<infraccionGravedadToString(gravedadL)<<endl;
cout<<"Imprimir gravedadM: "<<infraccionGravedadToString(gravedadM)<<endl;
cout<<"Imprimir gravedadG: "<<infraccionGravedadToString(gravedadG)<<endl;


if (clausurar == true){cout<<("*********“Clausurar Fábrica*********"
      ""
      ""
      ""
      ""
      "")<<endl;}

cout<<"Infracción Menor valor: "<<infraccionToString(MENOR)<<endl;

return 0;
}

