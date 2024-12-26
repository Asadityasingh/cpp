// #include "member.h"
void intersection(int set1[],int set2[])
{
  int i,j;
  std::cout <<"A x B = {";
  for (i = 0; i < noeset; i++)
  {
    if (member(set1[i],set2))
    {
      std::cout << set1[i]<<",";
    }
  }
 std::cout <<"}" << '\n';
}
