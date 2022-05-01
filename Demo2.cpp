/*
//============================================================================
// Name        : Demo2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Fecha.hpp"
using namespace std;

int main()
{
   Fecha f = fechaLeerPorConsola();
   cout << fechaToString(f) << endl;

   if( fechaValidar(f) )
   {
      cout << "Tu fecha es correcta" << endl;
   }
   else
   {
      cout << "Tu fecha es incorrecta" << endl;
   }


   return 0;
}
*/
