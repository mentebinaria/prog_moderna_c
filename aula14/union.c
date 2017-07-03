#include <stdio.h>
#include <string.h>

union st {
  unsigned char id;
  unsigned int num;
};

int main(void) {
  union st s;

  s.num = 2017;

  // zuera
  s.id = 0xdf;

  printf("s.num: %d\n", s.num);

  return 0;
}
