#include <stdio.h>
#include "../endFunction.h"

int main(int argv, char** argc) {
    int a, b, c;

    printf("Inserisci la prima variabile\n > ");
    scanf("%d", &a);

    printf("\nInserisci la seconda variabile\n > ");
	scanf("%d", &b);
    
	printf("\nInserisci la terza variabile\n > ");
	scanf("%d", &c);

	printf("In ordine:\n");
	
	bool ord = false;
	int minValue;
	
	// c'e' un modo migliore di fare minmaxing ne sono sicuro
	if (a < b) {
		if (b < c) {
			printf("1: %d\n", c);
			printf("2: %d\n", b);
			printf("3: %d\n", a);
		} else {
			minValue = a;
			ord = true;
			printf("1: %d\n", b);
		}
	} else {
		if (b < c) {
			printf("1: %d\n", c);
			printf("2: %d\n", a);
			printf("3: %d\n", b);
		} else {
			minValue = b;
			ord = true;
			printf("1: %d\n", a);
		}
	}

	if (ord) {
		if (minValue < c) {
			printf("2: %d\n", c);
			printf("3: %d\n", minValue);
		} else {
			printf("2: %d\n", minValue);
			printf("3: %d\n", c);
		}
	}

    return end();
}
