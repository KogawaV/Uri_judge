#include <stdio.h>

int main(){
    int distancia = 0;
    float tempo = 0.0;

    scanf("%d", &distancia);

    tempo = (distancia * 2);

    printf("%.0f minutos\n", tempo);
    return 0;
}