#include<iostream>
using namespace std;

int main() {
  
  string numbers0 = "0123456789";
  int n;
  
  cin >> n;

  string teste;
  string numbers1;

  for(int i=0; i<n; i++) {
    cin >> teste;
    numbers1 += teste;
  }

  int aux = 0;

  for(int i=0; i<10; i++) {
    for(int j=0; j < numbers1.size(); j++) {
      if(numbers0[i] == numbers1[j]) aux++;
    }
    cout << i << " - " << aux << "\n";
    aux = 0;  
  }


  return 0;

}