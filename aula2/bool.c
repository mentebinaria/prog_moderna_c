#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool b;

  printf("O tamanho de b (bool) eh: %lu\n", sizeof b);

  b = false;
  printf("O valor de b eh: %i\n", b);

  return 0;
}
