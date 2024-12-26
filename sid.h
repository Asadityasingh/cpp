void mul();
void sid()
{
  mul();
}
  int sum(int f,int h) //argument & return
  {
    int c;
    c=f+h;
    return c;
  }
void gb ()//no argument no return
{
  std::cout << "bholu" << '\n';
  std::cout << "golu" << '\n' ;
}
void sub(int d, int v) // argument no return
{
  int r=d-v;
  std::cout <<"sub is :"<< r << '\n';
}
void mul () //no argument return
{
  int u,i,o,a,b;
  std::cin >> u >> i;
  o=u*i;
  sub(u,i);
  int d= sum (u,i);
  std::cout <<"sum is :"<< d << '\n';
  std::cout <<"mul is :"<< o << '\n';
  gb();
}
