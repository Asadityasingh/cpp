/* Bisection Method */
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
float f(float x,int p,int l,int m)
{
 return (p*(x*x*x) +l*x +m);
}
void bisect(float *x,float a,float b,int *itr)
{
 *x = (a + b)/2;
 ++(*itr);
 cout << "Iteration no." <<setw(3) << *itr
 << "X = " << setw(7) << setprecision(5)
 << *x << endl;
}
int main()
{

 int itr = 0, maxitr;
 float x, a, b, aerr, x1;
  int p,l,m;
  std::cout << "Enter coficient:" ;
  std::cin >> p>>l>>m;
 cout << "Enter the values of a,b,"
 << "allowed error, maximum iterations" << endl;
 cin >> a >> b >> aerr >> maxitr;
 cout << fixed;
 bisect(&x,a,b,&itr);
 do
 {
 if (f(a,p,l,m)*f(x,p,l,m) < 0)
 b = x;
 else
 a = x;
 bisect (&x1,a,b,&itr);
 if (fabs(x1-x) < aerr)
 {
 cout << "After" << itr << "iterations, root"
 << "=" << setw(6) << setprecision(4)
 << x1 << endl;
 return 0;
 }
 x = x1;
 } while (itr < maxitr);
 cout << "Solution does not converge,"
 << "iterations not sufficient" << endl;
 return 1;
}
