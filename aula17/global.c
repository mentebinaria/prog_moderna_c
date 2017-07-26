#include <stdio.h>

int i;

void funcao(void) {

  for (i=0; i<3; i++)
    printf("%d\n", i);

}

int main(void) {
  funcao();
  i++;
  return 0;
}
