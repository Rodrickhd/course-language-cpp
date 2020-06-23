/*
 * Copyright (c) 2020 Rodrigo Barros. All rights reserved.
 * Tomada de decisão 3 (Exemplo com médias de notas de semestre)
 */
 
#include <iostream>

int main()  {
 
std::cout << "Digite um numero no intervalo de 45 até 72" << "\n";
int i = 0;
std::cin >> i;

if(i >= 45 && i <= 72) {
std::cout << "Obrigado por informar o numero " << " no intervalo solicitado" << "\n" ;

 if(i == 45 || i == 72)
 std::cout << "O valor de i é igual ao valor de algum extremo" << "\n";

}else
  std::cout << "O numero digitado não está no intervalo solicitado" << "\n";


}
  


