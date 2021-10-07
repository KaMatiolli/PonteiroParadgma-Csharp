#include <stdio.h>

int main() {

  int *p;
  int x = 10;

  p = &x;
  x = 20;

  printf("\nConteudo de X %d\n", x);
  printf("\nConteudo de P %d\n", *p);

  *p = 30;

  printf("\nEndereço de X %p\n", p);
  printf("\nEndereço de X %u\n", p);
  printf("\nConteudo de X %d\n", x);
  printf("\nConteudo de P %d\n", *p);

  return 0;
}