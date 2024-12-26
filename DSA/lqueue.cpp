#include <iostream>
#define MAX 10

class lqueue{
  int front ;
  int rear ;
public:
  int queue[MAX];
  lqueue(){ front =-1;rear =-1;}
  bool isfull();
  bool isEmpty();
  void enqueue(int);
  int dequeue();
  void show();

};


bool lqueue:: isfull()
{
  if (rear!=MAX-1) {
    return(false);
  }
  else
    return(true);
}

bool lqueue:: isEmpty()
{
  if (rear!=MAX-1) {
    return(true);
  }
  else
    return(false);
}
void lqueue:: enqueue(int x)
{
  if (front && rear == -1) {    //inserting first element
    front=0;
    rear =0;
    queue[rear]=x;
  }
  else if (rear == MAX-1) {                               //overflow
    std::cout << "\n"<<":: We are out of space ::" << '\n';
  }
  else
    queue[++rear]=x;
}

int lqueue:: dequeue()
{
  if (front ==-1&&rear ==-1)
  {
    return 0;
  }
  else if (front == rear) {
    int f = front;
    front = rear = -1;     // if we have only one element left
    return(queue[f]);
  }
  else
    std::cout << queue[front++] ;
    return(1);
}

void lqueue::show()
{
  int i;
  std::cout << "your queue is " << '\n';
  for ( i = front; i <= rear; i++) {
    std::cout << queue[i] << '\t';
  }

}


int main()
{
  lqueue q;
  int itr=0;
  while (1) {
      itr++;
    if (itr==1 || itr%8==0) {
      /* code */
      std::cout << "Options are" << '\n';
      std::cout << "1.Enqueue" << '\n'<<"2.Dequeue"<<"\n"<<"3.Show"<<"\n"<<"4.isFull?"<<"\n"<<"5.isEmpty?"<<"\n";
    }
  std::cout << "Enter your choice: " ;
  int  choice;
  int x;
  std::cin >>choice;
  switch (choice) {
    case 1:
      std::cout <<"\n"<< "Enter Value To Enqueue: " ;
      std::cin >> x;
      q.enqueue(x);
      break;
    case 2:
    int de;
      if (q.dequeue()==0) {
        /* code */
        std::cout <<"\n"<< "We dont have any thing for you NOOB" << '\n';
      }
      else
      std::cout <<"\n"<< "Dequeued " << '\n';
      break;
    case 3:
      q.show();
      std::cout  << '\n';
      break;
    case 4:
      if (q.isfull()==true) {
        std::cout << "\n"<<"we are Full buddy!!" << '\n';
      }
      else
        std::cout << "\nwe have some space!!" << '\n';
      break;
    case 5:
      if (q.isEmpty()==true) {
        std::cout << "\nwe have some space !! " << '\n';
      }
      else
        std::cout << "\nwe are full buddy!!" << '\n';
      break;
    default:
      std::cout <<"\n"<< "worong choice 'AAP KA CHOICE THEEK NA HAI '" << '\n';
  }
}
}
