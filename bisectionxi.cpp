//AA-
#include <iostream>
#include <cmath>

double f (double x);
double bisection (double xu, double xl,  int NMAX, double EPS);

int main(void){

  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);

  
  bisection (12,16,20,5e-7);
  return 0;
}

double bisection (double xu, double xl,  int NMAX, double EPS)
{
  double xr=0;
  double xold=0;
  double deltax=0;
  
  for (int ii=1; ii <= NMAX ; ++ii){

    xr = (xu + xl)*0.5;
    deltax = std::fabs(xr-xold);
	
    std::cout << ii << "  " << xu << "  " << xl << "  " << xr << "  " << deltax <<  std::endl;

    if (std::fabs(f(xr)) < EPS) break;
    
    xold = xr;
       
    if (f(xl)*f(xr)>0)
      xl = xr;
    else
      xu = xr;
      

  }
}

double f (double x){

  return 9.81*68.1/x*(1-std::exp(-x*10/68.1))-40;
  
}
