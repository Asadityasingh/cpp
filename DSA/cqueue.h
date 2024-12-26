 #define MAX 10
class cqueue{
  int front ;
  int rear ;
public:
  int queue[MAX];
  cqueue(){ front =-1;rear =-1;}
  bool isfull();
  bool isEmpty();
  void enqueue(int);
  int dequeue();
  void show();

};


bool cqueue:: isfull()
{
  if (((rear+1)%MAX)==front) {     //overflow
    return(true);
  }
  else
  return(false);
}

bool cqueue:: isEmpty()
{
  if (((rear+1)%MAX)==front) {
    return(false);
  }
  else
    return(true);
}
void cqueue:: enqueue(int x)
{
  if (front==-1 && rear == -1) {    //inserting first element
    front=0;
    rear =0;
    queue[rear]=x;
  }
  else if (((rear+1)%MAX)==front) {                               //overflow
    std::cout << "\n"<<":: We are out of space ::" << '\n';
  }
  else
    rear = (rear+1)%MAX;          //next place
    queue[rear]=x;
}

int cqueue:: dequeue()
{
  if (front ==-1&&rear ==-1)    //underflow
  {
    return 0;
  }
  else if (front == rear) {
    int f = front;
    front = rear = -1;     // if we have only one element left
    return(queue[f]);
  }
  else

    std::cout << queue[front] ;
    front =((front+1)%MAX);
    return(1);
}

void cqueue::show()     ///check herar
{
  int i = front,l,z;
  std::cout << "your queue is " << '\n';
  if (front==-1 && rear ==-1) {
    std::cout << "Empty" << '\n';
  }
  else
  {
  while ( i != rear) {
    std::cout << queue[i] << '\t';
    i=(i+1)%MAX;

  }
  std::cout << queue[rear] << '\n';
}

}
