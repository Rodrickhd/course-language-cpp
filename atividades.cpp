/*
 * Atividades by Jotelly Barros
 * Copyright by Rodrigo Barros
 * 1 - Escreva uma função que peça dois números inteiros ao usuário e exibe o valor soma seguido pelo maior deles.
*/

#include <iostream>

int main() {

  int num1, num2, result, maior_valor;
  
  std::cout << "\nDigite um numero  ";
  std::cin >> num1;

  std::cout << "\nDigite outro numero ";
  std::cin >> num2;

  //result = num1 + num2;

  std::cout << "\nA soma dos numeros listados é: ";
  std::cout << num1 + num2;

  if(num1 > num2) maior_valor = num1;
  else if (num1 < num2) maior_valor = num2;
  else std::cout << "\nValores iguais ";
  
  std::cout << "\nO maior numero é: ";
  std::cout << maior_valor;
}