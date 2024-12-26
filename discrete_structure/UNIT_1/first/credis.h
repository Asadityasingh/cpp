int noeset,ne1,ne2;
void create(int set[])
{
  int i;
  std::cout << "Enter the no of elements : " ;
  std::cin >> noeset;
  std::cout << "Enter elements of set" << '\n';

  for (i = 0; i < noeset; i++)
  {
    std::cin >> set[i];
  }
}
void diset(int set[],int n)
{
  int i;
  for (i = 0; i < n ; i++)
  {
    std::cout <<"\t\t"<< set[i] << '\n';
  }
}
