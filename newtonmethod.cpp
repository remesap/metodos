#include <iostream>
#include <cmath>

double f(double x);
double df (double x);
double newtonmethod (double x, int N);

int main(void){

  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);

  newtonmethod (0.1, 80);
  return 0;
}

double f (double x)
{
  return 2*x*(1-x*x+x)*std::log(x)-x*x+1;
}

double df (double x)
{
  return -2*(x-1)*(x+(3*x+1)*std::log(x)+1);
}

double newtonmethod (double x, int N)
{

  double xr = x;
  double xold =	0;

  for (int ii=1; ii <= N; ++ii){
    xold = xr;
    xr = xr - f(xr)/df(xr);

    std::cout << ii << "\t" << xr << "\t" << xold << std::endl;
  }
}
