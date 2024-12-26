//overloading of insertion "<<" and extration ">>" operator by help of friend function
#include <iostream>
using namespace std;
class complex
{
private:
  int a =0,b=0;
public:
  friend ostream& operator <<(ostream&,complex);
  friend istream& operator >>(istream&,complex&);
};
ostream& operator<<(ostream &Aout,complex x)
{
  std::cout << "a = "<<x.a << '\n'<<"b = "<<x.b;
  return(Aout);
}
istream& operator>>(istream &Ain,complex &x)
{
  std::cin >> x.a>>x.b;
  return(Ain);
}
int main(/* arguments */) {
  /* code */
  complex c1;
  std::cout << "enter a complex number :"<<'\n' ;
  operator>>(cin,c1);
  // or
//  cin>>c1;

  std::cout << "you had entered" << '\n';
  cout<<c1;

}
