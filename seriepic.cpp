#include <iostream>
#include <cmath>

double seriepi (int N);
int main (void){
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);

  return seriepi(20);
  return 0;
}

double seriepi (int N)
{
  double suma = 0;
  int n = 1;
  double pi = 0;

  for (int ii=1; ii<=N ; ++ii){

    suma += 1.0/(n*n);
    pi = std::sqrt(6*suma);
    ++n;
    std::cout << ii << "  " << suma << "  " << pi << std::endl;
  }
}

