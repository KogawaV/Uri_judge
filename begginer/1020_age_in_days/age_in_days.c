#include <stdio.h>

#define ANOS 365
#define MESES 30

int main(){
    int idade_em_dias = 0, contador_anos = 0, contador_meses = 0, contador_dias = 0;

    scanf("%d", &idade_em_dias);

    while(idade_em_dias >= ANOS){
        idade_em_dias = idade_em_dias - ANOS;
        contador_anos = contador_anos + 1;
    }

    while(idade_em_dias >= MESES){
        idade_em_dias = idade_em_dias - MESES;
        contador_meses = contador_meses + 1;
    }

    contador_dias = idade_em_dias;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", contador_anos, contador_meses, contador_dias);

    return 0;
}