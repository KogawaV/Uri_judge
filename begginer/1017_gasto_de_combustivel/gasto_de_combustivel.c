#include <stdio.h>
#define CONSUMO_POR_KM 12
float func_combustivel_necessario(float tempo_g, float velocidade_m);
int main(){
    float tempo_gasto = 0, velocidade_media = 0;

    scanf("%f", &tempo_gasto);
    scanf("%f", &velocidade_media);

    func_combustivel_necessario(tempo_gasto, velocidade_media);

    return 0;
}

float func_combustivel_necessario(float tempo_g, float velocidade_m){
    float espaco_percorrido = 0;
    float combustivel_necessario = 0.0;

    espaco_percorrido = (velocidade_m * tempo_g);
    combustivel_necessario = (espaco_percorrido/CONSUMO_POR_KM);

    return printf("%.3f\n", combustivel_necessario);
}