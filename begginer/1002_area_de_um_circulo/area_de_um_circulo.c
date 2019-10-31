#include <stdio.h>
#include <math.h>

int main(){
    double pi = 3.14159, raio = 0, valor_area = 0;

    scanf("%lf", &raio);

    valor_area = (pi * pow(raio, 2));

    printf("A=%.4lf\n", valor_area);
    return 0;
}