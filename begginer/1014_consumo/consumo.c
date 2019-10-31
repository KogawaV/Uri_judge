#include <stdio.h>

float consumo_medio(int km_percorrido, float total_gasto);
float total_gasto = 0.0;
int total_percorrido = 0;

int main(){
    scanf("%d", &total_percorrido);
    scanf("%f", &total_gasto);

    consumo_medio(total_percorrido, total_gasto);

    return 0;
}

float consumo_medio(int km_percorrido, float total_gasto){
    float consumo_medio = 0.0;
    consumo_medio = (total_percorrido/total_gasto);

    return printf("%.3f km/l\n", consumo_medio);
}