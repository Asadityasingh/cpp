
#include <iostream>
class student
{
  int a;
  char b[10];
public:
  void data (int );
  void display()
  {
    std::cout << a<<'\n'<<b << '\n';
  }

};

int main()
{
  student a1;
  std::cout << "Enter roll number" << '\n';
  int l;
  std::cin >> l;


  a1.data(l);
  a1.display();
}

void student :: data(int x)
{
  a=x;
  std::cout << "enter name" << '\n';
  std::cin >> b;

}
