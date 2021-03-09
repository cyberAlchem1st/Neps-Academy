#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  int v[n];

  long long ans = 0;
  int last = -1;


  for(int i=0; i<n; i++) {
    cin >> v[i];
  }

  for(int i=0; i<n; i++) {
      if(min(v[i], m-v[i]) >= last) {
      last = min(v[i], m-v[i]);
      v[i] = min(v[i], m-v[i]);

    }

    else if(max(v[i], m-v[i]) >= last) {
      last = max(v[i], m-v[i]);
      v[i] = max(v[i], m-v[i]);

    }

    else {
      cout << "-1\n";
      return 0;
    }
  }

  for(int i=0; i<n; i++) ans += v[i];

  cout << ans << endl;

  return 0;
}