#include <stdio.h>
#include <stdlib.h>

int somatoria(int);

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    printf("\nO somatoria %i", somatoria(numero));

    return 0;
}

int somatoria(int n)
{
    int x, soma=0;

    if (n < 0)
        return -1;
    for (x = 0; x <= n; x++)
    {
        soma += x;
    }
    return soma ;
}