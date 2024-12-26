#include <iostream>

int main(){
  while(1){
  int t,i,j;
  std::cout << "Enter T :";
  std::cin >> t;
if (t ==0) {
  break;
}

  float n[t];
  float sq[t],sum = 0,osum =0;

std::cout << "input:-" << '\n';
  for(j=0;j<=t-1;j++) {
    std::cout << j+1 << ' ';
    std::cin >> n[j];
  }
    for ( i = 0; i <= t-1; i++){
      sq[i] = n[i]*n[i];
    }

std::cout << "\n\noutput:-" << '\n';
  for (i = 0; i <= t-1; i++) {
    /* code */
    std::cout << i+1 <<" " << sq[i] << '\n';
  }

std::cout <<"\t\t"<< "sum of input" << '\n';

for (i = 0; i <= t-1; i++) {
  /* code */
  sum += n[i];
  std::cout <<"\t\t"<< sum << '\n';
}

std::cout << "\t\tsum of sq" << '\n';

  for (i = 0; i <= t-1; i++) {
    /* code */
    osum += sq[i];
    std::cout <<"\t\t"<< osum << '\n';
  }

  std::cout << "\nmean of inputs :" <<sum/t<< '\n';
  std::cout << "mean of Sq :" << osum/t <<'\n';

}
  return 0;
}
