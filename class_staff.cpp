

#include <iostream>
class staff
{
  int id,sh;
  char name[10];
public:
  void input(/* arguments */) {
    std::cout << "\nEnter name :" << '\n';
    std::cin >> name;
    std::cout << "Enter id and shallery :" << '\n';
    std::cin >> id >>sh;
  }
  void output(/* arguments */) {
    std::cout << "shallery is "<<sh << '\n';
    std::cout << "id is "<<id << '\n';
     std::cout << "name is :"<<name << '\n';
  }

};
int main()
{
  staff z;


  z.input();
  z.output();


}
