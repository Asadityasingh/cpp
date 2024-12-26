

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
    std::cin >> this->id >>this->sh;
  }
  void output(/* arguments */) {
    std::cout << "shallery is "<<this->sh << '\n';
    std::cout << "id is "<<this->id << '\n';
     std::cout << "name is :"<<name << '\n';
  }

};
int main()
{
  staff *z,m;

  z=&m;
  z->input();
  z->output();


}
