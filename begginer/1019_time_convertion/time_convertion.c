#include <stdio.h>

#define HORAS 3600
#define MINUTOS 60

int main(){
    int valor_segundos = 0, contador_horas = 0, contador_minutos = 0, contador_segundos = 0;

    scanf("%d", &valor_segundos);

    while(valor_segundos >= HORAS){
        valor_segundos = valor_segundos - HORAS;
        contador_horas = contador_horas + 1;
    }

    while(valor_segundos >= MINUTOS){
        valor_segundos = valor_segundos - MINUTOS;
        contador_minutos = contador_minutos + 1;
    }

    contador_segundos = valor_segundos;

    printf("%d:%d:%d\n", contador_horas, contador_minutos, contador_segundos);

    return 0;
}