#include<iostream>
using namespace std;

int main() {
  
  int v[10010];
  int n;
  cin >> n;

  for(int i=0; i<n; i++) cin >> v[i];
  
  int c = 0;

  for(int i=2; i<n; i++) if(v[i-2] == 1 && v[i-1] == 0 && v[i] == 0) ++c;
  
  cout << c;
  return 0;
}