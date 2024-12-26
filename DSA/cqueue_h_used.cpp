#include <iostream>
#include "./DSA/cqueue.h"

int main()
{

  cqueue p,m;
  p.enqueue(5);
  std::cout << "p.queue is "<< p.queue[0] << '\n';
  m.enqueue(50);
  m.enqueue(55);
  std::cout << "m.queue is "<< m.queue[0] << '\n';
  std::cout << "m.queue is "<< m.queue[1] << '\n';
  m.dequeue();

  if (m.isEmpty()==true ) {
    std::cout << "yeee" << '\n';
    /* code */
  }
  else
   std::cout << " na babuaa" << '\n';

}
