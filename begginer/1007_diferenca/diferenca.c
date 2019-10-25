#include <stdio.h>

int main(){
    int valor_a = 0, valor_b = 0, valor_c = 0, valor_d = 0, diferenca = 0;

    scanf("%d", &valor_a);
    scanf("%d", &valor_b);
    scanf("%d", &valor_c);
    scanf("%d", &valor_d);

    diferenca = ((valor_a * valor_b) - (valor_c * valor_d));

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}