#include <stdio.h>
#include <stdlib.h>

int converte_horas(int);
int converte_minutos(int);
int segundos_restantes(int);

int main() {
int temp;
  
  printf("Digite o temp em (s): ");
  scanf("%i", &temp);

  printf("O tempo foi de %ih:%imin:%is", converte_horas(temp), converte_minutos(temp), segundos_restantes(temp));
  
  return 0;
}

int converte_horas(int s) {
  int h;
  
  h = s / 3600;
  return h;
}

int converte_minutos(int s) {
  int minutos, resto;

  resto = s % 3600;
  minutos = resto / 60;
  return minutos;
}

int segundos_restantes(int s) {
  int segundos, resto;

  resto = s % 3600;
  segundos = resto % 60;
  return segundos;
}