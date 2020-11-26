#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main() {
  int N;
  ifstream SumNum("datensumme.txt");
  ifstream SumNum2("datensumme.txt");
  cout<< "how much total numbers are?";
  N=234;
  double a,mean,i,sum=0;
  for(i=0;i<N;i++)
  {SumNum>>a;
  sum=sum+a;
  }
  mean=sum/N;
  cout<<mean<<endl;
  sum=0;
  double v,b;
  for(b=0;b<N;b++)
  {SumNum2>>a;
   sum=sum+ (a-mean)*(a-mean); 
   }
  v=sum/N;
  cout<<v<<endl;
  cout<<sqrt(v);
}