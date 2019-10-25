#include <stdio.h>

int main(){
    float nota_a = 0.00, nota_b = 0.00, nota_c = 0.00, media = 0.00, peso_a = 2, peso_b = 3, peso_c = 5;

    scanf("%f", &nota_a);
    scanf("%f", &nota_b);
    scanf("%f", &nota_c);

    if(nota_a <= 10 && nota_b <= 10 && nota_c <= 10){
        media = ((nota_a * peso_a) + (nota_b * peso_b) + (nota_c * peso_c))/(peso_a + peso_b + peso_c);

        printf("MEDIA = %.1f\n", media);
    }
    
    return 0;
}