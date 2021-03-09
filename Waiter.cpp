#include<stdio.h>

int main() {
  int n;
  scanf(" %d", &n);

  int i = 0;
  int t = 0;
  int a, b;
  
  while(i<n) {
    scanf(" %d %d", &a, &b);
    if(a>b) t += b;
    i++;
  }

  printf("%d", t);
  return 0;
}