#include <stdio.h>
#include <stdlib.h>

float funct(float n){
    float s=0, fact_,fac=1;
    float acc=0;

    for(int i=1; i<=n ;i++){     

        for(int j=i; j!=i-1;j--){

            fact_=1/(fac=fac*j);
        }

        acc+=fact_;
    }
    s=acc+1;

    return s;
}


int main(){
    float valor;
    float res;

    printf("Valor : ");
    scanf("%f", &valor);
    
    res=funct(valor);

    printf("%.2f", res);

    return 0;
}