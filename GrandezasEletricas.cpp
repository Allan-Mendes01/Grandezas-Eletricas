#include <stdio.h>

int main() {
	
	int grd_elt, g1, g2, result, resp;
	
	printf("Escolha a grandeza eletrica que deseja obter \n 1- potencia \n 2- Tensao \n 3- corrente \n 4- resistencia \n");
	scanf("%d", &grd_elt);
	
	switch(grd_elt) {
		
		case 1:
			printf("digite o valor da tensao \n");
			scanf("%d", &g1);
			printf("digite o valor da corrente \n");
			scanf("%d", &g2);
				result = g1*g2;
				
				printf("%d watts", result);
			break;
		case 2:
			printf("digite o valor da resistencia \n");
			scanf("%d", &g1);
			printf("digite o valor da corrente \n");
			scanf("%d", &g2);
				result = g1*g2;
				
				printf("%d tensao", result);
			break;
		case 3:
			
			printf("qual valor voce possui?\n 1- tensao e potencia \n 2 - tensao e resistencia");
			scanf("%d", &resp);
			if (resp == 1){
				printf("digite o valor da potencia \n");
				scanf("%d", &g1);
				printf("digite o valor da tensao \n");
				scanf("%d", &g2);
					result = g1/g2;
					printf("%d amperes", result);
				}
			else if (resp == 2) {
				printf("digite o valor da tensao \n");
				scanf("%d", &g1);
				printf("digite o valor da resistencia \n");
				scanf("%d", &g2);
					result = g1/g2;
					printf("%d amperes", result);
			}
			break;
		case 4:
			printf("digite o valor da tensao \n");
			scanf("%d", &g1);
			printf("digite o valor da corrente \n");
			scanf("%d", &g2);
				result = g1/g2;
				
				printf("%d OHMS", result);
			break;
		default:
			printf("Opção Invalida");
			break;
}
}
