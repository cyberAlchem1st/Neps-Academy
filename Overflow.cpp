#include<iostream>
using namespace std;

int main() {
  int N, Q, P;
  char C;

  cin >> N >> P >> C >> Q;

  if(C=='+') {
    if(P+Q > N) cout << "OVERFLOW";
    else cout << "OK";
  }
  
  else if(C=='*') {
    if(P*Q > N) cout << "OVERFLOW";
    else cout << "OK";
  }

return 0;
}