/*

 * EJ1.2.1.13.cpp
 *
 *  Created on: 11/04/2022
 *      Author: 895

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main(void)

{
   setlocale(LC_CTYPE, "Spanish");
   int Numero,factorial=1;
   cout << "Ingrese el Numero: " << endl;
   cin >> Numero;
   if (Numero>0){
      for (int i=1;i<=Numero;i++)
         {factorial = i*factorial;}
   cout << "El factorial de "<<Numero<<" es: "<<factorial<< endl;
   }
   else {cout << "NO existe el factorial de: (Negativo) "<<Numero<< endl;}
   return 0;
}



*/
