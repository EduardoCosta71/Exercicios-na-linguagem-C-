#include <stdio.h>

int main(void) {

	float precoAl = 1.7997f, precoDi = 0.9798f, precoGa = 2.1009f;
	int litros;
	float precoFinal;
	char opcao;
	
	printf("\nDigite os litros de gasolina e qual opcao de gasolina que deseja (A, D ou G): ");
	printf("\nAlcool (R$ 1,7997) - A");
	printf("\nDiesel (R$ 0,9798)- D");
	printf("\nGasolina (R$ 2.1009)- G \n");
	scanf("%i", &litros);
	scanf(" %c", &opcao);
	
	switch(opcao){
		
		case 'a':
			precoFinal = precoAl * litros;
			printf("\nVoce escolheu Alcool, o valor por litro é: %f", precoAl);
			printf("\nE o valor final foi de: %.2f R$ ", precoFinal);
	
		break;
		
		case 'd':
			precoFinal = precoDi * litros;
			printf("\nVoce escolheu Diesel, o valor por litro é: %f", precoDi);
			printf("\nE o valor final foi de: %.2f R$ ", precoFinal);
			
		break;
		
		case 'g':
			precoFinal = precoGa * litros;
			printf("\nVoce escolheu Gasolina, o valor por litro é: %f", precoGa);
			printf("\nE o valor final foi de: %.2f R$ ", precoFinal);
			
		break;
	}
	
	return 0;

}
