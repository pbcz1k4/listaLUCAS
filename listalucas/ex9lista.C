#include <stdio.h>
#include <stdlib.h>

int verificar(int);

int main() {
  int valor;
  
  printf("Digite um valor inteiro: ");
  scanf("%i", &valor);
  
  printf("1 = Par\n0 = impar\n");
  printf("O valor booleano = %i", verificar(valor));
    
  return 0;
}

int verificar(int v) {
  if (v % 2 == 0)
    return 1;
  else
    return 0;
}