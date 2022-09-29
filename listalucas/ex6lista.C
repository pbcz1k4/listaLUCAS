#include <stdio.h>
#include <stdlib.h>

int converte_para_dias(int, int, int);

int main(int argc, char *argv[]) {

  int a, m, d, dia_total;

  if (argc < 4) {
    printf("ERROR: Numero de argumentos insuficiente!\n");
    return 1;
  }
  a = atoi(argv[1]);
  m = atoi(argv[2]);
  d = atoi(argv[3]);

  dia_total = converte_para_dias(a, m, d);

  printf("%i:%i:%i totaliza %is.\n", a, m, d, dia_total);

  return 0;
}

int converte_para_dias(int anos, int meses, int dias) {
  if (anos < 0 || meses < 0 || dias < 0)
    return -1;

  return anos*365 + meses*30 + dias;
}
