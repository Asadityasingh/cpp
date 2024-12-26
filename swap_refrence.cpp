

//swap using refrence
#include <iostream>
void swap (int *,int *);
int main()
{
int a=4,b=5;
std::cout << "a : "<<a << '\n'<<"b: "<<b<<'\n';
swap(&a,&b);
std::cout << "a : "<<a << '\n'<<"b: "<<b<<'\n';
}

void swap (int *x,int *y)
{
int  temp;
  temp = *x;
  *x=*y;
  *y=temp;
}
