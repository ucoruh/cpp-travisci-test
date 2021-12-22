#include <iostream>
#include "complex.h"

int main(){

  Complex a1 = 10*((Complex(1,0)/Complex(1,2))*(Complex(1,3)/Complex(2,-4)));
  Complex a2 = Complex(3,2)*Complex(3,-2)-1+(Complex(3,-7)/21) + 10;
  Complex aa = Complex((double)155/7,(double)29/3);

  std::cout << a1 << std::endl;
  std::cout << a2 << std::endl;
  std::cout << aa << std::endl;

  return 0;
}
