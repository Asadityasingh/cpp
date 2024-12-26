#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  int &s=c;
  std::cout << "Enter two number" << std::endl;
  cin >>a>>b;
  c= a+b;
  cout<< c;
}
