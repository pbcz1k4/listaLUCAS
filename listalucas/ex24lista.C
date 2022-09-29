#include<stdio.h>
#include<stdlib.h>

int pot(int a,int b){
    int tot=1,j=0;

    for(int i=1;i<=b;i++){
        for(j;j<i;j++){
            tot = tot*a;
        }
    }
    return tot;
}


int main(){

    int x,z;
    int poten;

    printf("Informe X e Z:");
    scanf("%i %i",&x,&z);

    poten=pot(x,z);

    printf("a^b: %i",pot);
    return 0;

}