#include<iostream>
using namespace std;

int main() {
        int a, ad, b, bc;

        cin >> a >> ad >> b >> bc;

        if(a*ad == b*bc) cout << 0;
        else if(a*ad > b*bc) cout << -1;
        else cout << 1;

        return 0;

}