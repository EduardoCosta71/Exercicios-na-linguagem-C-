#include <stdio.h>

int main() {
	
	int numeros;
	int soma = 0;
	int contador = 0;
	
	while(1){
		
		printf("Digite 10 numeros desejados (ou 0 para parar): ");
		scanf("%i", &numeros);
		
		if (numeros == 10) {
			printf("Numeros completos!");
			break;	
			
		}
		
		soma = soma + numeros;
		contador++;
	
	
	if (contador == 10) {
		
		printf("Limite de numeros");
		break;
	}
	
}
	
	printf("A soma dos numeros e: %i \n", soma);
	return 0;
	

}
