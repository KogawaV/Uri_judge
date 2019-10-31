#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    float salario_fixo = 0.00, vendas_totais = 0.00, salario_final = 0.00;

    fgets(nome, 50, stdin);

    int tamanho_nome = strlen(nome);

    if(tamanho_nome < 49){
        nome[tamanho_nome - 1] = '\0';//substituindo o \n por \0 que indica o final do vetor de characteres
    }

    scanf("%f", &salario_fixo);
    scanf("%f", &vendas_totais);

    salario_final = ((vendas_totais * 15)/100) + salario_fixo;

    printf("TOTAL = R$ %.2f\n", salario_final);


    //printf("%s\n%f\n%f", nome, salario_fixo, vendas_totais);
    return 0;
}