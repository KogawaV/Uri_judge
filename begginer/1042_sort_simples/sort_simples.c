#include <stdio.h>

int main(){
    int vetor_ordem_inserida[3], vetor_2[3], i = 0, j = 0, temp = 0;

    scanf("%d %d %d", &vetor_ordem_inserida[0], &vetor_ordem_inserida[1], &vetor_ordem_inserida[2]);


    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            if(vetor_ordem_inserida[j] > vetor_ordem_inserida[i]){
                temp = vetor_ordem_inserida[i];
                vetor_ordem_inserida[i] = vetor_ordem_inserida[j];
                vetor_ordem_inserida[j] = temp;
            }
        }
    }

    for(i = 0; i < 3; i++){
        printf("%d\n", vetor_2[i]);
    }
    printf("\n");
    for(i = 0; i < 3; i++){
        printf("%d\n", vetor_ordem_inserida[i]);
    }

    return 0;
}