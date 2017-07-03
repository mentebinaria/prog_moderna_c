#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  char s[10] = "fernando"; // 0-9

  printf("%c\n", s[7]);
  printf("%c\n", *(s+7) );

  printf("%c\n", 7[s] );
  printf("%c\n", *(7+s) );

  return 0;
}
