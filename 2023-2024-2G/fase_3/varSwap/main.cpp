#include <stdio.h>
#include "../endFunction.h"

void printMaxMin(int max, int min) {
    printf("\nMax: %dcm\nMin: %dcm\n", max, min);
}

int main(int argv, char** argc) {
    int a, b, c;

    printf("Inserisci la variabile `a`\n > ");
    scanf("%d", &a);

    printf("\nInserisci la variabile `b`\n > ");
    scanf("%d", &b);

	c = a;
	a = b;
	b = c;
	
    printf("\nInvertite le due variabili\na: %d\nb: %d\n", a, b);

    return end();
}
