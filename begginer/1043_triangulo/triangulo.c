#include <stdio.h>
#include <math.h>

double perimetro_triangulo(double lado_a, double lado_b, double lado_c);
double area_trapezio(double base_a, double base_b, double altura_c);

int main(){
    double lado_a = 0.00, lado_b = 0.00, lado_c = 0.00;

    scanf("%lf %lf %lf", &lado_a, &lado_b, &lado_c);

    //testando função que retorna o valor absoluto de um determinada variável
    /*double abs_lado_a = fabs(lado_a);
    printf("Absoluto A: %lf.\n", abs_lado_a);*/

    if((fabs(lado_b - lado_c) < lado_a) && ((lado_b + lado_c) > lado_a) && ((fabs(lado_a - lado_c) < lado_b) && ((lado_a + lado_c) > lado_b)) && ((fabs(lado_a - lado_b) < lado_c) && ((lado_a + lado_b) > lado_c))){
        //printf("é um triângulo.");
        perimetro_triangulo(lado_a, lado_b, lado_c);
    }else{
        //printf("é um trapézio.");
        area_trapezio(lado_a, lado_b, lado_c);
    }

    return 0;
}

double perimetro_triangulo(double lado_a, double lado_b, double lado_c){
    double perimetro = 0.00;

    perimetro = (lado_a + lado_b + lado_c);
    printf("Perimetro = %.1lf", perimetro);
}

double area_trapezio(double base_a, double base_b, double altura_c){
    double area = 0.00;

    area = (((base_a + base_b)*altura_c)/2);
    printf("Area = %.1lf", area);
}
