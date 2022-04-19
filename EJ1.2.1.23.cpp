/*


 * EJ1.2.1.23.cpp
 *
 *  Created on: 12/04/2022
 *      Author: 895
 *      /

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main(void)

{
   setlocale(LC_CTYPE, "Spanish");
   int MAXIMO=0,Numero,i=1;

      cout << "Ingrese valores enteros positivos: "<<endl;
      cout << "Ingrese n: ";
      while (i<=10)
         {
         cout << "Ingrese n#"<<i<<": ";
         cin>>Numero;
         if (Numero > MAXIMO){
            MAXIMO=Numero;
            }
            i++;
      }
   cout <<endl;
   cout <<"El MAXIMO es: "<<MAXIMO<<endl;

   return 0;
}




*/
