// C++ program to compute factorial of big numbers

// Maximum number of digits in output
#define MAX 500

int res_size = 1;
int multiply(int x, int res[], int res_size);

// This function finds factorial of large numbers
// and prints them
int* factorial(int n)
{
	static int res[MAX];

	// Initialize result
	res[0] = 1;

	// Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
	for (int x=2; x<=n; x++)
		res_size = multiply(x, res, res_size);

	// for (int i=res_size-1; i>=0; i--)
	// 	cout << res[i];
  return res;
}

// This function multiplies x with the number
// represented by res[].
// res_size is size of res[] or number of digits in the
// number represented by res[]. This function uses simple
// school mathematics for multiplication.
// This function may value of res_size and returns the
// new value of res_size
int multiply(int x, int res[], int res_size)
{
	int carry = 0; // Initialize carry

	// One by one multiply n with individual digits of res[]
	for (int i=0; i<res_size; i++)
	{
		int prod = res[i] * x + carry;

		// Store last digit of 'prod' in res[]
		res[i] = prod % 10;

		// Put rest in carry
		carry = prod/10;
	}

	// Put carry in res and increase result size
	while (carry)
	{
		res[res_size] = carry%10;
		carry = carry/10;
		res_size++;
	}
	return res_size;
}



// ref :https://www.geeksforgeeks.org/factorial-large-number/
// need to understand deeply



/*                                      read me
              |...................direction to use.....................|
#include <iostream>
#include ".\discrete_structure\basics\factorial.h"
// Driver program
int main()
{
  int *p =	factorial(100);
   for (int i=res_size-1; i>=0; i--)
  	cout << p[i];
	return 0;
}

*/
