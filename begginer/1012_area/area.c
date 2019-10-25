#include <stdio.h>
#include <math.h>

/*
    a) a área do triângulo retângulo que tem A por base e C por altura. 
    b) a área do círculo de raio C. (pi = 3.14159) 
    c) a área do trapézio que tem A e B por bases e C por altura. 
    d) a área do quadrado que tem lado B. 
    e) a área do retângulo que tem lados A e B. 
*/

float area_triangulo(float base, float altura);
float area_circulo(float raio);
float area_trapezio(float base_menor, float base_maior, float altura);
float area_quadrado(float lado_quadrado);
float area_retangulo(float lado_retangulo_a, float lado_retangulo_b);

float area_do_triangulo;
float area_do_circulo;
float area_do_trapezio;
float area_do_quadrado;
float area_do_retangulo;

int main(){
        float valor_a = 0.0, valor_b = 0.0, valor_c = 0.0;
         
        scanf("%f %f %f", &valor_a, &valor_b, &valor_c);

        area_triangulo(valor_a, valor_c);
        area_circulo(valor_c);
        area_trapezio(valor_a, valor_b, valor_c);
        area_quadrado(valor_b);
        area_retangulo(valor_a, valor_b);

        printf("TRIANGULO: %.3f\n", area_triangulo);
        printf("CIRCULO: %.3f\n", area_circulo);
        printf("TRAPEZIO: %.3f\n", area_trapezio);
        printf("QUADRADO: %.3f\n", area_quadrado);
        printf("RETANGULO: %.3f\n", area_retangulo);

    return 0;
}

float area_triangulo(float base, float altura){
    //float area_triangulo = 0.00;

    area_do_triangulo = ((base * altura)/2);

    return area_do_triangulo;
}

float area_circulo(float raio){
    int pi = 3.14159;
    //float area_circulo = 0.00;

    area_do_circulo = (pi * pow(raio, 2));

    return area_do_circulo;
}

float area_trapezio(float base_menor, float base_maior, float altura){
    //float area_trapezio = 0.00; 

    area_do_trapezio = (((base_maior + base_menor)*altura)/2);

    return area_do_trapezio;
}

float area_quadrado(float lado_quadrado){
    //float area_quadrado = 0.00;

    area_do_quadrado = (lado_quadrado * lado_quadrado);

    return area_do_quadrado;
}

float area_retangulo(float lado_retangulo_a, float lado_retangulo_b){
    //float area_retangulo = 0.00;

    area_do_retangulo = (lado_retangulo_a * lado_retangulo_b);

    return area_do_retangulo;
}