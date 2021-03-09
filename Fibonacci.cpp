#include<iostream>
using namespace std;

int fibonacci(int N) {
  if(N < 2) return 1;
  N = fibonacci(N-1) + fibonacci(N-2);
  return N;
}

int main() {
  int n;
  cin >> n;

  cout << fibonacci(n);
  return 0;
}