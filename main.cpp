/*
 * Copyright (c) 2020 Rodrigo Barros. All rights reserved.
 * Tomada de decisão 3 (Exemplo com médias de notas de semestre)
 */
 
#include <iostream>

int main()  {
 
 double nota1, nota2, nota3, nota4;
 std::cout <<"Digite sua primeira nota do semestre >>> ";
 std::cin >> nota1 ;
 std::cout << "Digite sua segunda nota do semestre >>> ";
 std::cin >> nota2;
 std::cout << "Digite sua terceira nota do semestre >>> ";
 std::cin >> nota3;
 std::cout << "Digite sua quarta nota do semestre >>> ";
 std::cin >> nota4;

 double soma = nota1 + nota2 + nota3 + nota4;
 soma = (soma / 4);

 std::cout << "A sua media no semestre foi: " << soma << "\n" ;

 
 if (soma >= 6) {
  std::cout <<"Parabens! Voce foi aprovado!" << "\n" ;
  }else{
  std::cout << "Vish, Infelizmente voce foi reprovado!" << "\n";
}








}
  


