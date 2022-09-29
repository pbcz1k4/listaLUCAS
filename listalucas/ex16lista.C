#include <stdio.h>

double fatorial(int n);
int main(void){
    int num = 10;//<--Inserir numero para realizar seu fatorial//
    printf("Fatorial de %d = %.0lf",num,fatorial(num));
    return 0;
}

double fatorial(int n){
    double fat;
    if ( n <= 1 )
        return (1);
    else{
       return n * fatorial(n - 1);
    }
}