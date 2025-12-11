#include <stdio.h>
#include "../endFunction.h"
#include <limits.h>

void printMaxMin(int max, int min) {
    printf("\nMax: %dcm\nMin: %dcm\n", max, min);
}

int main(int argv, char** argc) {
    int n, input;
    int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;

    printf("Inserisci il numero di valori\n > ");
    scanf("%d", &n);
	
	for (int i = 0; i < n; i++ ) {
    	printf("\nInserisci un valore\n > ");
		scanf("%d", &input);
		sum += input;
		if (input < min) {
			min = input;
		}
		if (input > max) {
			max = input;
		}
	}

    printf("\nLa somma: %d\n", sum);
    printf("\nLa media: %f\n", float(sum) / float(n));
    printf("\nIl massimo: %d\n", max);
    printf("\nIl minimo: %d\n", min);

    return end();
}
