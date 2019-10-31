#include <stdio.h>

int main(){
    float cood_x = 0.0, cood_y = 0.0;

    scanf("%f %f", &cood_x, &cood_y);

    if((cood_x > 0.0) && (cood_y > 0.0)){
        printf("Q1\n");
    }else if((cood_x < 0.0) && (cood_y > 0.0)){
        printf("Q2\n");
    }else if((cood_x < 0.0) && (cood_y < 0.0)){
        printf("Q3\n");
    }else if((cood_x > 0.0) && (cood_y < 0.0)){
        printf("Q4\n");
    }else if((cood_y == 0) && (cood_x != 0)){
        printf("Eixo X\n");
    }else if((cood_x == 0) && (cood_y != 0)){
        printf("Eixo Y\n");
    }else{
        printf("Origem\n");
    }

    return 0;
}