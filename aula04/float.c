#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  float f = 40.334309f; // sufixo de float f

  printf("O tamanho de f (float): %zu bytes / %zu bits\n", sizeof f, sizeof f * 8);
  printf("Valor de f: %f\n", 10 / 3);

  return 0;
}
