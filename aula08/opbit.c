#include <stdio.h>

/* &
 * |
 * ^ xor
 * ~
 * <<
 * >>
*/ 

int main(void) {
  int a = 359;
  int chave = 3;

  printf("O resultado eh %d\n", a ^ chave); 

  return 0;
}
