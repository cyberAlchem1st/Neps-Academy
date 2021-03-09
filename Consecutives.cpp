#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a = 0;
  int b = 0;
  int c = 0;
  int t=0;

  for(int i=0; i<n; i++) {
    cin >> a;
    if(a == b) {
      c++;
      if (c>t) t=c;
    }

    else if(a != b) {
        if(c>t) t=c;
        else c = 0;
    }
    b = a;
  }

  cout << t+1;
  return 0;
 }