
#include<iostream>
using namespace std;
int sum(int,int);
int sum(int,int, int);
int sum(int,int, int,int);
int main ()
{
  int c,d;
  c=sum(5,6);
  std::cout << "sum is : " << c << '\n';
  c=sum(5,6,7);
  std::cout << "sum is : " << c << '\n';
  c=sum(5,6,7,8);
  std::cout << "sum is : " << c << '\n';
}
int sum (int a,int b)
{
  return(a+b);
}
int sum (int a,int b,int c)
{
  return(a+b+c);
}
int sum (int a,int b,int c,int d)
{
  return(a+b+c+d);
}
// functioin overloading with different type of data type

// #include<iostream>
// using namespace std;
// void print(int);
// void print(double);
// void print(char const*);
// int main ()
// {
//   int c,d;
//   print("gjy");
//
//   print(5.7);
//
//   print("bholu");
//
// }
// void print (int c)
// {
//   std::cout << "print is : " << c << '\n';
// }
// void print (double f)
// {
// std::cout << "print is : " << f << '\n';
// }
// void print (char const*c)
// {
//   std::cout << "print is : " << c << '\n';
// }
