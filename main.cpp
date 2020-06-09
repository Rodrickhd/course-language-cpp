/* Aula de Manipulação de dados */
#include <iostream>

//using namespace std;

int main() {
  /* ler valor e atribui a num1 */
  std::cout << "Informe um número: \n";
  int num1 = 0;
  std::cin >> num1;

  /* ler valor e atribui a num2 */
  std::cout << "informe outro numero:  \n";
  int num2 = 0;
  std::cin >> num2;
  
  /* Exibir valores na tela */
  std::cout << "Os números digitados foram:  " << num1 << " e "  << num2;

  return 0;
}