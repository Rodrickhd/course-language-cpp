/*
 * Copyright (c) 2020 Rodrigo Barros. All rights reserved.
 * Divison module
 */
 
#include <iostream>

int main()  {
   
 int a = 5 / 2 ;
 int num1, num2 ;
 num1 = 10;
 num2 = 3;

 int div = num1 / num2 ;
 int resto = num1 % num2 ;   // % (rest of division)

 std::cout << "The division of num1 by num2 is: " << div << "\n";
 std::cout << "The division of num1 by num2 has rest of: " << resto << "\n" ;

 std::cout << "The module between 3 and 2 is: " << 3 % 2 << "\n";
 std::cout << "The module between 4 and 2 is: " << 4 % 2 << "\n";
 std::cout << "The module between 5 and 2 is: " << 5 % 2 << "\n";
 std::cout << "The module between 6 and 2 is: " << 6 % 2 << "\n";

 std::cout << 10 % 2 << "\n";
 std::cout << 9 % 2 << "\n";
}

