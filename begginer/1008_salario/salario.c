#include <stdio.h>

int main(){
    int numero_funcionario = 0, horas_trabalhadas_um_mes = 0;
    float qtd_hora_trab = 0.00, salario = 0.00;

    scanf("%d", &numero_funcionario);
    scanf("%d", &horas_trabalhadas_um_mes);
    scanf("%f", &qtd_hora_trab);

    salario = (horas_trabalhadas_um_mes * qtd_hora_trab);

    printf("NUMBER = %d\nSALARIO = %.2f\n", numero_funcionario, salario);

    return 0;
}