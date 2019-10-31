#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int valor_a = 0, valor_b = 0, valor_c = 0, maior_valor_entre_os_dois_primeiros = 0, maior_valor = 0;

    scanf("%d %d %d", &valor_a, &valor_b, &valor_c);

    maior_valor_entre_os_dois_primeiros = ((valor_a + valor_b + fabs(valor_a - valor_b)) / 2);
    //printf("Maior valor entre os dois primeiros: %d\n", maior_valor_entre_os_dois_primeiros);

    if(maior_valor_entre_os_dois_primeiros > valor_c){
        printf("%d eh o maior\n", maior_valor_entre_os_dois_primeiros);
    }else{
        printf("%d eh o maior\n", valor_c);
    }

    return 0;
}