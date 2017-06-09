#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int i; // 4 bytes alocados para um int32

  printf("endereco de i: %p\ntamanho de i: %zu\n\n", &i, sizeof i);

  int *p = NULL;
  printf("endereco de p: %p\ntamanho de p: %zu\n\n", &p, sizeof p);

  printf("conteudo de p: %p\n\n", p);
  printf("p = &i;\n\n");
  p = &i;
 
  printf("conteudo de p: %p\n\n", p);
  i = 9;

  printf("*p = %d\n", *p);

  int *j = NULL;

  printf("endereco pra onde j aponta: %p\n", j);
  j = malloc(sizeof (int));

  printf("endereco pra onde j aponta: %p\n", j);

  *j = 9;

  printf("j: %d\n", *j);
  free(j);

  return 0;
}
