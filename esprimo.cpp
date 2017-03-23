#include <iostream>
#include <cmath>

bool esprimo ( int n);

int main(void){
  int n;
  bool isprime=true, noprime;

  std::cin >> n;

  for (int ii=2; ii <= std::sqrt(n); ++ii){

    if (n%ii==0){
      isprime = false;
      break;
    }

  }

  if ( isprime==true)
    std::cout << n << " es primo" << std::endl;

  else
    std::cout << n << " no es primo" << std::endl;



  return 0;
}
