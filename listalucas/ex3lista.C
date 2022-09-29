#include <stdio.h>
#include <stdlib.h>
int verificar_numero(int n);
int main(void)
{
    int numero, retorno;

    printf("Digite um numero diferente de zero para ser verificado:");
    scanf("%i", &numero);

    retorno = verificar_numero(numero);

        if (retorno == 1)
           printf("O numero %i e positivo \n",numero);  
            

        else
           printf("O numero %i e negativo \n",numero);

    system("pause");
    return 0;
}

int verificar_numero(int n)
{
    int r;
    if (n > 0)
        r = 1;
    else
        r = 0;

    return (r);
}