#include<cmath>
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
  int n;
  double x;
  cin >> n;

  for(int i=0; i<n; i++) {
    cin >> x;
    cout.precision(4);
    cout.setf(ios::fixed);
    cout << sqrt(x) << "\n";
  }

  return 0;

}