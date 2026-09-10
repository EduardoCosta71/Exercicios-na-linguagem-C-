#include <stdio.h>
#include <string.h>

int main() {
	
	int codigo, bebida, sobremesa;
	float valor;
	float valor_alimento = 0, valor_bebida = 0, valor_sobremesa = 0;
	float valor_combo;
	char desc_alimento[50], desc_bebida[50], desc_sobremesa[50];
	
	printf("Faca a escola do seu combo (entre o codigo 1 a 4 -> Lanche, 5 a 6 -> Bebida, 7 a 9 -> Sobremesa). \n");
	
	printf("\n 1 - Hamburguer - R$ 4,50");
	printf("\n 2 - Chessburguer - R$ 5,50");
	printf("\n 3 - Cachorro quente - R$ 4,00");
	printf("\n 4 - Sanduíche - R$ 3,50");
	printf("\n 5 - Refrigerante - R$ 1,00");
	printf("\n 6 - Suco Laranja - R$ 2,00");
	printf("\n 7 - Milk Shake - R$ 1.50");
	printf("\n 8 - Sundae - R$ 3,00");
	printf("\n 9 - Casquinha - R$ 1,00");
	
	printf("\nLanche: \n");
	scanf("%i", &codigo);
	
	switch(codigo){
	
		case 1: strcpy(desc_alimento, "Hambuguer - R$ 4,50");
				valor_alimento = 4.50;
		break;
		
		case 2: strcpy(desc_alimento, "Chessburguer - R$ 5,50");
				valor_alimento = 5.50;
		break;
		
		case 3: strcpy(desc_alimento, "Cachorro quente - R$ 4,00");
				valor_alimento = 4.00;
		break;
		
		case 4: strcpy(desc_alimento, "Sanduíche - R$ 3,50"); 
				valor_alimento = 3.50;
		break;
		
		default: printf("Opção Invalida.");
	}
	
	printf("\nBebida: ");
	scanf("%i", &bebida);
	
	switch(bebida){
		
		case 5: strcpy(desc_bebida, "Refrigerante - R$ 1,00");
				valor_bebida = 1.00;
		break;
		
		case 6: strcpy(desc_bebida, "Suco Laranja - R$ 2,00");
				valor_bebida = 2.00;
		break;
		
		default: printf("Opção Invalida.");
	}
	
	printf("\nSobremesa: ");
	scanf("%i", &sobremesa);
	
	switch(sobremesa){
		
		case 7: strcpy(desc_sobremesa, "Milk Shake - R$ 1.50");
				valor_sobremesa = 1.50;
		break;
		
		case 8: strcpy(desc_sobremesa, "Sundae - R$ 3,00");
				valor_sobremesa = 3.00;
		break;
		
		case 9: strcpy(desc_sobremesa, "Casquinha - R$ 1,00");
				valor_sobremesa = 1.00;
		break;
		
		default: printf("Opção Invalida.");
		
	}
	
	valor_combo = valor_alimento + valor_bebida + valor_sobremesa;
	printf("\nSeu combo é um lanche de: %s ", desc_alimento);
	printf("\nUma bebiba de: %s", desc_bebida);
	printf("\nE uma sobremesa de: %s", desc_sobremesa);
	printf("\nNo valor de R$: %.2f", valor_combo);
	
	return 0;
	
}
