//friend function
#include <iostream>
class ABC;
class XYZ
{
  int x;
public:
   XYZ (int i)
  {
    x=i;
  }
  //friend function declaration
  friend void max (XYZ, ABC );
};

class ABC
{
  int a;
public:
   ABC (int i)
  {
    a=i;
  }
  //friend function declaration
  friend void max (XYZ,ABC);
};

void max (XYZ m,ABC n)
{
  if (m.x>n.a) {
    /* code */
    std::cout <<"Is greater m.x = "<< m.x << '\n';
  }
  else
  std::cout <<" Is greater n.a = " <<n.a << '\n';
}

int main ()
{
  ABC abc(10);
  XYZ xyz(7);
  // abc.setValue(5);
  // XYZ xyz ;
  // xyz.setValue(7);
   max(xyz,abc);
}
