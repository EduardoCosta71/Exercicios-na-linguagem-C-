#include <stdio.h>

int main() {
	
	int numero;
	
	printf("Digite um numero entre 1 a 10: ");
	scanf("%i", &numero);
	
	if (numero < 1 || numero > 10) {
		
		printf("Numero invalido!");
	
	} else {
		
		printf("Tabuada do: %i \n", numero);
	
	
	for(int i = 1; i <= 10; i++) {
		
		int resultado = numero * i;
		
		printf("%i x %i = %i \n", numero, i, resultado);
		
		}
	
	}	
	
	return 0;
}
