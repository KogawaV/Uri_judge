#include <stdio.h>

int main(){
    int codigo_produto[2], quantidade_produto[2];
    float preco_produto[2], total = 0;;

    scanf("%d %d %f", &codigo_produto[0], &quantidade_produto[0], &preco_produto[0]);
    scanf("%d %d %f", &codigo_produto[1], &quantidade_produto[1], &preco_produto[1]);

    total = ((quantidade_produto[0] * preco_produto[0]) + (quantidade_produto[1] * preco_produto[1]));

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}