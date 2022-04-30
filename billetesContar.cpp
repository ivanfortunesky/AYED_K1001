/*
 * billetesContar.cpp
 *
 *  Created on: 30/04/2022
 *      Author: 895
 */
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;


int cargarSueldo(void)
{
   int a;
   cout<<" Ingresar Valor: :"<<endl;
   cin>>a;
   return a;
}

struct sueldo{
    int billetes100;
    int billetes50;
    int billetes20;
    int billetes10;
    int billetes5;
    int billetes2;
    int billetes1;};

sueldo billetesContar (int a){

   sueldo x;
   x.billetes100=a/100;
   int aux = a%100;
   x.billetes50=(aux)/50;
       aux = aux%50;
   x.billetes20=(aux)/20;
       aux = aux%20;
   x.billetes10=(aux)/10;
       aux = aux%10;
   x.billetes5 =(aux)/5;
       aux = aux%5;
   x.billetes2= (aux)/2;
       aux = aux%2;
   x.billetes1= aux;
   return x;
}

string sueldoToString(sueldo s)
{
   string cadena="";
   cadena=cadena+to_string(s.billetes100);
   cadena=cadena+" "+to_string(s.billetes50);
   cadena=cadena+" "+to_string(s.billetes20);
   cadena=cadena+" "+to_string(s.billetes10);
   cadena=cadena+" "+to_string(s.billetes5);
   cadena=cadena+" "+to_string(s.billetes2);
   cadena=cadena+" "+to_string(s.billetes1);
   return cadena;
}



int sueldoMontoTotal =0;int sueldoMonto =0;
int main(void)
{
   do{
         sueldoMonto = cargarSueldo();
         sueldoMontoTotal = sueldoMontoTotal + sueldoMonto ;}
   while (sueldoMonto>0);

   sueldo sueldoContado = billetesContar(sueldoMontoTotal);
cout<<"sueldoMontoTotal: "<<sueldoMontoTotal<<endl;
cout<<"sueldoToString(sueldoContado): ";
cout<<sueldoToString(sueldoContado)<<endl;


/*cout<<"sueldo sueldoContado.billetes100 "<<sueldoContado.billetes100<<endl;
cout<<"sueldo sueldoContado.billetes50 "<<sueldoContado.billetes50<<endl;
cout<<"sueldo sueldoContado.billetes20 "<<sueldoContado.billetes20<<endl;
cout<<"sueldo sueldoContado.billetes10 "<<sueldoContado.billetes10<<endl;
cout<<"sueldo sueldoContado.billetes5 "<<sueldoContado.billetes5<<endl;
cout<<"sueldo sueldoContado.billetes2 "<<sueldoContado.billetes2<<endl;
cout<<"sueldo sueldoContado.billetes1 "<<sueldoContado.billetes1<<endl;*/

return 0;}



