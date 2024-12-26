
#include <iostream>
class person;
class peon;
class staff
{
  int id;
  public:
    void getID()
    {
      std::cout << "Enter ID" << '\n';
      std::cin >> id;

  }
    void ID(/* arguments */) {
      std::cout << id << '\n';
    }

};
class officer
{
  char name[20];
public:
  void getname(/* arguments */) {
    /* code */
  std::cout << "Enter name" << '\n';
  std::cin >> name;
}
void Names(/* arguments */) {
  std::cout << name << '\n';
}
};
class person
{
  char mob[13];
public:
  void getmobN(/* arguments */) {
  std::cout << "enter mob number" << '\n';
  /* code */
  std::cin >> mob;
}
  void mobN(/* arguments */) {
    std::cout << mob << '\n';
  }
};
class peon
{
char add[20];
public:
  void getadd(/* arguments */) {
    /* code */

  std::cout << "enter address" << '\n';
  std::cin >> add;
}
void address(/* arguments */) {
  std::cout << add << '\n';
}
};

class manager : public officer , public staff,public person,public peon
{
  char phone[20];
  char mob[20];

public:
  void getPhone()
  {
    std::cout << "Enter phone number" << '\n';
    std::cin >> phone;
  }
  void phoneN(/* arguments */) {
    std::cout << phone << '\n';
  }

};
int main()
{
  manager a;
  a.getID();
  a.getname();
  a.getadd();
  a.getPhone();
  a.getmobN();
  a.ID();
  a.address();
  a.phoneN();
  a.mobN();
}
