int verifica_maior(int, int, int);
int verifica_medio(int, int, int);
int verifica_menor(int, int, int);

int main() {
  int a, b, c;

  printf("Digite 3 valores para serem testados: ");
  scanf("%i %i %i", &a, &b, &c);

  printf("%i < %i < %i", verifica_menor(a, b, c), verifica_medio(a, b, c), verifica_maior(a, b, c));
  
  return 0;
}

int verifica_maior(int num1, int num2, int num3){
if (num1 > num2 && num1 > num3)
  return num1;
else if (num2 > num1 && num2 > num3)
  return num2;
else if (num3 > num1 && num3> num2)
  return num3;
}

int verifica_menor(int num1, int num2, int num3){
if (num1 < num2 && num1 < num3)
  return num1;
else if (num2 < num1 && num2 < num3)
  return num2;
else if (num3< num1 && num3 < num2)
  return num3;
}

int verifica_medio(int num1, int num2, int num3){
if (num1 > num2 && num1 < num3)
  return num1;
else if (num2 > num1 && num2 < num3)
  return num2;
else if (num3 > num1 && num3 < num2 )
  return num3;
}