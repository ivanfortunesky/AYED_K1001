/*
 * EJ1.2.1.20.cpp
 *
 *  Created on: 12/04/2022
 *      Author: 895
 */
/*#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main(void)

{
   setlocale(LC_CTYPE, "Spanish");
   int Numero, Positivos=0,Negativos=0,Pares=0,CantidadNegativos=0,CantidadPositivos=0,sumaPositivos=0;
   double n=0;
   cout << "Ingrese valores numéricos enteros (El cero corta la secuencia): "<<endl;
   while (Numero!=0)
      {
      cout << "Numero: ";
      cin >> Numero;
      cout <<endl;
      if (Numero>0){Positivos++;
            if(Numero%2==0){Pares++;}
            CantidadPositivos++;
            sumaPositivos = sumaPositivos+Numero;
            n++;
      }
      else if (Numero<0){Negativos++;
            if(Numero%2==0){Pares++;}
            CantidadNegativos++;
            n++;
      }

      }

   cout <<"Cantidad de Positivos: "<<Positivos<<endl;
   cout <<"Cantidad de Negativos "<<Negativos<<endl;
   cout <<"Porcentaje de pares: "<<(Pares*100)/n<<"%"<<endl;
   cout <<"Promedio de los Positivos: "<<sumaPositivos/CantidadPositivos<<endl;
   cout <<"Porcentaje de Negativos: "<<(CantidadNegativos*100)/n<<"%"<<endl;

   Numero =0;
   Positivos=0;
   Negativos=0;
   Pares=0;
   CantidadNegativos=0;
   CantidadPositivos=0;
   sumaPositivos=0;
   n=0;
   return 0;
}*/



