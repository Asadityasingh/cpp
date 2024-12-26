//Function Overloading

#include <iostream>
using namespace std;

void print(int i) {
cout << " Here is int " << i << endl;
}
void print(double f) {
cout << " Here is float " << f << endl;
}
void print(char const *c) {
cout << " Here is char* " << c << endl;
}

int main() {
print(10);
print(10.10);
print("ten");
return 0;
}

//wap display fun overloading in whichfirst product fun will multiply 2 num second will multiply 3 num and 3rd 4numbers

// #include <iostream>
// int product(int ,int );
// int product(int ,int ,int);
// int product(int ,int ,int,int);
// using namespace std;
// int main ()
// {
//   int a,b,c,d;
//   std::cout << "Enter 4 number" << '\n';
//   std::cin >> a>>b>>c>>d;
//   std::cout << "1st product fun" <<product(a,b) <<'\n';
//   std::cout << "2nd product fun" <<product(a,b,c)<< '\n';
//   std::cout << "3rd product fun" <<product(a,b,c,d)<< '\n';
// }
//
//
// int product(int x,int y)
// {
//   return x*y;
// }
//
// int product(int x,int y,int z)
// {
//   return x*y*z;
// }
//
// int product(int x,int y,int z,int l)
// {
//   return x*y*z*l;
// }
