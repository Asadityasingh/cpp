#include ".\basics\factorial.h"
#include <iostream>
int main()
{
  int *q = factorial(10);
  for (int i = res_size-1 ; i >= 0; i--) {
    /* code */
    std::cout << q[i] ;
  }
  std::cout  << '\n';
  std::cout << "res_size :- " << res_size<<'\n';
  int n = res_size;
  //because res_size is defined as static so we have to reset it each time after use
  res_size =1;
    int *p = factorial(17);
    for (int j = res_size-1 ; j >= 0; j--) {
      /* code */
      std::cout << p[j] ;
    }
    int m = res_size;
  std::cout << '\n'<< "res_size :- " << res_size;
}
