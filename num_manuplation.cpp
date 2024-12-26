#include <iostream>
// #include <math.h>
#include <iomanip>
using namespace std;
int main()
{
  std::cout <<setw(3)<< 1 ;       /*  /b/b1   */
  std::cout << setprecision(5) << '\n'<<22.0/7.0;         //fixing whole number
  std::cout <<fixed<< setprecision(5) << '\n'<<22.0/7.0;  //fixing only decimal
}
