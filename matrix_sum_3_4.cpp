

// wap which accept 3/4 2 matrix and display  sum


#include <bits/stdc++.h>

int main(){
  std::cout <<" Enter first matrix "<< '\n';
  int n1[3][4],i,j;
  for (i = 0; i <=2; i++) {
    for (j = 0; j <=3; j++) {
      /* code */
      std::cin >> n1[i][j];
    }
  }
int n2[3][4];
  std::cout << "Enter second matrix" << '\n';
  for (i = 0; i <=2; i++) {
    /* code */
    for (j = 0; j <=3; j++) {
      /* code */
      std::cin >> n2[i][j];
    }
  }

  std::cout << "First matrix " << '\n';
  for ( i = 0; i <=2; i++) {
    /* code */
    for (j = 0; j <=3; j++)
      /* code */
      std::cout << n1[i][j] << "  ";
      std::cout << "\n" ;

  }

  std::cout << "second matrix" << '\n';
  for ( i = 0; i <=2; i++) {
    /* code */
    for (j = 0; j <=3; j++)
      /* code */
      std::cout << n2[i][j] << "  ";
      std::cout << "\n";

  }

std::cout << "Sum of matrix ::" << '\n';
int sum[3][4];
for (i = 0; i <=2; i++) {
  /* code */
  for ( j = 0; j <=3; j++) {
    /* code */
     sum[i][j] =n1[i][j] + n2[i][j];
  }
}

for (i = 0; i <=2; i++) {
  /* code */
  for (j = 0; j <= 3; j++)
    /* code */
    std::cout << sum[i][j] << "  ";
    std::cout  << '\n';

}
}
