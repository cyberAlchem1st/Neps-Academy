#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int d;
  int s = 0;
  int i = 0;

  while(i<n) {
    cin >> d;
    s += d;
    if(s>=1000000) { 
      cout << ++i;
      i = n;
    }

    i++;
  }

  return 0;
}