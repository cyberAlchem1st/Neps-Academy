#include<stdio.h>

int main() {
  float a, b;
  scanf(" %f %f", &a, &b);
  float media = (a+b)/2;

  if(media >= 7) printf("Aprovado");
  else if(media>=4) printf("Recuperacao");
  else printf("Reprovado");

  return 0; 
}