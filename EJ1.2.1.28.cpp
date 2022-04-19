/*

 * EJ1.2.1.28.cpp
 *
 *  Created on: 15/04/2022
 *      Author: 895

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;


int main(void)

{
   setlocale(LC_CTYPE, "Spanish");
   string nombre,nombre_menor,nombre_mayor;
   int n,m,aux=1,continuar=1,suma_grupo=0,suma_lote_completo=0,contador_m=0,
         contador_lote_completo=0,MAXIMO=-50000000,Positivos=0,MINIMO=50000000,Negativos=0;

   double promedio_grupo,promedio_lote,Porcentaje_positivos,Porcentaje_negativos;

      cout << "Ingrese conjuntos de m valores numéricos "<<endl;
      if (aux==1){
         n=1;} // cierra if n
      while (aux!=0)
      {
         while (continuar != 0)
         {
         cout <<"Grupo #"<<n<<" - Ingrese un valor m: ";
         cin>>m;
         if (m>MAXIMO){MAXIMO=m;}
         if (m<MINIMO){MINIMO=m;}
         if (m>=0){Positivos++;}
         if (m<0){Negativos++;}
         cout <<endl;
         cout <<"Desea cargar otro valor?, ingrese 2 para continuar o 0 para terminar la carga ";
         cin>>continuar;
         suma_grupo = suma_grupo+m;
         contador_m++;
         } // cierra while carga de m
         continuar=1;
         promedio_grupo=(double)suma_grupo/contador_m;
         contador_lote_completo=contador_lote_completo+contador_m;
         Porcentaje_positivos=(Positivos*100)/(double)contador_m;
         cout<<"El valor promedio del grupo #"<<n<<" es: "<<promedio_grupo<<endl;
         cout<<"El máximo valor del grupo #"<<n<<" es: "<<MAXIMO<<endl;
         cout<<" Porcentaje de valores positivos del grupo#"<<n<<": "<<Porcentaje_positivos<<endl;

         suma_lote_completo=suma_lote_completo+suma_grupo;

         cout <<"Desea cargar otro grupo?, ingrese 2 para continuar o 0 para terminar la carga ";
         cin>>aux;

         contador_m=0;
         suma_grupo=0;
         Positivos=0;
         if(aux!=0){n++;} // contador de grupos n

      } // cierra while aux
      promedio_lote= (double)suma_lote_completo/contador_lote_completo;

   cout <<endl;
   Porcentaje_negativos=(Negativos*100)/(double)contador_lote_completo;

   cout <<"Valor promedio del lote: "<<promedio_lote<<endl;
   cout <<"Porcentaje de valores negativos del lote: "<<Porcentaje_negativos<<endl;
   cout <<"Valor mínimo del lote: "<<MINIMO<<endl; // falta

   return 0;
}



*/
