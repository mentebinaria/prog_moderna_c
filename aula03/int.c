#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  int i = INT_MAX;

  printf("O tamanho de i (int): %lu bytes / %lu bits\n", sizeof i, sizeof i * 8);
  printf("Valor de i: %d\n", i);

  return 0;
}
