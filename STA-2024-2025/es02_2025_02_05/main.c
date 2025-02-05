#include <stdio.h>

int main(int argv, char** argc) {
	float PI = 3.141592; // const

	printf("Questo programma calcola la circonferenza e l'area di un cerchio.\n--Massanova");

	float radius;
	printf("\n\nInserisci il raggio del cerchio\n>> ");
	scanf("%f", &radius);

	float circumference = 2*radius*PI;
	float area = radius*radius*PI;
	printf("\nLa circonferenza e': %f\nL'area e': %f", circumference, area);

	return 0;
}
