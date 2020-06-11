/*
 * Copyright (c) 2020 Rodrigo Barros. All rights reserved.
 * Simple Calculator
 */
 
#include <iostream>

int main()  {
   
  int num1, num2, soma, sub, multi, div;

  std::cout << "Welcome to the my first Calculator" << "\n" ;
  std::cout << "Enter the first number: " << "\n" ;
  std::cin >> num1 ;
  std::cout << "Enter the second number: " << "\n" ;
  std::cin >> num2;

  soma = num1 + num2 ; // soma
  sub = num1 - num2 ; // sub
  multi = num1 * num2 ; // multi
  div = num1 / num2 ; // div

  std::cout << "The sum is: " << soma << "\n" ;
  std::cout << "The subtraction is: " << sub << "\n" ;
  std::cout << "The product is: " << multi << "\n" ;
  std::cout << "The division is: " << div << "\n" ;


}

