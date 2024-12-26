
// C++ program to show unary operator overloading
#include <iostream>

using namespace std;

class Distance {
public:

	// Member Object
	int feet, inch;

	// Constructor to initialize the object's value
	Distance(int f, int i)
	{
		this->feet = f;
		this->inch = i;
	}

	// Overloading(-) operator to perform decrement
	// operation of Distance object
	Distance operator - ()
	{
		feet--;
		inch--;
		cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch;
	}

  //binary operator Overloading
  Distance operator +(Distance d)
  {
    Distance temp;
    temp.feet = feet + d.feet;
    temp.inch = inch + d.inch;
    return(temp);
  }

  //displaying data
  void showdata()
  {
    std::cout <<"\n"<< feet <<inch << '\n';
  }
  Distance()
  {}
};

// Driver Code
int main()
{
	// Declare and Initialize the constructor
	Distance d1(8, 9),d2,d3(5,2);

	// Use (-) unary operator by single operand
	-d1;
	//or
  //d1.operator-();

	// Use (+) binary operator
	d2 =d1+d3;
	d2.showdata();
	return 0;
}
