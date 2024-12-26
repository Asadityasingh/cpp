
#include <iostream>
class staff   //staff has only name and id
{
  int id ;
  char name[10];
public:
  void getID()
  {
    std::cout << "Enter your ID: " << '\n';
    std::cin >>id ;
  }
  void display(/* arguments */) {
    std::cout << "id :" << id<< '\n';
    std::cout << "name is :" <<name << '\n';
  }
  void getname()
  {
    std::cout << "Enter your name: " << '\n';
    std::cin >> name;
  }
};

class officer :public staff     //it inharitate staff and it has phone number
{
  char pn[13];
public:
  void getphoneNumber()
  {
    std::cout << "Enter phone number: " << '\n';
    std::cin >> pn;
  }
  void displayPn(/* arguments */) {
    std::cout << "phoneNumber :" << pn<< '\n';
  }
};
class manager :public officer     //it inharitate manager and it has mobile number
{
  char Mn[13];
public:
  void getmobileNumber()
  {
    std::cout << "Enter mobile number: " << '\n';
    std::cin >> Mn;

  }
  void displayMn(/* arguments */) {
    std::cout << "mobile number :" << Mn<< '\n';
  }
};

int main()
{
  manager m1;
  m1.getID();
  m1.getname();
  m1.getphoneNumber();
  m1.getmobileNumber();
  m1.display();
  m1.displayPn();
  m1.displayMn();
}
