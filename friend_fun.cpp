#include <iostream>
class ABC;
class XYZ
{
  int x;
public:
  void setdata(int i)
  {
    x=i;
  }
  friend void max(XYZ,ABC);
};
class ABC
{
  int a;
public:
  void setdata(int i)
  {
    a=i;
  }
  friend void max(XYZ,ABC);
};
void max (XYZ m,ABC n)
{
  if (m.x>=n.a)
  {
    std::cout << m.x << '\n';
  }
  else{
    std::cout << n.a << '\n';
  }
}

int main()
{
  ABC l;
  l.setdata(10);
  XYZ q;
  q.setdata(20);
  max(q,l);
}
