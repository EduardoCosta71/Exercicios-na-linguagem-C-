#include <stdio.h>

int main() {
	
	int N;
	int i = 1;
	int contador = 0;
	
	printf("Digite um número inteiro positivo: ");
	scanf("%i", &N);
	
	if (N < 0){
		
		printf("Erro: Digite um numero inteiro POSITIVO.");
	}
	
	while(contador < N){
		
		if(i % 2 != 0){
			
			printf("Numeros Impares: %i \n", i);
			contador++;
			
			
		}
		i++;
	}
	
	printf("\n");
	return 0;
}
