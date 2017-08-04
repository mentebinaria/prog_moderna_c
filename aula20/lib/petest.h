#include <stdbool.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

#pragma pack(push, 1)

typedef struct {
  uint16_t e_magic;
  uint16_t e_cblp;
  uint16_t e_cp;
  uint16_t e_crlc;
  uint16_t e_cparhdr;
  uint16_t e_minalloc;
  uint16_t e_maxalloc;
  uint16_t e_ss;
  uint16_t e_sp;
  uint16_t e_csum;
  uint16_t e_ip;
  uint16_t e_cs;
  uint16_t e_lfarlc;
  uint16_t e_ovno;
  uint16_t e_res[4];
  uint16_t e_oemid;
  uint16_t e_oeminfo;
  uint16_t e_res2[10];
  uint32_t e_lfanew; // sizeof(IMAGE_DOS_HEADER) + size of MS-DOS stub
} IMAGE_DOS_HEADER;

#pragma pack(pop)


typedef struct {
  char *filepath;
  IMAGE_DOS_HEADER *hdr_dos;
} PEFILE;

bool petest_ispe(PEFILE *pe);
bool petest_init(PEFILE *pe);
void petest_deinit(PEFILE *pe);
