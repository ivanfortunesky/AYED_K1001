/*

 * EJ1.2.1.29.cpp
 *
 *  Created on: 15/04/2022
 *      Author: 895

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;


bool validarMENOR(int a, int b)
      {
         if (a<b){return true;}
   return false;
         }
bool validarMAYOR(int a, int b)
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


int main(void)

{//MENOR
   int valor=0,n=0,contadorNconjunto=0,sumaSubconjunto=0,sumaconjunto=0,MENOR=900000,MAYOR=0,
         Cantidad_subconjuntos=0,GrupoMayor=0,posicionRelativaMayor=0;
   bool aux=true,flag=false;

while (aux==true){
   cout<<"ingrese un valor: ";
   cin>>valor;
   if (valor>0){
      if (validarMENOR(valor,MENOR)){MENOR=valor;}
      if (validarMAYOR(valor,MAYOR)){
               MAYOR=valor;
               GrupoMayor = sumar(Cantidad_subconjuntos,1);
               posicionRelativaMayor = sumar(n,1);
            }
      sumaSubconjunto=sumar(sumaSubconjunto,valor);
      n++;
      flag=false;
   }
   else if (valor==0){
      Cantidad_subconjuntos++;
      cout<<"sumaSubconjunto: "<<sumaSubconjunto<<endl;
      cout<<"Promedio de sus valores.: "<<(double)sumaSubconjunto/(double)n<<endl;
      cout<<"MENOR: "<<MENOR<<endl;
      contadorNconjunto = sumar(contadorNconjunto,n);
      sumaconjunto= sumar(sumaconjunto,sumaSubconjunto);
      sumaSubconjunto=0;
      n=0;
      reset(MENOR);
      cout<<"Luego del reset - MENOR: "<<MENOR<<endl;
      flag=true;
   }
   else if (valor<0 && flag==true){

      cout<<"Cantidad de subconjuntos: "<<Cantidad_subconjuntos<<endl;
      cout<<"Sumatoria de sus valores: "<<sumaconjunto<<endl;
      cout<<"Mayor#"<<MAYOR<<" Grupo#"<<GrupoMayor<<" Posicion#"<<posicionRelativaMayor<<endl;
      aux=false;
   }
   else {cout<<"Ingrese el valor 0 (Cero) primero, luego el negativo"<<endl;}
      } // cierra while aux
   return 0;

}



*/
