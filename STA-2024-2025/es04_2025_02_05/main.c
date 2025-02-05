#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argv, char** argc) {
	float PI = 3.141592; // const

	printf("Questo programma calcola il prodotto tra il tuo numero preferito n e un numero tra n e 0.\n--Massanova");

	int n;
	printf("\n\nQual e' il tuo numero preferito?\n>> ");
	scanf("%d", &n);

    srand(time(NULL));
    int r = rand() % n;

    printf("\nIl numero casuale e' %d", r);
    printf("\nIl prodotto tra il tuo numero preferito n e un numero casuale tra 0 e n e' %d", (n * r));

	return 0;
}
