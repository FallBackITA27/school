#include <stdio.h>
#include "../endFunction.h"

int main(int argv, char** argc) {
    int n, res;

    printf("Inserisci il numero di cui calcolare il fattoriale\n > ");
    scanf("%d", &n);
	
	res = 1;
	
	for (int i = 1; i <= n; i++ ) res *= i;
	
    printf("Il fattoriale di 'n' e' %d", res);

    return end();
}
