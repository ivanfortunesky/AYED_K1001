/*

 * EJ1.2.1.15.For.cpp
 *
 *  Created on: 23/04/2022
 *      Author: 895


#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main(void)

{
   int a;
   int contador=0;
   cout<<"Ingrese un valor entero: ";
   cin>>a;
   for (int j=1;j<=a;j++)  {
      for (int i=1; i<=j;i++){
         if (j%i==0){contador++;}
         }
      if (contador ==2){cout<< j <<" ";}
      contador=0;}
   //if (contador ==2){cout<< a <<"Es primo ";}
   return false;


   return 0;
}



*/
