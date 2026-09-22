#include <stdio.h>


//Elabore um programa que calcule e imprima a soma de
//todos os números inteiros contidos no intervalo de 1 até
//N, onde N é informado pelo usuário

int main() {
	
	int numero;
	int soma = 0;
	
	printf("Ate qual numero voce deseja? ");
	scanf("%i", &numero);
	
	for(int i = 1; i <= numero; i++){
		
		soma = soma + i;
		
	}
	
	printf("A soma de todos os numeros de 1 ate %i eh: %i \n", numero, soma);
	
	return 0;
	
}
