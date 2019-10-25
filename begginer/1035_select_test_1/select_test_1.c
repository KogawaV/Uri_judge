#include <stdio.h>

//prótotipos das funções a serem utilizadas durante o desenvolvimento do algoritmo
int  par_ou_impar(int numero_real_qualquer);

int status_numero = 0;

int main(){
    int valor_a = 0, valor_b = 0, valor_c = 0, valor_d = 0, soma_cd = 0, soma_ab = 0;

    scanf("%d %d %d %d", &valor_a, &valor_b, &valor_c, &valor_d);

    //printf("%d %d %d %d\n", valor_a, valor_b, valor_c, valor_d);

    soma_ab = (valor_a + valor_b);
    soma_cd = (valor_c + valor_d);

    par_ou_impar(valor_a);
    //printf("%d\n", status_numero);

    /*
        valores aceitos:
            - b > c
            - d > a
            - soma cd > soma ab
            - c e d > 0
            - a % 2 == 0

        valores_ não aceitos
    */

   if((valor_b > valor_c) && (valor_d > valor_a) && (soma_cd > soma_ab) && (valor_c > 0 && valor_d > 0) && status_numero == 1){
       printf("Valores aceitos\n");
   }else{
       printf("Valores nao aceitos\n");
   }

    return 0;
}

int  par_ou_impar(int numero_real_qualquer){
    if(numero_real_qualquer % 2 == 0){
        //printf("par\n");
        status_numero = 1;
        return status_numero;
    }else{
        //printf("impar\n");
        status_numero = 0;
        return status_numero;
    }
}