
#include <bits/stdc++.h>
class student
{
  int roll;
  char name[80];
public:
  void getroll(int x){
    roll =x;
    std::cout << "roll no is : "<<roll << '\n';
  }
  void namein(char *a) {
  //  name = a;
    // name =a;
    strcpy(name,a);
    std::cout << name << '\n';
  }

};
class teacher : public student
{
public:
  void getrollno(int x){
    getroll(x);
  }

};
int main()
{
  teacher s1;
  s1.getrollno(1);
  student a1;
  a1.namein("Aditya");
}
