#include <stdio.h>

int main() {
	
	int contador = 1;
	
	while(contador <= 50){
		
		if(contador % 2 == 0) {
			
			printf("Numeros pares de 1 a 50 é: %i \n", contador);
	
		}
		contador++;
		
	}
	return 0;
}
