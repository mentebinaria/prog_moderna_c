#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  long int c[3];

  printf("O tamanho de c eh: %zu\n", sizeof c);
  printf("O numero de elementos de c eh: %zu\n", sizeof c / sizeof c[0]);

  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 67;

  printf("O elemento 0 de c eh: %d\n", c[0]);
  printf("O elemento 1 de c eh: %d\n", c[1]);
  printf("O elemento 2 de c eh: %d\n", c[2]);
  printf("O elemento 5 de c eh: %d\n", c[5]);

  printf("O endereco do array c em memoria: %p\n", c);
  printf("O endereco do array &c em memoria: %p\n", &c);
  printf("O endereco do primeiro elemento do array c em memoria: %p\n", &c[0]);
  printf("O endereco do primeiro elemento do array c em memoria: %p\n", &c[1]);

  return 0;
}
