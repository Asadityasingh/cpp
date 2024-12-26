
// wap which accept id and name of the staff and display it using the concept of structure


#include <iostream>
#include <string.h>
struct a{
  char name[20];
  char id[10];
};
int main(){
  a x;

  std::cout << "enter name" << '\n';
  std::cin >> x.name;
  std::cout << "enter id" << '\n';
  std::cin >> x.id;
  std::cout << x.name << '\n';
  std::cout << x.id << '\n';

  a x1={"adi","singh"}; //init at the time of declaration
  std::cout << x1.name<<"\n"<<x1.id << '\n';

  a x2;
  strcpy( x2.name , "b"); //strcpy() It is used to copy one string to another.
  std::cout << x2.name << '\n';


}
