/*
 * Copyright (c) 2020 Rodrigo Barros. All rights reserved.
 * Operador de incremento e Decremento (Aula 28)
 */
 
 // Operador de Incremento = ++    (x++;)
 // Operador de Decremento = --    (x=x-1;)
#include <iostream>

int main()  {

  //int i = 0;
  //i--;
  //std::cout << i << "\n";


  //Pré Incremento  =  ++x;
  //Pós Incremento  =  x++;


  int i = 0, i2 = 0;
  std::cout << "Pré " << ++i << "\n";  //pré-incrementar
  std::cout << "Pós " << i2++ << "\n"; //pos-incrementar
  std::cout << "Pós " << i2 << "\n";
  
  std::cout << "\n";

  std::cout << "Operador de decremento " << "\n";
 
  i = 0; 
  i2 = 0;
  std::cout << "Pré " << --i << "\n";   //pré-decrementar
  std::cout << "Pós " << i2-- << "\n"; //pos-decrementar
  std::cout << "Pós " << i2 << "\n";   

}