#include <stdio.h>
#include <math.h>
#include "../endFunction.h"

int main(int argv, char** argc) {
    float a, b, c;

    printf("Inserisci il primo lato\n > ");
    scanf("%f", &a);

    printf("\nInserisci il secondo lato\n > ");
	scanf("%f", &b);
    
	printf("\nInserisci il terzo lato\n > ");
	scanf("%f", &c);

	printf("\n");
	// controllo dei lati
    // https://www.webtvgiordanicaserta.it/listing/giordanicaserta/FraPec/Scratch/Triangolo.htm#:~:text=Confronta%20un%20lato%20con%20gli,Scaleno%20e%20il%20procedimento%20termina.
	if (
			(a > 0) &&
			(b > 0) &&
			(c > 0) &&
			(( c + b ) > a) &&
			(( c + a ) > b) &&
			(( b + a ) > c)
		) { // Formatting strano ma penso sia leggibile
		
		printf("\nPerimetro: %f", (a+b+c));
		float semiP = (a+b+c)/2; // Li dichiaro direttamente qui per avere memoria allocata a caso in meno
		float area = sqrtf(semiP * (semiP - a) * (semiP - b) * (semiP - c));
		printf("\nArea: %f", area);
	} else {
		printf("Non sono lati validi di un triangolo.");
	}
    
    return end();
}
