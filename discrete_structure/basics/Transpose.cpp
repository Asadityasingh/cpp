//incomplete transpose() nor terurning desired result

#include <iostream>
int* transpose( int row ,int col,int *matrix )
{
  //result matrix
  std::cout  << '\n';
  std::cout << "Transpose of matrix" << '\n';
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      std::cout << *((matrix+j*row) + i)<<"  ";
      /* for 1d array :-*(matrix+j) is same as matrix[j]
      for 2d array :-Array[row][col] = *(Array[row] + col) = *(*(Array+row) + col)
      */
  }
  std::cout  << '\n';
  }
 return 0  ;
}
int main ()
{
  //input number of row and colume
  int Row ,Col;
  std::cout << "Enter Row : ";
  std::cin >> Row;
  std::cout << "Enter Col : ";
  std::cin >> Col;

  //input Matrix
  int Matrix[Row][Col];
  std::cout << "Enter Matrix" << '\n';
  for (int i = 0; i < Row; i++) {
    for (int j = 0; j < Col; j++) {
      std::cin >> Matrix[i][j];
    }
  }

  //display matrix
  std::cout << "Input Matrix" << '\n';
  for (int i = 0; i < Row; i++) {
    for (int j = 0; j < Col; j++) {
      std::cout << Matrix[i][j]<<"\t";
    }
    std::cout  << '\n';
  }

//printing results
int *p=  transpose(Row,Col,(int *)Matrix); //function call using typecasting
// std::cout << "Input Matrix fun out" << '\n';
// for (int i = 0; i < Row; i++) {
//   for (int j = 0; j < Col; j++) {
//     std::cout << *(p+i*Col)+j<<"  ";
//   }
//   std::cout  << '\n';
// }

int temp[Col];
for (int i = 0; i < Row; i++) {
  for (int j = 0; j < Col; j++) {
    temp[j]=Matrix[i][j];
    Matrix[j][i]=temp[j];
  }
}
std::cout << "temp output" << '\n';
for (int i = 0; i < Row; i++) {
  for (int j = 0; j < Col; j++) {
    std::cout << Matrix[i][j]<<"  ";
  }
  std::cout  << '\n';
}
}
