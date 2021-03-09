#include<stdio.h>

int main() {
  int bino, cino;
  scanf(" %d %d", &bino, &cino);

  int soma = bino + cino;

  if(soma%2 == 0) printf("Bino");
  else printf("Cino");

  return 0;
}