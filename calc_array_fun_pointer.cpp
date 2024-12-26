
//calsulator using pointer to Function
#include <iostream>
#define op 4        //comma "," nhi ho ga
int sum(int x,int y){return(x+y);}
int sub(int x,int y){return(x-y);}
int multi(int x,int y){return(x*y);}
int dev(int x,int y){return(x/y);}


int main()
{

  int (*arr [op])(int,int)={sum,sub,multi,dev}; //assign value to array arr {as element if array}
  int choice ,a,b;
  std::cin >> choice;
  std::cin >> a>>b;

//calling function by passing place of element
  std::cout << arr[choice](a,b) << '\n';
}
