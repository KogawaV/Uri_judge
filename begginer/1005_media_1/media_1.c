#include <stdio.h>

int main(){
    float peso_1 = 3.5, peso_2 = 7.5, nota_1 = 0.00, nota_2 = 0.00, media_1 = 0.00;

    scanf("%f", &nota_1);
    scanf("%f", &nota_2);

    media_1 = ((nota_1 * peso_1) + (nota_2 * peso_2))/(peso_1 + peso_2);

    printf("MEDIA = %.5f\n", media_1);
    return 0;
}