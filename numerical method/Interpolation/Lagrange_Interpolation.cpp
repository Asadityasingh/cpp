#include<iostream>
// #include <iomanip>
#include <iomanip>
#define MAX 120

int main()
{
  float ax[MAX+1],ay[MAX+1],nr,dr,y=0,x;
  int n,i,j;

  std::cout << "Enter number of elements :";
  std::cin >> n;

  std::cout << "Enter THE PAIR OF X,Y" << '\n';
  for ( i = 0; i <=n ; i++)
  {
      std::cin >> ax[i]>>ay[i];
  }
  std::cout << "Enter the value of X :" ;
  std::cin >> x;

  for (i = 0; i <= n; i++)
  {
    nr=dr=1;
    for (j = 0; j <= n; j++)

      if (j!=i) {
        nr*=x-ax[j];
        dr*=ax[i]-ax[j];
      }
      y+=(nr/dr)*ay[i];

  }
  std::cout << "value of y when x = "<<x<<" is :"<<std::setw(200)<<std::fixed<<std::setprecision(9)<<y ;
// scientific

}
