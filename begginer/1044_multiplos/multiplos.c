#include <stdio.h>

int verificar_multiplicidade(int numero_a, int numero_b);

int main(){
    int valor_a = 0, valor_b = 0;
    scanf("%d %d", &valor_a, &valor_b);

    verificar_multiplicidade(valor_a, valor_b);

    return 0;
}

int verificar_multiplicidade(int numero_a, int numero_b){
    if(numero_a > numero_b){
        if(numero_a % numero_b == 0){
            printf("Sao Multiplos\n");
        }else{
            printf("Nao sao Multiplos\n");
        }
    }else{
        if(numero_b % numero_a == 0){
            printf("Sao Multiplos\n");
        }else{
            printf("Nao sao Multiplos\n");
        }
    }
}