/*
 * Copyright (c) 2020 Rodrigo Barros. All rights reserved.
 * Calculator
 */
 
#include <iostream>

int main()  {
   
  float num1, num2, resultado;
  char op;
  
  std::cout << "Digite o primeiro numero" << "\n";
  std::cin >> num1;

  std::cout << "Digite uma das operações [+, -, /, * " << "\n";
  std::cin >> op;

  std::cout << "Digite o segundo numero:" << "\n";
  std::cin >> num2;

  if(op == '+') resultado = num1 + num2 ;

  else if(op == '-') resultado = num1 - num2;

  else if(op == '/') resultado = num1 / num2;

  else if(op == '*') resultado = num1 * num2;

  std::cout << num1 << op << num2 << " = " << resultado << "\n";

  
  


}

