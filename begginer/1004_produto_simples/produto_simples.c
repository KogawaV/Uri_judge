#include <stdio.h>

int main(){
    int numero_1 = 0, numero_2 = 0, resultado_multiplicacao = 0;

    scanf("%d", &numero_1);
    scanf("%d", &numero_2);

    resultado_multiplicacao = (numero_1 * numero_2);

    printf("PROD = %d\n", resultado_multiplicacao);

    return 0;
}