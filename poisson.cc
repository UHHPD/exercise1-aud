#include<iostream>
#include<fstream>
#include<vector>
#include<cmath>
using namespace std;
double poisson(double mu, int k){
  double p=(pow(mu,k))*(exp(-mu))/(tgamma(k+1));
  return p;
}
int main() {
  ifstream ifile("datensumme.txt");
  ofstream gin("hist.txt");
  ofstream gout("histpoi.txt");

  vector<int> frequency(10, 0);

  int n,m;
  while(ifile >> n) {
    ++frequency[n];
  }

  for(int i = 0; i < 10; ++i) {
    gin<<i<<" "<<frequency[i]<<endl;
    gout<<i<<" "<<frequency[i]<<" "<<poisson(3.11538,i)*234<<endl;
  }

  return 0;
}