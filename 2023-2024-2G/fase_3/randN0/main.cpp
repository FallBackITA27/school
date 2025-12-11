#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "../endFunction.h"

int main(int argv, char** argc) {
   // Seeding col tempo
   time_t t;
   srand((unsigned) time(&t));
	
	// rand n 0..n
	unsigned maxRange; // Evito numeri negativi.
	printf("Inserisci una variabile per generare un numero casuale tra 0 e n.\n > ");
	scanf("%d", &maxRange);
	
	if (maxRange == 0) {
		printf("0");
	} else {
		int random = rand();
		printf("%d", (random % (maxRange + 1)));
	}
	
    return end();
}

