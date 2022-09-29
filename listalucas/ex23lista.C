#include <stdio.h>
#include <math.h>

double vargas(int n)
{
    double S = 0.0;
    for (int i = 1 ; i <= n; i++)
        S += ((pow(i,2)+1))/(i+3);
    return S;
}


int main()
{
    int n;
    printf("digite n: \n");
    scanf("%i",&n);
    //fflush(stdin)
    printf("%lf", vargas(n));

}