#include <stdio.h>

int main(void) {
  printf("char: %d bytes / %d bits\n", sizeof(char), sizeof(char) * 8);
  printf("short int: %d bytes / %d bits\n", sizeof(short int), sizeof(short int) * 8);
  printf("int: %d bytes / %d bits\n", sizeof(int), sizeof(int) * 8);
  printf("long int: %d bytes / %d bits\n", sizeof(long int), sizeof(long int) * 8);
  printf("long long int: %d bytes / %d bits\n", sizeof(long long int), sizeof(long long int) * 8);
  printf("float: %d bytes / %d bits\n", sizeof(float), sizeof(float) * 8);
  printf("double: %d bytes / %d bits\n", sizeof(double), sizeof(double) * 8);
  printf("long double: %d bytes / %d bits\n", sizeof(long double), sizeof(long double) * 8);

  return 0;
}
