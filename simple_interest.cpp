//write the p to accept principal and rate and print interest

#include <iostream>
int main(){
  int p,r,t;
  std::cout << "Enter principal rate and time" << '\n';
  std::cin >> p>>r>>t;

  std::cout << (p*t*r)/100 << '\n';

}
