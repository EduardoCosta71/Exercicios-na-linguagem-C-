#include <stdio.h>

int main() {
	
	for(int i = 1; i <= 100; i++){
		
		if (i % 3 == 0){
			
			printf("Multiplos de 3: %i \n", i);
		}
	}
	
	return 0;
}

