//used std::string to take name in in class via object
#include <bits/stdc++.h>
#include <string.h>
class staff
{
    int id ;
    std::string name;
  public:
    void setID(int x) {
      /* code */
      id=x;
    }
    void setName(std::string n) {
      /* code */
      int i;
       name =n;
    }
    void showdata()
    {
      int i;
      std::cout << "id :" << '\n';
      std::cout <<"Name :";
        std::cout <<name;
    }
};
int main()
{
  staff obj;
  std::string s("Aditya");
  obj.setID(23);
  obj.setName(s);
  obj.showdata();
}
