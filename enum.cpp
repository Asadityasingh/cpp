#include <iostream>
using namespace std;
enum suit{
  club = 0,
  diamond = 10,
  heart = 20,
}card;

int main(){
  card =club;
  std::cout << "size of " <<diamond<<" "<<club<<" "<<heart<<" "<<card;
  return 0;
}
