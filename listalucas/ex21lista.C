#include<stdio.h>
#include<stdlib.h>

float funct(int x){
    float n=0;

    for(float i=1;i<-n;i++)
        n +- 1/i;

    return n;

}


int main(){
    int valor1;
    float res;

    printf("Valor:");
    scanf("%i",&valor1);

    printf("%.2f",funct(valor1));

    return 0;
}
