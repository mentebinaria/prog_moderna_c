#include <stdio.h>
#include <string.h>
#include <limits.h>

struct st2 {
  int a;
  int b;
  int c;
};

struct st {
  unsigned char id;
  unsigned int num;
  //struct st2 s2;
};

int main(void) {
  struct st s;

  s.num = 2017;
  printf("s.num: %u\n", s.num);

  memset(&s, 255, sizeof(struct st));
  printf("s.num: %u\n", s.num);

  printf("sizeof(struct st): %d\n", sizeof(struct st));

  return 0;
}
