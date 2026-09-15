#include <stdio.h>

int main(void) {
	
	int idade;
	
	printf("Informe sua idade para te classificarmos: ");
	scanf("%i", &idade);
	
	if (idade >= 5 && idade <= 7) {
		
		printf("Pre Mirim (entre 5 a 7 anos), voce tem: %i", idade, "anos");
		
	} else if (idade >= 8 && idade <= 10) {
		
		printf("Mirim (entre 8 a 10 anos), voce tem: %i ", idade, "anos");
		
	} else if (idade >= 11 && idade <= 13) {
		
		printf("infantil (entre 11 a 13 anos), voce tem: %i", idade, "anos");
		
	} else if (idade >= 14 && idade <= 17) {
		
		printf("infanto juvenil (entre 14 a 17 anos), voce tem: %i ", idade, "anos");
		
	} else if (idade >= 18 && idade <= 20) {
		
		printf("juvenil (entre 18 a 20 anos), voce tem: %i", idade, "anos");
		
	}	else if (idade > 21) {
		
		printf("Adulto (maior de 21 anos), voce tem: %i", idade, "anos");
	}
	
	
	return 0;
}
