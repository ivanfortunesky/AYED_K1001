/*
 * 1.2.2.1.cpp
 *
 *  Created on: 28/04/2022
 *      Author: 895
 */

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;



int main(void)
{
   int sueldo;
   cout<<"Ingrese el sueldo: ";
   cin >>sueldo;
int billetes100=sueldo/100;
int aux = sueldo%100;
int billetes50=(aux)/50;
    aux = aux%50;
int billetes20=(aux)/20;
    aux = aux%20;
int billetes10=(aux)/10;
    aux = aux%10;
int billetes5 =(aux)/5;
    aux = aux%5;
int billetes2= (aux)/2;
    aux = aux%2;
int billetes1= aux;

cout<<"billetes $100: "<<billetes100<<endl;
cout<<"billetes $50: " <<billetes50<<endl;
cout<<"billetes $20: " <<billetes20<<endl;
cout<<"billetes $10: " <<billetes10<<endl;
cout<<"billetes $5: "  <<billetes5<<endl;
cout<<"billetes $2: "  <<billetes2<<endl;
cout<<"billetes $1: "  <<billetes1<<endl;

return 0;
}


