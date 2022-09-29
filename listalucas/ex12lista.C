#include <stdio.h>
#include <stdlib.h>

struct convert{
    int horas,minutos;
};

typedef struct convert Struct;

Struct cont_time(int h1, int m1, int h2, int m2){
    int minutotal=0;
    int horatotal=0;
    Struct res;
    
    if(m2>=m1){
        minutotal = m2-m1;
    }
    else{
        minutotal = (60-(m1-m2));
    }
    
    if(h2>h1){
        horatotal = h2-h1;
    }

    else if(h1 == h2 ){
        if(m1>m2){
            horatotal = 23;
        }
        else{
            horatotal = 0;
        }
    }
    
    else{
        horatotal = ((24-h1)+h2);
    }

    minutotal += horatotal*60;
    res.horas = horatotal;
    res.minutos = (minutotal%60);

    return res;
}




int main(){
    int hora_inicio,hora_fim,min_inicio,min_fim;
    Struct resp;

    printf("inicio/final: ");
    scanf("%i:%i/%i:%i", &hora_inicio,&min_inicio,&hora_fim,&min_fim);

    resp = cont_time(hora_inicio,min_inicio,hora_fim,min_fim);

    printf("%d:%d", resp.horas,resp.minutos);



    return 0;
}