#include <stdio.h>

void funcao(void) {
  register int i;

  for (i=0; i<3; i++)
    printf("%d\n", i);
}

int main(void) {
  funcao();
  funcao();
  funcao();
  return 0;
}
