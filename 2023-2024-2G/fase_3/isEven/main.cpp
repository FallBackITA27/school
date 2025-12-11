#include <stdio.h>
#include "../endFunction.h"

int main(int argv, char** argc) {
    int n, input;

    printf("Inserisci il numero di valori da calcolare\n > ");
    scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		fflush(stdin);
		
	    printf("Inserisci il valore da controllare\n > ");
	    scanf("%d", &input);
		if (input % 2 == 0) {
    		printf("Il numero %d e' pari\n\n", input);
		} else {
    		printf("Il numero %d e' dispari\n\n", input);
		}
			
	}

    return end();
}
