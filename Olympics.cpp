#include <iostream>
#include <algorithm>

using namespace std;

struct Pais {
    int nome = 0;
    int ouro = 0;
    int prata = 0;
    int bronze = 0;
};

bool comp(Pais a, Pais b) {
    if(a.ouro != b.ouro) return a.ouro>b.ouro;
    else if(a.prata != b.prata) return a.prata>b.prata;
    else if(a.bronze != b.bronze) return a.bronze>b.bronze;
    
    else {
        return a.nome < b.nome;
    }
}



int main() {
    int N, M;
    
    cin >> N >> M;
    
    Pais pais[N];
    
    for(int i=1; i<=N; i++) {
        pais[i-1].nome = i;
    }
    
    
    for(int i=0; i<M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        pais[a-1].ouro++;
        pais[b-1].prata++;
        pais[c-1].bronze++;
    }
    
    sort(pais, pais + N, comp);
    
    for(int i=0;i<N;i++){
        if(i==N-1) cout << pais[i].nome << endl;
        else cout<<pais[i].nome << " "; 
    }
    
    return 0;
}