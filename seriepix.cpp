#include <iostream>
#include <cmath>

double serie_pi (int N);
  
int main (void){

  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);

  serie_pi (200);
  return 0;
}

double serie_pi (int N){

  double pi;
  double suma=0;
  double x=0;
  double h=1;

  for (int i=1; i<=N; ++i){
    
    x = 1/(h*h);
    ++h;
    suma +=x;
    std::cout << i << "  " << suma << " " << std::sqrt(6*suma) << std::endl;
  }
  
}



