#include <bits/stdc++.h>
#define maxsize 10
class stack
{
  int top;
public:
  int arr[maxsize];
  stack() { top = -1; }
  bool push(int);
  int pop();
  bool isEmpty();
  bool isfull();
  int head();
  void show();
};

bool stack:: isEmpty(){
  if (top==-1) {
    return true;
  }
  else
    return false;
}

bool stack::isfull(){
  if (top==maxsize-1) {
    return true;
  }
  else
    return false;
}

bool stack:: push(int x)  //here we are not checking for over flow we had done it below
{
    arr[++top] = x;
    std::cout << " :-) omg it pushed.You have done it wooow" << '\n'<<"\n";
    return true;
}
int stack::pop()
{
  if (top==-1)
  {
      std::cout << "Aap se na ho paaye ga (stack is underflow)" << '\n'<<"\n";
      return 0;
  }
  else
      return (arr[top--]);
}
int stack:: head(){
  if (top == -1) {
    return(0);
  }
  return(arr[top]);
}

void stack::show()
{
  int i;
  std::cout << "Stack " << '\n';
  for (i = maxsize-1; i >=0; i--)
  {
    if (top<i) {
      arr[i]=0;
    }
    std::cout << arr[i] << '\n';
  }
}





int main()
{
  stack s;
  int option,x;
  while(1)
  {
    std::cout << "chose option" << '\n'<<"1. Push"<<"\n2. Pop"<<"\n3. Stack is Empty?"<<"\n"<<"4. Stack is full?"<<"\n"<<"5.Top"<<"\n"<<"6.Show"<<"\n"<<"Enter your choice:";
    std::cin >> option;
    std::cout  << '\n';
    switch (option) {
      case 1:
      if (!s.isfull()) {
        std::cout << "Enter value" << ':';
        std::cin >> x;
        s.push(x);
        break;
      }
      else
        std::cout << "......SORRY KIDOO....... Stack is full/overflow" << '\n'<<"\n";
        break;
      case 2:                     // need some attention
        // if (s.pop()==0) {
        // break;
        // }
        // else
          std::cout << "poped : "<< s.pop()<<"\n";
          break;
      case 3:
        if (s.isEmpty()==1) {
          std::cout << "yes!!buddy your stack is fully empty enjoy :)" << '\n'<<"\n";
          break;
        }
        else
        std::cout << "!! NO !!" << '\n';
        break;
      case 4:
        if (s.isfull()==1) {
          std::cout << "Sorry KIDOO we are running out of space,better try next time..." << '\n'<<"\n";
          break;
        }
        else
          std::cout << "we are not full yet" << '\n'<<"\n";
          break;
      case 5:
        if (s.head()==0)
        {
          std::cout << "your stack is Empty " << '\n';
          std::cout << "Top :-1" << '\n'<<"\n";
        }
        else
          std::cout << "Top : "<< s.head()<<"\n"<<"\n";
          break;
      case 6:
        s.show();
        break;
      default:
          std::cout << "invalid choice .....try again....." << '\n'<<"\n";
          break;
    }

  }
}
