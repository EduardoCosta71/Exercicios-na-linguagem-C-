#include <stdio.h>

int main(void) {
	
	int codigo;
	float valor;
	
	printf("\nSelecione o codigo da moeda e o valor que voce deseja: ");
	printf("\n1 - Libra esterlina");
	printf("\n2 - Franco suico");
	printf("\n3 - Dolar americano");
	printf("\n4 - Marco alemao");
	printf("\n5 - Real \n");
	scanf("%i", &codigo);
	
	if (codigo > 5) {
		
		printf("codigo invalido");
	}
	
	scanf("%f", &valor);

	switch(codigo) {
		
		case 1: 
			printf("Libra esterlina");
			break;
			
		case 2:
			printf("Franco suico");
			break;
		
		case 3: 
			printf("Dolar americano");
			break;
			
		case 4:
			printf("Marco alemao");
			break;
			
		case 5:
			printf("Real");
			break;
			
		default: ("Opcao invalida");
	}
	
	printf("\n escolheu: %.2f", valor, codigo);
	
	return 0;
	
}
