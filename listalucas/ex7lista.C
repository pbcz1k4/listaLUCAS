#include <stdio.h>
#include <stdlib.h>

int verificar(int);

int main() {
 int numero;

  printf("Digite um numero para saber se e perfeito ou nao: ");
  scanf("%i", &numero);
  
printf("1 = Verdadeiro\n0 = Falso\n");
printf("O valor booleano e %i", verificar(numero));
  
  return 0;
}

int verificar(int n) {
int div, i, soma = 0;

  for (i=1;i<= n/2;i++) {
    if (n % i == 0)
      soma += i;
  }
  if (soma == n)
    return 1;
  else  
    return 0;
}