
#include <iostream>
class A
{
  int a;    //defing private member of class A

protected:    //defing protected member of class A
  void setvalue(int x) {
    a=x;
  }
  void showvalue()
  {
    std::cout << "a = "<<a << '\n';
  }
};
class B : public A    //inharitating class B with class A
{
public:
  void setdata(int x) {
    setvalue(x);        //calling protected setvalue() mathod
  }
  void showdata(/* arguments */) {
    showvalue();       // calling showvalue() method
  }
};
void a();
int main(/* arguments */) {
  /* code */
  B o;
  /*     To acess this block of code A protected members should be change into public

  o.setvalue(5);
  o.showvalue();
  */
  a();
  /*
  #Note :- We cannot set value by using setvalue() method
  and display it using showdata() method although showdata()
  is also display value of "a" but the object is different.
  so,showdata() method will display a garbage value.
  */
}

void a() {
  //we can also write this block of code in main function directly
  B obj;
  std::cout << "a is being called" << '\n';
  obj.setdata(4);
  obj. showdata();
}
