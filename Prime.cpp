#include <iostream>

using namespace std;

bool eh_primo(int x){
  bool c = 1;
  if(x==1) {
    c = 0;
    return 0;
  }
  for(int i= 2; i<x; i++) {

    if(x%i == 0) {
      c = 0;
      return c;
      break;
    }
    c=1;
  }
	return c;
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}