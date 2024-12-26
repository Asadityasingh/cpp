// by usinc class taking input and displaying it

#include <iostream>
 class complex{
   int a, b;      //private variables
 public:
   void input();  //declearing function inside class

   void display(/* arguments */) {
     /* code */
     std::cout << a <<" "<<b << '\n';
   }
 };

 int main() {
   complex q;       //here in class "q" is object
   q.input();       //calling input function
   q.display();     // calling display function
   return 0;
 }

void complex :: input(){      //function having acess of class private variables
  std::cin >> a>> b;          //by using class name with :: shows that it has acess to class private variables.its called membership lebal.
}
