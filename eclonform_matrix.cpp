//Problem in makeOne() unable to make one
#include <iostream>
int R,C,mxn;
void disMatrix(float Ax[][99]);
void makeOne(float Ax[][99],int,int); //calling formate makeOne(ArrayName,i,j) to make it one
void makeZero(float Ax[][99] );
int main()
{
  std::cout << "Row : ";
  std::cin >> R;
  std::cout << "Col : ";
  std::cin >> C;
  std::cout << "Enter Aij " << '\n';
  mxn =R*C;
  float Ax[mxn][99];
  int i,j;

  //Asking elements of matrix
  for (i = 1; i <= R; i++)
  {
    for (j = 1; j <=C; j++)
    {
      std::cin >> Ax[i][j];
    }
  }

  //displaying Input matrix
std::cout<<"\n"<<"\t" << "- Input -" << '\n';
disMatrix(Ax);
//making A11 =1
makeOne(Ax,1,1); //calling formate makeOne(ArrayName,i,j) to make it one
makeZero(Ax);
}

//display matrix
void disMatrix(float Ax[][99])
{
  int i,j;
  for (i = 1; i <= R; i++)
  {
    std::cout << "R"<<i<<" --- "<<"|" ;
    for (j = 1; j <=C; j++)
    {
      std::cout << Ax[i][j] <<"  ";
    }

    std::cout  <<"|"<< '\n';
  }
}

//making element  1
void makeOne(float Ax[][99],int a,int b)
{
  int i;
  float A11 =Ax[a][b];
  std::cout << "a11 : "<<A11 << '\n';
  if (A11!=1) {
    for ( i = 1; i <=mxn/R; i++) {

      Ax[a][i]=Ax[a][i]/A11;
    }
  }
  disMatrix(Ax);
}


//problem here
//making zero (0)
void makeZero(float Ax[][99])
{
    int i,j;
    for (i = 2; i <= R; i++)

      for (j=1; j <=C; )  //if j =1 is being change to j=2 then it change A22,A23,A32,A33 but not A21,A31
      {
      Ax[i][j]= Ax[i][j]-(Ax[i][j]*Ax[1][j]);
      j++;
      }
    std::cout <<'\n'<< "A22 = "<<Ax[2][2] << '\n'<<"R = "<<R<<'\n'<<"C = "<<C<<"\n";
   disMatrix(Ax);
}
