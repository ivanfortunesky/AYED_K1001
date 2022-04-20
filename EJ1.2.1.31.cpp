/*

 * EJ1.2.1.31.cpp
 *
 *  Created on: 19/04/2022
 *      Author: 895

*/

#include <iostream>
#include<conio.h>
#include <string.h>
#include<string>
#include <locale.h>
using namespace std;


bool validarMENOR(int a, int b)
      {
         if (a<b){return true;}
   return false;
         }
bool validarMAXIMA(int a, int b)
      {
         if (a>b){return true;}
   return false;
         }
int sumar(int a,int b){
   int suma =0;
   suma=a+b;
   return suma;
}
void reset(int &a){
   a=999999999;
}

bool validarPalabra(int a, int b){
   if (a>b)
      {return true;}
   return false;
}

void logearSeguidilla(int a, int b){

//int seguidilla[b]=a;

}


int main(void)

{
 // int longuitud;
  // char question1[] = "What is your name? ";
  //string question2 = "Where do you live? ";
  char palabra [100];
  //cin >> palabra;
  cin.getline(palabra,100,'.');
  cout <<endl;
  cout <<"Cadenas obtenida:  ";
  cout <<palabra;
  //cout << " from " << answer2 << "!\n";
  return 0;
}







