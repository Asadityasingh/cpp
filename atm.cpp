#include <iostream>
#define a1 1000
#define a2 500
int main()
{
  int n,noteCounter;
  std::cout << "Enter your amount :";
  std::cin >> n;
  noteCounter = n%a1;
  noteCounter==0?std::cout << n/a1<<" x 1000 = "<<1000*(n/a1) << '\n':std::cout << n/a1<<" x 1000 = "<<1000*(n/a1) <<"\n"<<noteCounter/a2<<" x 500 = "<<500*(noteCounter/a2) << '\n';
  std::cout << "________________________" << '\n';
  std::cout << " Amount You Got "<<n << '\n';
}
