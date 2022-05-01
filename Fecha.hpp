/*

//============================================================================
// Name        : Demo2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
*/
#include <iostream>
using namespace std;

struct Fecha
{
   int dia;
   int mes;
   int anio;
};

Fecha fecha(int d, int m, int a)
{
   return
   {  d,m,a};
}

string fechaToString(Fecha f)
{
   return to_string(f.dia)+"-"+to_string(f.mes)+"-"+to_string(f.anio);
}

bool fechaEsAnioBisiesto(int anio)
{
   bool esBisiesto = false;
   if( anio%4==0 )
   {
      esBisiesto = true;
   }
   else
   {
      if( anio%400==0&&anio%100!=0 )
      {
         esBisiesto = true;
      }
   }
   return esBisiesto;
}

int fechaDiasDelMes(int mes, int anio)
{
   int dias = 31;
   if( mes==4||mes==6||mes==9||mes==11 )
   {
      dias = 30;
   }
   else
   {
      if( mes==2 ) // es febrero???
      {
         if( fechaEsAnioBisiesto(anio) )
         {
            dias = 29;
         }
         else
         {
            dias = 28;
         }
      }
   }
   return dias;
}

bool fechaValidar(int dia, int mes, int anio)
{
   int maxDias = fechaDiasDelMes(mes,anio);
   bool ret;
   if( (dia>0&&dia<=maxDias)&&(mes>0&&mes<=12)&&(anio>=0) )
   {
      ret = true;
   }
   else
   {
      ret = false;
   }
   return ret;
}

bool fechaValidar(Fecha f)
{
   return fechaValidar(f.dia,f.mes,f.anio);
}


void fechaSetDia(Fecha& f,int d)
{
   f.dia = d;
}

void fechaSetMes(Fecha& f,int m)
{
   f.mes = m;
}

void fechaSetAnio(Fecha& f,int a)
{
   f.anio = a;
}

int fechaGetDia(Fecha f)
{
   return f.dia;
}

int fechaGetMes(Fecha f)
{
   return f.mes;
}

int fechaGetAnio(Fecha f)
{
   return f.anio;
}


Fecha fechaLeerPorConsola()
{
   int d,m,a;
   cin >> d >> m >> a;

   Fecha f = fecha(d,m,a);
   return f;
}


