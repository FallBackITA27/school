#include <stdlib.h>
#include <stdio.h>
#include "../endFunction.h" // Non so come fare i .h! 

void printMaxMin(int max, int min) {
    printf("\nMax: %d\nMin: %d\n", max, min);
}

int main(int argv, char** argc) {
    int a, b;

    printf("Inserisci la prima variabile\n > ");
    scanf("%d", &a);

    printf("\nInserisci la seconda variabile\n > ");
    scanf("%d", &b);

	printf("\na: %d\nb: %d\n", a, b);
    
    if (a < b) {
        printMaxMin(b, a);
    } else {
        printMaxMin(a, b);
    }

    return end();
}
