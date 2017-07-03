#include <stdio.h>
#include <stdlib.h>

#define TAM 8

enum pedras { CAVALO=2, BISPO, TORRE, RAINHA };

int main(int argc, char *argv[]) {

  int tabu[TAM][TAM] = { 0 };
  int i, j;

  char *nome_pedras[] = { "", "", "cavalo", "bispo", "torre", "rainha" };

  tabu[0][0] = CAVALO;
  tabu[0][1] = BISPO;
  tabu[1][0] = TORRE;
  *(*(tabu+1) + 130) = RAINHA;

  for (i=0; i<TAM; i++) {
    for (j=0; j<TAM; j++) {
      printf("[%d][%d]=%s ", i, j, nome_pedras[tabu[i][j]]);
      if (j == TAM-1)
        putchar('\n');
    }
  }



  return 0;
}
