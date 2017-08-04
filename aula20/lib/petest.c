#include "petest.h"

bool petest_ispe(PEFILE *pe) {
    return (pe->hdr_dos->e_magic == 0x5a4d);
}

bool petest_init(PEFILE *pe) {
  FILE *f = fopen(pe->filepath, "rb");
  
  if (!f)
    return false;

  pe->hdr_dos = malloc(sizeof(IMAGE_DOS_HEADER));
  if (pe->hdr_dos == NULL)
    return false;

  fread(pe->hdr_dos, sizeof(IMAGE_DOS_HEADER), 1, f);

  fclose(f);

  return true;

}

void petest_deinit(PEFILE *pe) {
  if (pe->hdr_dos)
    free(pe->hdr_dos);
}

