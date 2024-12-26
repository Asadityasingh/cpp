// #include <iostream>
// using namespace std;
// enum suit{
//   club = 0,
//   diamond = 10,
//   heart = 20,
// }card;
//
// int main(){
//   card =club;
//   std::cout << "size of " <<diamond;
//   return 0;
// }

#include <iostream>
struct bh
{
  int sum;
};
void in ();
void out( bh, bh);
int main()
{
  in();
}
void in()
{
  bh a,b;
  std::cout << "enter first no : ";
  std::cin >> a.sum;
  std::cout << "enter second no :";
  std::cin >> b.sum;
  out(a,b);
}
void out( bh a, bh b)
{
  bh c;
  c.sum=a.sum+b.sum;
  std::cout << "sum is :" << c.sum;
}
