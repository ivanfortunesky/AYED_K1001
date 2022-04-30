/*

 * EJ1.2.1.14.cpp
 *
 *  Created on: 11/04/2022
 *      Author: 895


 * EJ1.2.1.15.cpp
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
   int Numero=0,n,aux=1,i=1;
   cout << "Ingrese un Numero: " << endl;
   cin >> n;
   Numero=n;
   if (Numero>0){
      cout <<"Lista de Primos: ";

      do {

         //for (int i=1;i<=Numero;i++)
        // imprimir primo(posicion)
         if (validarPrimo(i)){cout<<i<<" ";
                 aux++;
               }
      i++;
      }
      while (aux<=n);
      //while (aux=1,aux<=n,aux++);
         //cout<<validarPrimo(Numero)<<" ";
         //cout<<generadorPrimos(aux);

      }

   else {cout <<"Ingrese un valor mayor a cero (Naturales) "<<endl;}
   return 0;
}











*/
