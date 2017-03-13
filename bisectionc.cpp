#include <iostream>
#include <cmath>

double f (double x);
double bisection (double xl, double xu, int  NMAX, double EPS);
int main(void){
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);

  bisection (12,16,20,5e-15);
  return 0;
}

double f (double x)
{
  return 9.81*68.1/x*(1-std::exp(-x/68.1*10))-40;
}

double bisection (double xl, double xu, int  NMAX, double EPS)
{
  double xr=0;

  for (int ii=1; ii<=NMAX; ++ii){

    xr = 0.5*(xl+xu);
    std::cout << ii << "\t" << xl <<  "\t" << xu << "\t" << xr << "\t" << f(xr) << std::endl;

    if (std::fabs(f(xr))<EPS) break;

    if (f(xr)*f(xl) > 0)
      xl = xr;
    else
      xu = xr;


  }
}
