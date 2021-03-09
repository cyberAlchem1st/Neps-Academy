#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if(n==0) cout << "nulo";
  else if(n>0) cout << "positivo";
  else cout << "negativo";

  return 0;
}