#include <iostream>
#define phi 3.14
using namespace std;
int main () {
  int r, t;
  float volume, luas;
  cin >> r >> t;
  luas =2*phi*r*(r+t);
  volume =phi*r*r*t;
  cout << "jari-jari ="<< " " << r <<endl;
  cout << "tinggi =" << " " << t <<endl;
  cout << "luas permukaan tabung =" <<" " << luas <<endl;
  cout << "volume tabung =" <<" " <<volume;
}