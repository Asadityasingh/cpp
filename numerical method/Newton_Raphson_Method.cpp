#include <iostream>
#include <iomanip>
#include <math.h>



  float f(float x)
  {
    return x*x+4*sin(x);                     // x*x*x*x+x*x*x-7*x*x-x+5;  //(x*log10 (x)-1.2);
  }
  float df(float x)
  {
    return 2*x+4*cos(x);                   //((4*x*x*x)+(3*x*x)-(14*x));  //(log10 (x)+0.43429);
  }


  int main()
  {

  int nitr,i;
  float x0,x1,h,err;
  std::cout << "Enter the value of X0 (initial value) ,accepted error , no of max itration "<<"\n" ;
  std::cin >> x0>>err>>nitr;
  std::cout << std::fixed ;
  for (i = 0; i <= nitr; i++) {

  h=(f(x0)/df(x0));
  x1=x0-h;
  std::cout << "itration No :"<<i << "x = "<<x1<< '\n';

  if (fabs(h)<err) {
    std::cout << "After Iteration: "<<i<<"root = "<<std::setprecision(4) <<x1 << '\n';
    return 0;
  }
  x0=x1;
}
}
