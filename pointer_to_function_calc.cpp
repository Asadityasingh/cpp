
#include <iostream>
#define op 4
int sum(int x,int y) {return (x+y);}
int sub(int x,int y) {return (x-y);}
int mult(int x,int y) {return (x*y);}
int dev(int x,int y){return (x/y);}
int main()
{
  int (*ptr[op])(int ,int ) ={sum,sub,mult,dev};
  int choice,a,b;
  std::cout << "Enter your choice :" ;
  std::cin >> choice;
  std::cout << "Enter two numbers :" ;
  std::cin >> a>>b;
  std::cout << ptr[choice](a,b) << '\n';
}
