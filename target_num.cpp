//this program acchives a trageted value

#include <iostream>
int main(){
    std::cout<<"Enter number :";
    int num[3],i;
    for(i=0;i<=3;i++){
    std::cin>>num[i];
    }
    std::cout<<"Target = ";
    int t;
    std::cin>>t;

    for (i = 0; i<=3; i++) {
      int j ;
      for (j = i+1; j <=3; j++) {
        int c = num[i]+num[j];
        if (t==c){
        std::cout << num[i] << "+" << num[j] << '='<< c<< '\n';
      }
    }
    }
}
