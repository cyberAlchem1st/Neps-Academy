#include <iostream>
using namespace std;

int mov(int n)
{
    if (n != 0)
        return (2*mov(n-1));
    else
        return 1;
}

int main() {
    int n, teste = 0;
    
    while(1) {
        teste++;
        cin >> n;
        
        if(n == 0) return 0;
        
        cout << "Teste " << teste << "\n" << mov(n) - 1  << "\n" << "\n";
    }
    

    
    
    return 0;
}