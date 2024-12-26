//problem in Union
#include <iostream>
#include "credis.h"
#include "member.h"
#include "binary_relation.h"

#define MAX 30
//#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type)) user defined function for check array size

void create(int set[]);
void diset(int set[],int n);
int member(int a,int set[]);
void intersection(int set1[],int set2[]);
void Union(int set1[],int set2[],int,int);
int counter(int set[]);

using namespace std;
int main()
{
  int set1[MAX],set2[MAX],set3[MAX];
  set1[0]=set2[0]=set3[0]=0;
//create set1{}
  create(set1);
//create set2{}
  create(set2);
  if (!member(2,set2))
  {
    std::cout << "hello aditya we could not found any match" << '\n';
  }
  int m = sizeof(set1) / sizeof(set1[0]);
  int n = sizeof(set2) / sizeof(set2[0]);
  intersection(set1,set2);
  Union(set1, set2, m, n);
   diset(set3,7);
}
// union(A,B)=A+B -intersection(A,B)
void Union(int set1[],int set2[],int m,int n)
{
  int set3[60],i,j;
  for ( i = 0; i < m; i++) {
    set3[i]=set1[i];
  }
  for ( j = i+1; j < n; j++) {
    set3[j]=set2[j];
  }
}
// Now we have A+B in set3{},Now we have to set{}-intersection(A,B)

// int set4;
//   for (q = 0; q < count; q++) {
//     /* code */
//   if (member(set1(q),)) {
//     std::cout << "working" << '\n';
//   }
// }

// }
