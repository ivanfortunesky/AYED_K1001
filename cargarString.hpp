/*

 * cargarString.hpp
 *
 *  Created on: 01/05/2022
 *      Author: Iv�n Fortunesky
 *      UTN - FRBA - AyED - K1001
*/


#include <iostream>

using namespace std;



string cargarString(void){
      string x="";
      cin.sync();
      getline(cin, x);
      cout<<x<<endl;
      return x; }




