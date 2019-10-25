#include <stdio.h>
#include <math.h>

int main(){
    float valor_a = 0.0, valor_b = 0.0, valor_c = 0.0, delta_value = 0.0, r1 = 0.0, r2 = 0, numerador_1 = 0.0, denominador_1 = 0.0, numerador_2 = 0.0, denominador_2 = 0.0;

    printf("Digite o valor de A:");
    scanf("%f", &valor_a);
    printf("Digite o valor de B:");
    scanf("%f", &valor_b);
    printf("Digite o valor de C:");
    scanf("%f", &valor_c);

    delta_value = ((pow(valor_b, 2)) - (4 * valor_a * valor_c));
    printf("%f", delta_value);
    
    if(delta_value < 0){
        printf("Impossivel calcular\n");

    }else{
        numerador_1 = (- valor_b) + (sqrt(delta_value));
        denominador_1 = (2 * valor_a);

        numerador_2 = (- valor_b) - (sqrt(delta_value));
        denominador_2 = (2 * valor_a);

        r1 = (numerador_1 / denominador_1);
        r2 = (numerador_2 / denominador_2);

        printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);
    }


    return 0;
}