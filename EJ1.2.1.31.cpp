/*


 * EJ1.2.1.31.cpp
 *
 *  Created on: 19/04/2022
 *      Author: 895



#include <iostream>
#include<conio.h>
#include <string.h>
#include<string>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{


 char cad[200], *p=cad; //el puntero p comienza desde el principio de cad
 printf("Teclea una frase: "); gets(cad);
 while (*p!=0) //mientras p no alcance el character \0 de final de cadena
 { if (p==cad || (*p!=' ' && *(p-1)==' ')) //condicion de primera letra de una palabra
 if (*p>='a' && *p<='z') //si es una letra minúscula
 *p = *p - ('a'-'A'); //también podría ser: *p -= 'a'-'A';
 p++; //p pasa a apuntar a la siguiente letra
 }
 printf("\nLa frase corregida es: %s", cad);

    return 0;
}







*/
