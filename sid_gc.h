//void tot();

int sum (int a, int b)
{
  int c;
  c=a+b;
  return c;
}
int sub(int d, int e)
{
  int f;
  f=d-e;
  return f;
}
int mul(int g, int h)
{
  return (g*h);
}
int divi (int j, int k)
{
  return (j/k);
}
int mod (int j,int k)
{
  return(j%k);
}
void all_gc()
{

  int x,y;
  std::cout << "Enter first No. : " << '\n';
  std::cin >> x;
  std::cout << "Enter Second No. :" << '\n';
  std::cin >> y;
  int c= sum (x,y);
  std::cout <<"Sum of " << x << " And " << y <<  " Is : "<< c << '\n';
  int b= sub (x,y);
  std::cout <<"Sub of " << x << " And " << y <<  " Is : "<< b << '\n';
  int p= mul (x,y);
  std::cout <<"Product of " << x << " And " << y <<  " Is : "<< p << '\n';
  int k= divi (x,y);
  std::cout <<"divide is :"<< k << '\n';
  int mo= mod (x,y);
  std::cout <<"Mod is :"<< mo << '\n';
}
