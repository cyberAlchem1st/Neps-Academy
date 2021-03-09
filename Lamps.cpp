#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int c;
  int a = 0;
  int b = 0;

  for(int i=0; i<n; i++) {
    cin >> c;
    
    if(c==1) {
      if(a==0) a = 1;
      else if(a==1) a = 0;
    }

    else if(c==2) {
      if(a==0) a  = 1;
      else if(a==1) a = 0;
      if(b==0) b = 1;
      else if(b==1) b=0;
    }
    }

    cout << a << "\n" << b;

    return 0;
  }