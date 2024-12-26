// C++ program to demonstrate static
// variables inside a class

#include<iostream>
using namespace std;

class GfG
{
public:
	static float i;

	GfG()
	{
		// Do nothing

    i++;

	};
};

float GfG::i=3.2f;

int main()
{
  	static int i=1;
	GfG obj , obj2;
  //GfG obj2;

	// prints value of i

	cout << obj.i <<"\n"<<i <<"\n"<<obj2.i+1<<"\n"<<obj.i<<"\n"<<obj2.i;
}



// #include <iostream>
// class ac
// {
// public:
//   int a =2;
//   static int b ;
// };
// int ac::b =9;			//defing static variable
// int main() {
//   ac c;
//   ac::b =6;		//calling static public variable direct
//   std::cout <<c.a<< c.b << '\n';
//   return 0;
// }
