#include <stdio.h>

int main() {
	
	int numeros;
	int soma = 0;
	int contagem;
	
	while(1){
		
		printf("Digite quantos numeros voce quiser (ou 0 para sair): \n ");
		scanf("%i", &numeros);
		
		if (numeros == 0){
			
			break;
		}
		
		soma += numeros;
		contagem++;
		
	} 
	printf("A soma dos numeros ficou igual a: %i \n", soma);
	
	return 0;

}
