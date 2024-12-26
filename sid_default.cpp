

#include<iostream>
using namespace std;
inline int sum(int=5 ,int=0, int=6);

int main ()
{
  int c,d=6;
  c=sum(); //calling by value
  std::cout << "sum is : " << c << '\n';
}
int sum (int a,int b,int c)
{
  return(a+b+c);
}
