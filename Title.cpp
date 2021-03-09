#include <iostream>
#include<ctype.h>
using namespace std;

string title(string F){
  bool control = 0;
  for(int i=0; i<F.size(); ++i) {
    
    if(F[i] == ' ') {
      control = 0;
      continue;
    }
    
    if(control == 0) {
       if(isupper(F[i]) == 0) F[i] = F[i] - 32;
      control = 1;
    }

    else if(control == 1){
      if(isupper(F[i]) != 0) F[i] = F[i] + 32;
    }
    
  }
  return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
