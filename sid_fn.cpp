
#include<iostream>
using namespace std;
int sum(int , int);
int sub (int*,int*);
int mul(int&, int&);
int main ()
{
  int a=5,b=6 ,c;
  c=sum(a,b); //calling by value
  std::cout << "sum is : " << c << '\n';
  c=sub(&a,&b); // calling by address
  std::cout << "sub is : " << c << '\n';
  c=mul(a,b); //calling by refrence
  std::cout << "mul is : " << c << '\n';
}
int sum (int a,int b)
{
  return(a+b);
}
int sub (int* a, int* b) //argument is pointer variable
{
  return (a-b);
}
int mul(int& a,int& y) // argument is refrence variable
{
  return(a*y);
}
