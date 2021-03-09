#include<iostream>
using namespace std;

int main() {
        int a, b;
        cin >> a >> b;
        int contador = 0;
        int p, p1;
        int contador1 = 0;

        while(contador < a) {
                cin >> p >> p1;        
                if(p+p1 >= b) contador1++;
                contador++;
        }

        cout << contador1;
        return 0;

}