#include <stdio.h>

float consumo_medio(float km_percorrido, float total_gasto);
float total_percorrido = 0.0, total_gasto = 0.0;

int main(){
    scanf("%f\n", &total_percorrido);
    scanf("%f", &total_gasto);
    printf("\n");

    consumo_medio(total_percorrido, total_gasto);

    return 0;
}

float consumo_medio(float km_percorrido, float total_gasto){
    float consumo_medio = 0.0;
    consumo_medio = (total_percorrido/total_gasto);

    return printf("%.3f km/l\n", consumo_medio);
}