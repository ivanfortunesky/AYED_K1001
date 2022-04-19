/*
 * EJ1.2.1.27.cpp
 *
 *  Created on: 13/04/2022
 *      Author: 895
 */
/*#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int dias_de_los_meses(int mes_anterior){

   switch (mes_anterior){
   case 1:
      return 31;
      break;
   case 2:
      return 28+31; //59
      break;
   case 3:
      return 31+59; //90
      break;
   case 4:
      return 30+90; //120
      break;
   case 5:
      return 31+120; //151
      break;
   case 6:
      return 30+151; //181
      break;
   case 7:
      return 31+181; //212
      break;
   case 8:
      return 31+212; // 243
      break;
   case 9:
      return 30+243; //273
      break;
   case 10:
      return 31+273; //304
      break;
   case 11:
      return 30+304; // 334
      break;
   default:
      return 0;
   }
}

int convertir_a_dias(int a,int m,int d){

      int anio_en_dias=(a-1)*365 +(a-1)/4;
      int meses_a_dias = dias_de_los_meses(m-1);
      if (m>2){
               if((a%4==0 and a%100!=0) or a%400==0){
                  meses_a_dias=meses_a_dias+1;
                     }
               }
   return anio_en_dias+meses_a_dias+d;
}

int main(void)

{
   setlocale(LC_CTYPE, "Spanish");
   string nombre,nombre_menor,nombre_mayor;
   int anio,dia,mes,anio_mayor,anio_menor,dia_mayor,dia_menor,mes_mayor,mes_menor,Numero=1;

      cout << "Ingrese nombre y fecha de nacimiento, la carga finaliza con 0 "<<endl;
      while (Numero != 0)
         {
         cout << "Ingrese nombre de la persona: ";
         cin>>nombre;
         cout << "Ingrese anio nacimiento: ";
         cin>>anio;
         cout << "Ingrese mes nacimiento: ";
         cin>>mes;
         cout << "Ingrese dia nacimiento: ";
         cin>>dia;


         if (Numero==1){
            nombre_menor=nombre;
            nombre_mayor=nombre;
            anio_menor=anio;
            anio_mayor=anio;
            mes_menor=mes;
            mes_mayor=mes;
            dia_menor=dia;
            dia_mayor=dia;
            Numero=2;
             } // cierra if

            cout <<endl;

            if (convertir_a_dias(anio,mes,dia)<convertir_a_dias(anio_mayor,mes_mayor,dia_mayor))
               {
               anio_mayor=anio;
               mes_mayor=mes;
               dia_mayor=dia;
               nombre_mayor=nombre;
               }
            else if (convertir_a_dias(anio,mes,dia)>convertir_a_dias(anio_menor,mes_menor,dia_menor))
                {
                  anio_menor=anio;
                  mes_menor=mes;
                  dia_menor=dia;
                  nombre_menor=nombre;

                 }

            cout <<"Para terminar la carga, ingrese 0 ó 2 para continuar cargando a otra persona ";
            cin>>Numero;
            cout <<convertir_a_dias(anio,mes,dia)<<endl;
      } // cierra while
   cout <<endl;
   cout <<"La persona MENOR se llama: "<<nombre_menor<<endl;
   cout <<"La persona MAYOR se llama: "<<nombre_mayor<<endl;

   return 0;
}*/




