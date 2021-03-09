#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int v[N];
    int aux[N];
    
    for(int i=0; i<N; i++) {
        cin >> v[i];
        aux[i] = v[i];
    }
    
    sort(v,v+N);
    
    int c = 0;
    int ans[N];
    
    for(int i=0; i<N; i++) {
        if(v[i] != aux[i]) {
            ans[c] = v[i];
            c++;
        }    
    }
    
    cout << c << "\n";
    

    for(int i=0; i<c; i++) {
        if(i==c-1) {
            cout << ans[i];
            return 0;
        }
        
        else cout << ans[i] << " ";
    }

    
    return 0;
}