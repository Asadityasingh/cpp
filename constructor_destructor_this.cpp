
#include <iostream>
#define print() {std::cout <<  << '\n';}  //error define print()
class student {
  int roll;
  char name[10];

public:

  student(int x)    //parameterized constructor
  {
    roll=x;
    std::cout << "Enter your name : ";
    std::cin >> name;
  }
  student()   //defult constructor
  {
    std::cout << "Its your profile" << '\n';

  }
  student (student &x)    //copy constructor
  {
    roll=x.roll;
  }
//destructor
  ~student()
  {
    std::cout << "roll no : "<<this -> roll << '\n';
    std::cout << "name : "<<name << '\n'<<'\n';
  }
};
  int main(/* arguments */)
  {
    // while (1)
    // {
      int r;
      std::cout << "Enter Roll No: ";
      std::cin >> r;
      student s1(r);
    // }
    student s2(2),s3,s4;
    s3 = s1;  //copying constructor s2 to s3
    s4=s3;   //s4(s3); it may not work perfectly so use s4=s3;
  }
