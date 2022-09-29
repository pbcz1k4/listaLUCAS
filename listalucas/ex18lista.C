#include <stdio.h>
#include <stdlib.h>

int taboada(int);

int main() {
  int num, i;

  printf("Digite o num para fazer sua taboada: ");
  scanf("%i", &num);
  
  taboada(num);
  
  return 0;
}

int taboada(int n) {
  int i;
  
  for(i=1;i<=n;i++) {
    printf("%3i x %3i = %3i\n", i, n, i*n);
  }
}