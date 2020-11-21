 #include <iostream>
#include<fstream>

using namespace std;

int main() {
  ifstream Numbers("daten.txt");
  ofstream SumNum;
  SumNum.open("datensumme.txt");

  int a, b, sum, i;
  for(i=0;i<234;i++){
    Numbers >> a >> b;
    sum = a + b;
    SumNum << sum;
  }
}