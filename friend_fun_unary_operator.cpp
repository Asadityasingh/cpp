//unary operator Overloading as friend function
#include <iostream>
class distance {
private:
  int feet,inch;

public:
  distance (int f,int i){
    this -> feet = f;
    this -> inch = i;
  }
  distance ()
  { }
  void showdata(/* arguments */) {
    std::cout << "feet is :"<<feet<<"\n"<<"inch is :"<<inch << '\n';
  }
  friend distance operator- (distance);
};

distance operator- (distance x)
{
  distance temp;
  temp.feet =x.feet--;
  temp.inch =x.inch--;
  std::cout << "feet is :"<<x.feet<<"\n"<<"inch is :"<<x.inch<<"\n" << '\n';
  return(temp);
}
int main ()
{
  distance a(3,4),b;
//  a.setdata(2,4);
  b =-a;
  b.showdata();
}
