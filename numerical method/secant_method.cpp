#include <iostream>
#include <iomanip>
#include <math.h>

float f(float x)
{
  return x*tan(x)+1;
}

int main()
{
  int i=0;
  float x1,x0,x2,xn,c,E;
  std::cout << "Enter initial value x1,x0,Err" << '\n';
  std::cin >> x1>>x2>>E;
  if (f(x1)*f(x2)<0) {
    /* code */

  do {
    x0=(x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));

    // c=f(x0)*f(x1);
    x1=x2;
    x2=x0;


    xn=(x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));

  } while(fabs(xn-x1)>=E);
  std::cout << "Root :"<<std::fixed<<std::setprecision(3)<<x1 << '\n';
}
}
