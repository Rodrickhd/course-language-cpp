/*
 * Copyright (c) 2020 Rodrigo Barros. All rights reserved.
 * Relational operators
 */
 
#include <iostream>

/*
*
* Logic           (bool)
* Caracter        (char)
* Inteiro         (int)
* Floating point  (float)
* Floating point  (double)
* no value        (void)
* Long texts      (wchar_t)
*/

int main()  {
   
 bool b = true;
 bool b2 = (1 == 1);

 std::cout << "The value in 'b' is equal to: " << b << "\n" ;
 std::cout << "The value in 'b2' is equal to: " << b2 << "\n" ;

 // True representa o valor 1
 // False representa o valor 0

 bool c = 0;
 bool c2 = 1;

 std::cout << "The value is: " << (c2 == true) << "\n" ;
}

