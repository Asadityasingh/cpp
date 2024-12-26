
//using print("/* message */") insted of std::cout << "/* message */" << '\n';
#include <iostream>
#define print(d) {std::cout <<d << '\n';}
int main()
{
  int a=20;
  print(a);
}
