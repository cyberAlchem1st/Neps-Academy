#include <iostream>
#include <algorithm>

struct consulta{
  int inicio;
  int fim;
};

bool Compare(consulta a, consulta b){
  return a.fim < b.fim;
}

using namespace std;

int main() {
  int N;

  cin >> N;

  consulta consultas[N];

  for(int i=0; i<N; i++) {
    cin >> consultas[i].inicio;
    cin >> consultas[i].fim;
  }

  sort(consultas, consultas+N, Compare);

  int ans = 0;
  int livre = 0;

  for(int i=0; i<N; i++) {
    
    if(consultas[i].inicio >= livre) {
      ans++;
      livre = consultas[i].fim;
    }

    else continue;

  }

  cout << ans;

  return 0;

}