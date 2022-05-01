/*

 * EJ1.2.2.2.contenedores.import.cpp
 *
 *  Created on: 01/05/2022
 *      Author: Iván Fortunesky
 *      UTN - FRBA - AyED - K1001


#include <iostream>
#include <string>
#include <locale.h>
#include "contenedor.hpp"
//#include "puerto.hpp"

using namespace std;

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




return 0;}


*/
