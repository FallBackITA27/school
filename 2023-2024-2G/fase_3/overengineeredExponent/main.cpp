#include <stdio.h>
#include "../endFunction.h"

int main(int argv, char** argc) {
    int b;
    printf("Inserisci una base\n > ");
    scanf("%d", &b);
	
    unsigned e;
	printf("\nInserisci un esponente positivo\n > ");
    scanf("%d", &e);
	
    int res = 1;
    
	for (int i = 0; i < e; i++ ) res *= b;
	
	printf("Il risultato di (%d)^(%d) e' %d", b, e, res);

    return end();
}
