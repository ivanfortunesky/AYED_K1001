/*
 EJ1.2.1.10.cpp
 *
 *  Created on: 10/04/2022
 *      Author: 895


#include <iostream>
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
   int anio1,dia1,mes1;
   cout << "Ingrese año: " << endl;
   cin >> anio1;
   cout << "Ingrese día: " << endl;
   cin >> dia1;
   cout << "Ingrese mess: " << endl;
   cin >> mes1;

   cout << "La 1er fecha en con formato aaaammdd es " <<anio1*10000+mes1*100+dia1<< endl;
   int fecha1 = anio1*10000+mes1*100+dia1; // Fecha uno
   int anio2,dia2,mes2;
      cout << "Ingrese año: " << endl;
      cin >> anio2;
      cout << "Ingrese día: " << endl;
      cin >> dia2;
      cout << "Ingrese mess: " << endl;
      cin >> mes2;

      cout << "La 2da fecha en con formato aaaammdd es " <<anio2*10000+mes2*100+dia2<< endl;
   int fecha2 =anio2*10000+mes2*100+dia2; // Fecha dos

            int anio_actual,dia_hoy,mes_actual;
            cout << "Ingrese el año actual" << endl;
            cin >> anio_actual;
            cout << "Ingrese día de hoy: " << endl;
            cin >> dia_hoy;
            cout << "Ingrese mes actual: " << endl;
            cin >> mes_actual;


        // hasta acá tengo las tres fechas cargadas

        int Fecha1_en_dias= convertir_a_dias(anio1,mes1,dia1);
        int Fecha2_en_dias= convertir_a_dias(anio2,mes2,dia2);
        int FechaActual_en_dias= convertir_a_dias(anio_actual,mes_actual,dia_hoy);


        int Proximidad1 = Fecha1_en_dias - FechaActual_en_dias;
        int Proximidad2 = Fecha2_en_dias - FechaActual_en_dias;

        if (abs(Proximidad1) < abs(Proximidad2))
        {cout << "fecha más próxima - fecha1: " <<fecha1<< endl;
        }
        else if (abs(Proximidad2) < abs(Proximidad1))
        {cout << "fecha más próxima - fecha2: " <<fecha2<< endl;}
        else{{cout <<fecha1<<" y " <<fecha2<<" Son iguales " << endl;}}

   return 0;

}


*/
