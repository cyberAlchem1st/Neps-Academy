#include<stdio.h>

int main() {
  int a, m;
  scanf(" %d %d", &a, &m);

  if(a+m <= 50) printf("S");
  else printf("N");
  return 0;
}