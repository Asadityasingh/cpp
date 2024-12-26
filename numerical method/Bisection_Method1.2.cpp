#include <iostream>
#include <iomanip>
#include <math.h>
#define z 0.001

double f(double x)
{
  return x*x*x+3*x-5;
}

int main()
{
  double x0,x1,r;
  int i;
  std::cout << "Enter x0 & x1 & Max itration " << '\n';
  std::cin >> x0>>x1;
  r=x0;
  if ((f(x0)*f(x1))>=0) {
    std::cout << "wrong choice" << '\n';
    return 0;
  }
  while((x1-x0)>=z)
  {

    r = (x0+x1)/2;

    if (f(r)==0.0)
      break;

    else if ((f(r)*f(x0))<0)
      //if -ve;
      x1=r;

    else
      x0=r;
  }
  std::cout << " the root is :"<<r << '\n';
}
