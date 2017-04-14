#include <stdio.h>

/*
 * Conjuncao (E, AND)
 * 0 0 - Falso - 0
 * 0 1 - Falso - 0
 * 1 0 - Falso - 0
 * 1 1 - Verdadeiro - 1
 *
 * Disjuncao (OU, OR)
 * 0 0 - Falso - 0
 * 0 1 - Verdadeiro - 1
 * 1 0 - Verdadeiro - 1
 * 1 1 - Verdadeiro - 1
*/

// >, <, ==, !=, >=, <=

int main(void) {
  int a = 8;
  int b = 8;

  printf("O resultado eh %d\n", !(!(32 > 8) && 3 == 9) );

  return 0;
}
