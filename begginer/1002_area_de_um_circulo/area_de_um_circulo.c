#include <stdio.h>
#include <math.h>

int main(){
    float pi = 3.14159, raio = 0, valor_area = 0;

    scanf("%f", &raio);

    valor_area = (pi * pow(raio, 2));

    printf("A = %.4f\n", valor_area);
    return 0;
}