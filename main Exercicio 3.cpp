#include <stdio.h>

//Faça um programa que execute uma contagem
// regressiva de 10 até 0 usando 'do-while',
//imprimindo ao final a mensagem 'Fim da contagem'

int main(void) {
	
	int numero = 10;
	
	do {
		printf("Contagem Regressiva: %i \n", numero);
		numero--;

	} while(numero >= 0);
 	
 	
	printf("Fim da contagem \n");
	return 0;	
}
