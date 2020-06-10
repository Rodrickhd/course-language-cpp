/*
 * Copyright (c) 2020 Rodrigo Barros. All rights reserved.
 * Aula de Modificadores de Tipo
 */
 
#include <iostream>

int main()  {

   int a = 0;  // 4 bytes
   short int b = 0; // 2 bytes
   long int c = 0; // 4 bytes

   int a2 = 0;
   signed int b2 = -10;
   unsigned int c2 = -10;

   std::cout << sizeof(a) << " - " << a2 << "\n";
   std::cout << sizeof(a) << " - " << b2 << "\n";
   std::cout << sizeof(c) << " - " << c2 << "\n";

   char caractere = 127;  // não possui erro
   char caractere2 = -127; // não possui erro


}
