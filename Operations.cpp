#include<stdio.h>

int main() {
  char ans;
  scanf(" %c", &ans);
  double a, b;
  scanf(" %lf %lf", &a, &b);

  if(ans == 'M') printf("%.2lf", a*b);
  if(ans == 'D') printf("%.2lf", a/b);

  return 0;
}