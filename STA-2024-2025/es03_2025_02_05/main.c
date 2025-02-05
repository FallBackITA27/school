#include <stdio.h>

int main(int argv, char** argc) {
	printf("Questo programma calcola l'area di un triangolo.\n-- Massanova\n\n");

    float a, b;
    printf("Inserisci la base\n >> ");
    scanf("%f", &a);
    printf("\nInserisci l'altezza\n >> ");
	scanf("%f", &b);

	float area = (a * b) / 2;
	printf("\n\nL'area del triangolo e': %f", area);

    return 0;
}