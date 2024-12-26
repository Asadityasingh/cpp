// bug in mean

#include <bits/stdc++.h>
void printarr(float x[],int);
float sums(float n[],int);
float sum2(float n[],int);

int main()
{
  while(1)
  {
    int t,i,j,xin,amin;
    std::cout <<"\nEnter Total Number of Items :";
    std::cin >> t;

    if (t == 0) {
      break;
    }

    float f[t],sfx,amean=0,c=0;
    float sq[t],fsum = 0,osum =0;
    float x[t];
    int tmean;
    float mean;



    std::cout << "Do wou want to enter x value (yes = 1 , no = 0)" << '\n';   // asking for x
    std::cin >> xin;
    if (xin == 1)
    {
      std::cout << "please enter x" << '\n';
      for (int i = 0; i <= t-1; i++)
      {
        std::cout << i+1<<" ";
        std::cin >> x[i];                         // taking x as input from user
      }

      std::cout << "\nDo you want to take Assumed Mean" <<" yes = 1 and no = 0 :";
      std::cin >> amin;
      if (amin == 1)
      {
        std::cout << "Enter Assumed Mean :" ;
        std::cin >> amean;
        std::cout << "Enter Value of C :" ;
        std::cin >> c;
      }
    }





    std::cout << "input / frequency:-" << '\n';   // taking friquency as input
    for(j=0;j<=t-1;j++)
    {
      std::cout << j+1 << ' ';
      std::cin >> f[j];
    }
    std::cout <<std::setw(60)<<"\n\t\t"<< "sum of input / frequency / Cf" << '\n';  // calculating /printing sum of frequency
    fsum = sums(f,t);

    //calculating square of input / frequency
    for ( i = 0; i <= t-1; i++)
    {
      sq[i] = f[i]*f[i];
    }
    std::cout << "\n\noutput / sq:-";       //printing square of freq
    printarr(sq,t);

    std::cout <<std::setw(80)<< "\n\t\tsum of sq" << '\n';
    osum = sums(sq,t);                      //calculating / printing sum of square



    // calculating fx and printing it only if xin ==1
    if (xin == 1)
    {
      std::cout << "fx";
      float fx[t];
      for ( i = 0; i <=t; i++)
      {
        fx[i] = f[i] * x[i];
      }
      printarr(fx,t);
      //computing sum of fx
      std::cout <<std::setw(80)<< "\n\t\tsum of fx " << '\n';
      sfx = sums(fx,t);
    }



    //type of mean selection section


    if (amin != 1)
    {
       /* code */
      std::cout << "\n\t\tPlease define mean\t\t\nsum of frequency/number of item = 1   or  sum of fx/sum of f = 0 :" ;
      std::cin >> tmean;
      if (tmean == 0)
      {
         mean = sfx/fsum;
      }
      else
      {
        mean = fsum/t;
      }

    }

    if (amin == 1)
    {
      /* code */
      std::cout << "Mean / Assumed Mean is :" <<amean <<'\n';
    }
    else
    {
      std::cout << "Mean is :"<<mean << '\n';
    }


    // d selection
    if(xin == 1)
    {
      float d[t];
      if (amin == 1)
      {
      //calculating d =x-Assumed mean/c
        for (i = 0; i <=t-1; i++)
        {
         d[i]=((x[i] - amean)/c);
        }
        std::cout << "\n" << 'd';    //print d
        printarr(d,t);

        std::cout <<std::setw(80)<< "\n\t\tSum of d" << '\n';  //calculating and printing sum of d
        sums(d,t);
      }

      else
      {    //putting execption on xin


        //calculating d =x-mean
       for (i = 0; i <=t-1; i++)
        {
          d[i]=(x[i] - mean);
        }

         std::cout << "\n" << 'd';    //print d
          printarr(d,t);
          std::cout <<std::setw(80)<< "\n\t\tSum of d" << '\n';  //calculating and printing sum of d
          sums(d,t);
      }


      /* code */
      //calculating fd
      float fd[t];
      for (i = 0; i <= t-1; i++)
      {
        fd[i] = f[i]*d[i];
      }
      std::cout << " fd" << '\n'<<"-----";            // printing fd
      printarr(fd,t);
      std::cout <<std::setw(40)<< "\nsum of fd :";
      sum2(fd,t);




      //calculating fd2
      float fd2[t];
      for (i = 0; i <= t-1; i++)
      {
        fd2[i] = f[i]*(d[i]*d[i]);
      }
      std::cout << "\n\n fd2"<<"\n-----" ;            // printing fd2
      printarr(fd2,t);
      std::cout <<std::setw(40)<< "\nsum of fd2 :";
      sum2(fd2,t);

      //calculating fd3
      float fd3[t];
      for (i = 0; i <= t-1; i++)
      {
        fd3[i] = f[i]*(d[i]*d[i]*d[i]);
      }
      std::cout << "\n\n fd3"<<"\n-----" ;            // printing fd3
      printarr(fd3,t);
      std::cout <<std::setw(40)<< "\nsum of fd3 :";
      sum2(fd3,t);

      //calculating fd4
      float fd4[t];
      for (i = 0; i <= t-1; i++)
      {
        fd4[i] = f[i]*(d[i]*d[i]*d[i]*d[i]);
      }
      std::cout << "\n\n fd4"<<"\n"<<"-----";            // printing fd4
      printarr(fd4,t);
      std::cout <<std::setw(40)<< "\nsum of fd4 :";
      sum2(fd4,t);

    }
    // calculating and printing mean section
    std::cout << "\n\nmean of inputs :" <<fsum/t<< '\n';
    std::cout << "mean of Sq :" << osum/t <<'\n';
    if (xin ==1)
    {
      std::cout << "mean of fx :"<< sfx/t << '\n';
    }
    if (amean == 1)
    {
      std::cout << "Assumed Mean :"<<amean << '\n';
    }
    std::cout<<"\n\n...............Thanks From ADITYA SINGH...................";
  }
  return 0;
}



void printarr(float x[],int t){
  for (int i = 0; i <= t-1; i++) {
    /* code */
    std::cout<<"\n" << i+1 <<" " << x[i] ;
  }

}

float sums(float f[], int t){
  float sum = 0;
  for (int i = 0; i <= t-1; i++){
    /* code */
    sum += f[i];
    std::cout  <<std::setw(10)<<"\t\t"<< sum << '\n';
}
  return sum;
}

float sum2(float f[], int t){
  float sum = 0;
  for (int i = 0; i <= t-1; i++){
    /* code */
    sum += f[i];
}
std::cout <<"\t\t"<< sum << '\n';
  return sum;
}
