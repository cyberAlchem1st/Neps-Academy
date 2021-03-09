#include<iostream>
using namespace std;

int main() {
  string a, b, c;

  cin >> a;

  int n = a.size();

  for(int i=0; i<n; i++) {

    if(a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u') {
      b += a[i];
    }

  }

  for(int i=n-1; i>=0; i--) {

    if(a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u') {
      c += a[i];
    }

  }

if(b==c) cout << "S";
else cout <<"N";

  return 0;
}