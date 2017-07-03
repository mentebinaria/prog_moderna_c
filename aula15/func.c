#include <stdio.h>
#include <stdlib.h>

// tipo_retorno nome(tipo_arg1 nome_arg1, tipo_arg2 nome_arg2)

void tchau(char *msg) {
  fprintf(stderr, "ERRO: %s\n", msg);
  exit(1);
}

int main(void) {
  int num1;

  printf("Digite o num1: ");
  scanf("%d", &num1);

  if (num1 < 1)
    tchau("o num1 eh menor que 1");
  else if (num1 < 1900)
    tchau("Vc eh mto velho");

  printf("Voce nasceu em %d\n", num1);

  return 0;
}
