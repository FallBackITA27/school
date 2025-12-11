#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "../endFunction.h"

int main(int argv, char** argc) {
   // Seeding col tempo
   time_t t;
   srand((unsigned) time(&t));
	
	// rand n 1..n
	unsigned maxRange; // Evito numeri negativi.
	printf("Inserisci una variabile per generare un numero casuale tra 1 e n.\n > ");
	scanf("%d", &maxRange);
	
    int random = rand();
	printf("%d\n\n", ((random % maxRange) + 1));

    return end();
}

