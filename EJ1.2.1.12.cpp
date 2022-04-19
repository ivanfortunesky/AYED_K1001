/*

 * EJ1.2.1.12.cpp
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
   int Numero1,Numero2,producto=0;
   cout << "Ingrese Numero1: " << endl;
   cin >> Numero1;
   cout << "Ingrese Numero2: " << endl;
   cin >> Numero2;
   //producto=Numero1;
   if ((Numero1>=0 && Numero2>=0 )|| (Numero1<0 && Numero2<0 )){
      for (int i=0;i<abs(Numero2);i++)
      {
      producto = producto+abs(Numero1);
      }
      cout << "El Producto entre "<<Numero1<<" y "<<Numero2<<" es: "<<producto<< endl;}
   else {
      for (int i=0;i<abs(Numero2);i++)
      {
      producto = producto+abs(Numero1);
      }
      cout << "El Producto entre "<<Numero1<<" y "<<Numero2<<" es: "<<producto*-1<< endl;}

   return 0;
}


*/
