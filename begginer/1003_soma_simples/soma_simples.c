#include <stdio.h>

int main(){
    int numero_1 = 0, numero_2 = 0, resultado_soma = 0;

    scanf("%d", &numero_1);
    scanf("%d", &numero_2);

    resultado_soma = (numero_1 + numero_2);

    printf("SOMA = %d\n", resultado_soma);

    return 0;
}