/*




 * EJ1.2.1.15.bis.cpp
 *
 *  Created on: 20/04/2022
 *      Author: 895


#include <iostream>
#include <string>
#include <locale.h>
using namespace std;



bool validarPrimo(int a){

   int contador=0;
   for (int j=1;j<=a;j++)  {
         if (a%j==0){contador++;}
         }
   if (contador ==2){return true;}
   return false;

}

int main(void)

{
   setlocale(LC_CTYPE, "Spanish");

   cout << "Ingrese un Numero: " << endl;
   int n;
   cin >> n;
   int actual=1;
   while (actual<=n){
      int i=1;
      int conDivisores =0;
      while (i<=actual){
         if (actual%i==0){conDivisores++;}
         i++;
            }
      if (conDivisores==2){cout<<actual<<" ";}
      else {n++;}
      actual++;
   }
   return 0;
}





*/
