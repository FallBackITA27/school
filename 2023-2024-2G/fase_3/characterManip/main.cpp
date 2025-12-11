#include <stdio.h>
#include "../endFunction.h"

int main(int argv, char** argc) {
    int k;
    printf("Inserisci un numero tra 1 e 4 (compresi)\n > ");
    scanf("%d", &k);
    if (k < 1 || k > 4) {
    	printf("\nIl numero non era nel range specificato");
    	return end();
	}
	
    int n;
	printf("\nInserisci il numero massimo\n > ");
    scanf("%d", &n);
	if (n < 0) {
		printf("\nIl numero di valori non puo' essere negativo!");
		return end();
	}
    
    fflush(stdin);
    
	for (int i = 0; i <= n; i++ ) {
		char character;
		printf("\nInserisci un carattere\n > ");
		scanf("%c", &character);
		
    	fflush(stdin);
		printf("\nIl carattere `%c` offsettato di %d e' `%c`", character, k, (int)character + k);
	}

    return end();
}
