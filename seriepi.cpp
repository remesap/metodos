#include <iostream>
#include <cmath>

double serie (int N);
int main(void){

  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);

  serie (10);
  return 0;
}

double serie (int N)
{
  int n=1;
  double suma=0;
  double pi=0;
  
  for (int ii=1 ; ii<=N ; ++ii){

    suma+= 1/(n*n);
    ++n;
    pi = std::sqrt(6*suma);
    
    std::cout << ii << "  " << suma << "  " << pi << std::endl;

  }
}
