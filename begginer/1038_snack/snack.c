#include <stdio.h>

//protótipos das funções
double calc_price(int opcao, int quantidade);

int main(){
	int opcao = 0, quantidade = 0;
	
	printf("1   Cachorro Quente R$4.00\n");
	printf("2   X-Salada        R$4.50\n");
	printf("3   X-Bacon         R$5.00\n");
	printf("4   Torrada simples R$2.00\n");
	printf("5   Refrigerante    R$1.50\n");
	scanf("%d %d", &opcao, &quantidade);
	//printf("Opção: %d\nQuantidade: %d\n", opcao, quantidade);
	calc_price(opcao, quantidade);

	return 0;
}

double calc_price(int opcao, int quantidade){
	double preco_final = 0.00;

	switch(opcao){
		case 1:
			preco_final = 4 * quantidade;
			printf("Total: R$ %.2lf\n", preco_final);			
			break;

		case 2:
			preco_final = 4.5 * quantidade;
			printf("Total: R$ %.2lf\n", preco_final);			
			break;
		case 3:
			preco_final = 5 * quantidade;
			printf("Total: R$ %.2lf\n", preco_final);			
			break;

		case 4:
			preco_final = 2 * quantidade;
			printf("Total: R$ %.2lf\n", preco_final);			
			break;

		case 5:
			preco_final = 1.5 * quantidade;
			printf("Total: R$ %.2lf\n", preco_final);			
			break;
		default:
			printf("opção inválida");
			break;
	}
}

