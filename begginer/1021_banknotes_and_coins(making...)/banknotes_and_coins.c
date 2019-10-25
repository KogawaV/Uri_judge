#include <stdio.h>

#define NOTAS_100 100
#define NOTAS_50 50
#define NOTAS_20 20
#define NOTAS_10 10
#define NOTAS_5  5
#define NOTAS_2  2

#define MOEDAS_1 1.00
#define MOEDAS_050 0.50
#define MOEDAS_025 0.25
#define MOEDAS_010 0.10
#define MOEDAS_005 0.05
#define MOEDAS_001 0.01

int main(){
    float valor_qualquer = 0.0, valor_qualquer_cp = 0.0;
    int contador_100 = 0, contador_50 = 0, contador_20 = 0, contador_10 = 0, contador_5 = 0, contador_2 = 0;
    int contador_1 = 0, contador_050 = 0, contador_025 = 0, contador_010 = 0, contador_005 = 0, contador_001 = 0;

    printf("Digite qualquer valor: ");
    scanf("%f", &valor_qualquer);

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

    while(valor_qualquer >= MOEDAS_1){
        valor_qualquer = valor_qualquer - MOEDAS_1;
        contador_1 = contador_1 + 1;
    }

    while(valor_qualquer >= MOEDAS_050){
        valor_qualquer = valor_qualquer - MOEDAS_050;
        contador_050 = contador_050 + 1;
    }

    while(valor_qualquer >= MOEDAS_025){
        valor_qualquer = valor_qualquer - MOEDAS_025;
        contador_025 = contador_025 + 1;
    }

    while(valor_qualquer >= MOEDAS_010){
        valor_qualquer = valor_qualquer - MOEDAS_010;
        contador_010 = contador_010 + 1;
    }

    while(valor_qualquer >= MOEDAS_005){
        valor_qualquer = valor_qualquer - MOEDAS_005;
        contador_005 = contador_005 + 1;
    }

    while(valor_qualquer >= MOEDAS_001){
        valor_qualquer = valor_qualquer - MOEDAS_001;
        contador_001 = contador_001 + 1;
    }
    printf("NOTAS:\nnota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\nMOEDAS:\n%d moeda(s) de R$ 1,00\n%d moeda(s) de R$ 0,50\n%d moeda(s) de R$ 0,25\n%d moeda(s) de R$ 0,10\n%d moeda(s) de R$ 0,05\n%d moeda(s) de R$ 0,02\n", contador_100, contador_050, contador_20, contador_10, contador_5, contador_2, contador_1, contador_050, contador_025, contador_010, contador_005, contador_001);

    return 0;
    
}