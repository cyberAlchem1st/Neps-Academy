#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int v[N];
    
    for(int i=0; i<N; i++) cin >> v[i];
    
    sort(v,v+N);
    
    for(int i=0; i<N; i++) {
        if(i==N-1) cout << v[i];
        
        else cout << v[i] << " ";
    }
    return 0;
}