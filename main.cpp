/*
 * Copyright (c) 2020 Rodrigo Barros. All rights reserved.
 * Aula de Operadores Aritméticos
 */
 
#include <iostream>

int main()  {
   
   //            x = 3      y = 9
   // + (adiciona 2 operandos)             ex: x + y = 12
   // - (Subtração entre os operados)      ex: x - y = -6
   // * (Multiplicação entre os operados)  ex: x * y = 27
   // / (Divisão entre os operados)        ex: x / y = 3

  int x, y;
  x = 3;
  y = 9;

  std::cout << "O valor de x e y é: " << x << " e " << y << "\n" ;

  std::cout << "A soma entre x e y é: "  << x + y << "\n" ;
  std::cout << "A subtração entre x e y é: "  << x - y << "\n" ;
  std::cout << "A Multiplicação entre x e y é: " << x * y << "\n" ;
  std::cout << "A Divisão	 entre x e y é: " << y / x << "\n" ;

double d = y / (x+1.0) ;
std::cout << "A Divisão entre x e y é: " << d << "\n" ;


}

