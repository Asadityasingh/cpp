// default argument

#include <iostream>
void fun(int,int,int=0);
int main(){
  std::cout<<"Enter numbers \n";
  int a,b,c;
  std::cin >> a>>b>>c;
  fun(a,b,c);
  fun(a,b);
}
void fun(int x,int y, int z) {
  /* code */
  std::cout << "Hii mr. Aditya Singh yous sum is" << '\n';
  std::cout << x+y+z << '\n';
}
