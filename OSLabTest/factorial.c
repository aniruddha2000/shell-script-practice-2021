#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int i = 1;
  int n = atoi(argv[1]);
  int fact = 1;
  while (i <= n) {
    fact = fact * i;
    i++;
  }
  printf("%d\n", fact);
  return 0;
}
