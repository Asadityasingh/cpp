
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int y = x++ * ++x;
    cout << y << '\n';
}


/* first x =5 then  it increment to 6 using post increment and
then incremented to 7 using pre increment.
and then it multiply with 5*7 and the result is 35*/
