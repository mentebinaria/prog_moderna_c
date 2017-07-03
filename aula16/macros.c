#include <stdio.h>
#define QUAD(x) (x*x)
#define MAX(x,y) (x > y ? x : y)
#define MAX3(x,y,z) \
  (MAX(MAX(x,y), MAX(y,z)))

#define DEBUG

#define VAR(x) printf("A variavel "#x" tem valor: %d\n", x);

int main(void) {

  int numero = 90;

  printf("%d\n", QUAD(8));
  printf("%d\n", MAX3(300, 41, 9111));

#ifdef DEBUG
  printf("%s: Estou na linha %d\n", __TIME__, __LINE__);
  VAR(numero);
#endif

  void *p = (void*)0; //NULL

  if (p == NULL)
    printf("p eh nulo\n");



  return 0;
}
