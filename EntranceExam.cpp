#include<iostream>
using namespace std;

int main() {
  int N;
  string A, B;

  cin >> N >> A >> B;

  int c = 0;

  for(int i = 0; i<N; i++) {
    if(A[i] == B[i]) c++;
  }

  cout << c;

  return 0;
}