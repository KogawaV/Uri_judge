#include <stdio.h>
#include <math.h>

//protótipos das funções a serem utilizadas no programa
float calcular_distancia(float x1, float y1, float x2, float y2);

float coo_x1 = 0.0, coo_y1 = 0.0, coo_x2 = 0.0, coo_y2 = 0.0;
int main(){
    scanf("%f %f", &coo_x1, &coo_y1);
    scanf("%f %f", &coo_x2, &coo_y2);


    calcular_distancia(coo_x1, coo_y1, coo_x2, coo_y2);

    return 0;
}

float calcular_distancia(float x1, float y1, float x2, float y2){
    float distancia = 0.0;
    //printf("[%f,%f]\n[%f,%f]\n", x1, y1,x2,y2);

    distancia = sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));

    return printf("%.4f\n", distancia);
}