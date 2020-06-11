/*
 * Copyright (c) 2020 Rodrigo Barros. All rights reserved.
 * Calculator
 */
 
#include <iostream>

int main()  {
   
  float num1, num2, soma, sub, div, multi;

  /* Value entry */
  std::cout << "Enter the first number: \n";
  std::cin >> num1;
  std::cout << "Enter the second number: \n";
  std::cin >> num2;

  /* Value Calculation */
  soma = num1 + num2;
  div = num1 / num2;
  multi = num1 * num2;
  sub = num1 - num2;
  
  /* Value exhibition  */
  std::cout << num1 << " + " << num2 << " = " << soma << "\n" ;
  std::cout << num1 << " - " << num2 << " = " << sub << "\n" ;
  std::cout << num1 << " / " << num2 << " = " << div << "\n" ;
  std::cout << num1 << " * " << num2 << " = " << multi << "\n" ;
  
}

