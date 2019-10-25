#include <stdio.h>

#define NOTAS_100 100
#define NOTAS_50 50
#define NOTAS_20 20
#define NOTAS_10 10
#define NOTAS_5  5
#define NOTAS_2  2
#define NOTAS_1  1

int main(){
    int valor_qualquer = 0, valor_qualquer_cp = 0;
    int contador_100 = 0, contador_50 = 0, contador_20 = 0, contador_10 = 0, contador_5 = 0, contador_2 = 0, contador_1 = 0;

    scanf("%d", &valor_qualquer);

    valor_qualquer_cp = valor_qualquer;

    while(valor_qualquer >= NOTAS_100){
        valor_qualquer = valor_qualquer - NOTAS_100;

        contador_100 = contador_100 + 1;
    }

    while(valor_qualquer >= NOTAS_50){
        valor_qualquer = valor_qualquer - NOTAS_50;

        contador_50 = contador_50 + 1;
    }

    while(valor_qualquer >= NOTAS_20){
        valor_qualquer = valor_qualquer - NOTAS_20;

        contador_20 = contador_20 + 1;
    }

    while(valor_qualquer >= NOTAS_10){
        valor_qualquer = valor_qualquer - NOTAS_10;

        contador_10 = contador_10 + 1;
    }

    while(valor_qualquer >= NOTAS_5){
        valor_qualquer = valor_qualquer - NOTAS_5;

        contador_5 = contador_5 + 1;
    }

    while(valor_qualquer >= NOTAS_2){
        valor_qualquer = valor_qualquer - NOTAS_2;

        contador_2 = contador_2 + 1;
    }

    contador_1 = valor_qualquer;

    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00", contador_100, contador_50, contador_20, contador_10, contador_5, contador_2, contador_1);
    
    return 0;
}