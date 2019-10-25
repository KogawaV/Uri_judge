#include <stdio.h>
#define QUANTIDADE_NOTAS 4

double calc_average(double *vetor_notas);

int main(){
    double vetor_notas[QUANTIDADE_NOTAS];
    int i = 0;

    scanf("%lf %lf %lf %lf", &vetor_notas[0], &vetor_notas[1], &vetor_notas[2], &vetor_notas[3]);
    calc_average(vetor_notas);

    return 0;
}

double calc_average(double *vetor_notas){
    //printf("1ª: %lf\n2ª: %lf\n3ª: %lf\n4ª: %lf\n", vetor_notas[0], vetor_notas[1], vetor_notas[2], vetor_notas[3]);
    int i = 0;
    double soma_notas = 0.00, nota_exame = 0.00, media_ponderada = 0.00, media_final= 0.00;

    soma_notas = (vetor_notas[0]*2) + (vetor_notas[1]*3) + (vetor_notas[2]*4) + (vetor_notas[3] * 1);
    media_ponderada = ((soma_notas) / (1 + 2 + 3 + 4));

    //printf("Média: %lf\n", media_ponderada);

    if(media_ponderada < 5.00){
        printf("Média: %.1lf\n", media_ponderada);
        printf("Aluno reprovado.\n");
    }else if((media_ponderada >= 5.00) && (media_ponderada <= 6.9)){
        //printf("Aluno de exame.\n");
        scanf("%lf", &nota_exame);
        media_final = ((nota_exame + media_ponderada)/2);
        if(media_final >= 5){
            printf("Média: %.1lf\n", media_ponderada);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1lf\n",nota_exame);
            printf("Aluno aprovado.\n");
            printf("Média final: %.1lf\n", media_final);
        }else{
            printf("Média: %.1lf\n", media_ponderada);
            printf("Aluno reprovado.\n");
        }
    }else{
        printf("Média: %.1lf\n", media_ponderada);
        printf("Aluno aprovado.\n");
    }
}