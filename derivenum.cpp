#include <iostream>
#include <cmath>

double df (double x, double h);
double f (double x);

int main(void){
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);

  double dft=-13.485507915150495036;
  double h=0;

  double delta;
  
  for (int ii=1; ii <= 10; ++ii){
      
    h = 10e-1;
    delta = std::fabs((dft-df(4,h))/dft);
    
    std::cout << h << "  " << delta << std::endl;

    h=h/10;
  }

  
  return 0;
}

double df (double x, double h){

  return (f(x+h)-f(x))/h;
	  
}
    
double f (double x){
    return 4*x*std::sin(x)+7;
}
