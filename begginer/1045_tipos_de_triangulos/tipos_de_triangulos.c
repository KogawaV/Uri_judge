#include <stdio.h>
#include <math.h>
#define TAM 3

float verificar_tipo_de_triangulo(float *vetor_lados_triangulo);

int main(){
    float lados_triangulo[TAM];
    int i = 0;
    //populando o vetor de lados
    for(i = 0; i < TAM; i++){
        scanf("%f",  &lados_triangulo[i]);
    }
     verificar_tipo_de_triangulo(lados_triangulo);

    return 0;
}

float verificar_tipo_de_triangulo(float *vetor_lados_triangulo){
    int bs_a = 0, bs_b = 0, temp = 0, i=0;

    //organizando o vetor em ordem decrescente.
    for(bs_a = 0; bs_a < TAM; bs_a++){
        for(bs_b = 0; bs_b < TAM - 1; bs_b++){
            if(vetor_lados_triangulo[bs_a] > vetor_lados_triangulo[bs_b]){
                temp = vetor_lados_triangulo[bs_a];
                vetor_lados_triangulo[bs_a] = vetor_lados_triangulo[bs_b];
                vetor_lados_triangulo[bs_b] = temp;
            }
        }
    }

    //printando o vetor
    /*for(i = 0; i < TAM; i++){
        printf("[%f]", vetor_lados_triangulo[i]);
    }*/

    float a = vetor_lados_triangulo[0], b = vetor_lados_triangulo[1], c = vetor_lados_triangulo[2];
    //printf("\nA = %f\nB = %f\nC = %f", a, b, c);
    char *class = {"NAO FORMA TRIANGULO", "TRIANGULO RETANGULO", "TRIANGULO OBTUSANGULO", "TRIANGULO ACUTANGULO", "TRIANGULO EQUILATERO", "TRIANGULO ISOSCELES"};

    if(a >= (b + c)){
        printf("NAO FORMA TRIANGULO\n");
    }else if(pow(a,2) == (pow(b,2) + pow(c,2))){
        printf("TRIANGULO RETANGULO\n");
    }else if(pow(a,2) > (pow(b,2) + pow(c,2))){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if(pow(a,2) < (pow(b,2) + pow(c,2))){
        printf("TRIANGULO ACUTANGULO\n");
    }else if(a == b == c){
        printf("TRIANGULO EQUILATERO\n");
    }else if(((a == b) && (a != c) && (b != c)) || ((a == c) && (a != b) && (c != b)) || ((c == b) && (c != a) && (b != a))){
        printf("TRIANGULO ISOSCELES\n");
    }

    printf("%s", class);

}