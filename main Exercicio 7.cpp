#include <stdio.h>

int main() {
	
	int numeros;
	int soma = 0;
	int contador = 1;
	int numeros_negativos = 0;
	
	while(1){
		
		printf("Digite qualquer número inteiro positivo e negativo (ou 0 para sair): \n");
		scanf("%i", &numeros);
		
		if(contador == 10) {
			
			break;
			
		}	
		soma += numeros;
		contador++;
		
		if(numeros < 0){
			
			numeros_negativos++;
			
		}
		
		
	}
	printf("Numeros negativos: %i \n", numeros_negativos);
	
	
	return 0;
}
