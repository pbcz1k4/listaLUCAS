#include <stdio.h>
#include <stdlib.h>
//M = 72.2 * altura - 58
//F = 61.1 * h - 44.7


float imc__calculo(char sex, float h){
    int rest = 0;
    if(sex == "m" || sex == "M"){
        rest = (72.2 * h) - 58;
    }
    else rest = (61.1 * h) - 44.7;

    return rest;

}


int main(){
	char sexo;
    float altura, peso_recomendado;
	
    printf("Informe seu SEXO(M/F) e alturaura: ");
	scanf(" %c %f", &sexo, &altura );
    
    peso_recomendado = imc__calculo(sexo,altura);

    printf("%.2f", peso_recomendado);

	return 0;
}