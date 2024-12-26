#include <iostream>
class staff
{
public:
  int id;
  char name[20];
  // void get(int x) {
  //   /* code */
  //
  // }
  void dis()
  {
    std::cout << "your name is : "<<name << '\n';
    std::cout << "your id is : "<<id << '\n';
  }

};

class officer
{
public:
  char post[20];
};

class manager: public officer , public staff
{
  int shallery;
public:
  void get(int x)
  {
    std::cout << "Enter Name : ";
    std::cin >> name;
    id =x;
    std::cout << "Enter Post : " << '\n';
    std::cin >> post;
    std::cout << "Enter Shallery : " << '\n';
    std::cin >> shallery;
  }
  void display()
  {
    dis();
    std::cout << "POST : "<<post << '\n';
    std::cout << "your shallery is : "<<shallery << '\n';
  }
};
int main()
{
  manager s1;
  s1.get(1);
  s1.display();
}
