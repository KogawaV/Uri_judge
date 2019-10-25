#include <stdio.h>

int main(){
    int vetor_valores[3], maior = 0;

    scanf("%d %d %d", &vetor_valores[0], &vetor_valores[1], &vetor_valores[2]);

    //printando o vetor
    /*for(int i = 0; i < 3; i++){
        printf("[%d] ", vetor_valores[i]);
    }*/

    for(int i = 0; i <  3; i++){
        if(vetor_valores[i] > vetor_valores[i + 1]){
            printf("%d eh o maior.\n", vetor_valores[i]);
            break;
        }
    }

    return 0;
}