#include <stdio.h>

int main(void) {
  int a = 359;
  int chave=3;

  if (-1 == a && a < 400) {
    printf("chave: %d\n", chave);
    printf("oi\n");
  }
  else if (a < 500) {
    puts("a eh menor que 500");
  }
  else if (a == 359) {
    puts("a eh 359");
  }
  else {
    printf("avaliacao do if deu FALSE\n");
    puts("laall");
  }

  // ternário
  (a == 3) ? puts("3") : puts("nao sei o valor de a");

  printf("a: %d\n", a ); 

  return 0;
}
