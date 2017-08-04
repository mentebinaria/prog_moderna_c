#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h"

void fatal(char *msg) {
  fprintf(stderr, "Erro: %s\n", msg);
  exit(1);
}

void usage(void) {
  printf("Uso:\n\treadpe <arquivo.exe>\n");
  exit(1);
}

int main(int argc, char *argv[]) {

  if (argc != 2)
    usage();

  PEFILE pe;
   /* typedef struct {
   *   char *filepath;
   *   IMAGE_DOS_HEADER *hdr_dos;
   * } PEFILE; */

  pe.filepath = argv[1];

  petest_init(&pe);
  if (petest_ispe(&pe))
    printf("Eh um PE.. continuando...\n");
  else
    fatal("nao eh nao. Saindo...");

  printf("File: %s\n", pe.filepath);
  printf("MZ header: %x\n", pe.hdr_dos->e_magic);
  printf("COFF header offset: %x\n", pe.hdr_dos->e_lfanew);

  petest_deinit(&pe);

  return 0;
}
