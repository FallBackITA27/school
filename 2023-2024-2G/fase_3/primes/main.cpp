#include <stdio.h>
#include "../endFunction.h"

int main(int argv, char** argc) {
    int n, input;
    bool is_prime;

    printf("Inserisci il numero di valori da calcolare\n > ");
    scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		fflush(stdin);
		
	    printf("Inserisci il valore da controllare\n > ");
	    scanf("%d", &input);
	    printf("\n");
	    
	    is_prime = true;
		is_prime = (input % 2 != 0 && input > 0); // Se il numero è pari o è negativo, non è primo. + Hardcode eccezione del 2.
		if (input == 2) is_prime = true;
		
		// Controlla il resto delle divisioni tra 1 e input/2 se il numero non è ancora stato dimostrato come non primo
		
	    if (is_prime) for (int j = 2; j <= (input / 2); j++) if (input % j == 0) {
			is_prime = false;
	        break;
	    }
	
    	if (is_prime) {
	    	printf("%d e' un numero primo.\n\n", input);
		} else {
	    	printf("%d non e' un numero primo.\n\n", input);
		}
			
	}

    return end();
}
