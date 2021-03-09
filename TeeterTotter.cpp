#include<iostream>
using namespace std;

int main() {
  int p1, c1, p2, c2;
  cin >> p1 >> c1 >> p2 >> c2;
  
  int t1 =  p1*c1;
  int t2 = p2*c2;

  if(t1<t2) cout << 1;
  else if(t1>t2) cout << -1;
  else cout << 0;

  return 0;
}