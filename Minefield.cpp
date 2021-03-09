#include<iostream>
using namespace std;

int main() {
  int n;
  int v[60], s[60];

  cin >> n;
  
  v[0] = 0;
  v[n+1] = 0;

  for(int i=1; i<n+1; i++) cin >> v[i];
  
  for(int i=1; i<n+1; i++) {
    int soma = v[i-1] + v[i] + v[i+1];
    s[i] = soma; 
  }

  for(int i=1; i<n+1; i++) cout << s[i] << "\n";

  return 0;
}