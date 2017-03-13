#include <iostream>

int main (void){

  int n=1, suma=0;

  while (n<=500){

    suma+=n*n;
    std::cout << n << "  " << suma << std::endl;
    ++n;
  }

  return 0;
}
