#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  int ans = 0;

  ans += n/100;
  n = n%100;

  ans+= n/50;
  n = n%50;

  ans += n/25;
  n = n%25;

  ans += n/10;
  n = n%10;

  ans += n/5;
  n = n%5;

  ans += n;

  cout << ans;
}