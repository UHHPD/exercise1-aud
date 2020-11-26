#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream fin("datensumme.txt");
  fstream gin("mittelwerte.txt");
  ofstream kin("varianzen.txt");
  double a,sum=0,mean,i,j;
  for(i=0;i<26;i++)
  {sum=0,mean=0;
    for(j=0;j<9;j++)
{fin>>a;
sum=sum+a;
}
mean=sum/9;
cout<<mean<<endl;
gin<<mean<<endl;
  }
  double v;
  fin.clear();
  fin.seekg(SEEK_SET);
  gin.clear();
  gin.seekg(SEEK_SET);
for(i=0;i<26;i++)
{sum=0,mean=0;
gin>>mean;
for(j=0;j<9;j++)
{fin>>a;
sum=sum+(a-mean)*(a-mean);
}
v=sum/9;
cout<<v<<endl;
kin<<v<<endl;
}
}