#include <fstream>
#include <iostream>
using namespace std;
int main() {

  ifstream fin("datensumme.txt");
  fstream gin("mittelwerte.txt");
  fstream kin("varianzen.txt");
  double a, sum = 0, mean;
  int i, j;
  for (i = 0; i < 26; i++) {
    sum = 0, mean = 0;
    for (j = 0; j < 9; j++) {
      fin >> a;
      sum = sum + a;
    }
    mean = sum / 9;
    // cout << mean << endl;
    gin << mean << endl;
  }
  double v;
  fin.clear();
  fin.seekg(SEEK_SET);
  gin.clear();
  gin.seekg(SEEK_SET);
  for (i = 0; i < 26; i++) {
    sum = 0, mean = 0;
    gin >> mean;
    for (j = 0; j < 9; j++) {
      fin >> a;
      sum = sum + (a - mean) * (a - mean);
    }
    v = sum / 9;
    // cout << v << endl;
    kin << v << endl;
  }
  gin.clear();
  gin.seekg(SEEK_SET);
  kin.clear();
  kin.seekg(SEEK_SET);
  sum = 0;
  double c;
  for (i = 0; i < 26; i++) {
    gin >> c;
    sum = sum + c;
  }
  mean = sum / 26;
  cout << mean << endl;
  double d, z = 0;
  for (i = 0; i < 26; i++) {
    kin >> d;
    z = z + d;
  }
  mean = z / 26;
  cout << mean << endl;
}
