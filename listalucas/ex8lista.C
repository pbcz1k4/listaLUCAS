#include <stdio.h>
#include <stdlib.h>

int verificar(int);

int main() {
  int val;

  printf("Digite um val inteiro positivo ou negativo:");
  scanf("%i", &val);

  printf("1 = Positivo\n0 = Negativo\n");
  printf("O val booleano = %i", verificar(val));
  
  return 0;
}

int verificar(int v) {

  if (v < 0)
    return 0;
  else 
    return 1;
}