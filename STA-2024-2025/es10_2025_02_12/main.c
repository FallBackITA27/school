#include <stdio.h>

void calcTriang() {
    float a, b, l2, l3;
    printf("Inserisci la base\n >> ");
    scanf("%f", &a);
    printf("\nInserisci gli altri due lati\n >> ");
    scanf("%f", &l2);
    printf("\n >> ");
    scanf("%f", &l3);

    printf("\nInserisci l'altezza\n >> ");
	scanf("%f", &b);

	float area = (a * b) / 2;
    float perimeter = b+l2+l3;

	printf("\n\nL'area del triangolo e': %f\nIl perimetro del triangolo e': %f\n", area, perimeter);
}

void calcSquare() {
    float a;
    printf("Inserisci il lato\n >> ");
    scanf("%f", &a);

	float area = (a * a);
	float perimeter = (a * 4);
	printf("\n\nL'area del quadrato e': %f\nIl perimetro invece è %f", area, perimeter);
}

void calcCircle() {
	float PI = 3.141592; // const

	float radius;
	printf("\n\nInserisci il raggio del cerchio\n>> ");
	scanf("%f", &radius);

	float circumference = 2*radius*PI;
	float area = radius*radius*PI;
	printf("\nLa circonferenza e': %f\nL'area e': %f", circumference, area);
}

int main(int argv, char** argc) {
    int selection;
    
    printf("Menu di selezione\n");
    printf("    1. Perimetro e area quadrato\n");
    printf("    2. Perimetro e area trapezio regolare\n");
    printf("    3. Perimetro e area triangolo\n");
    printf("    4. Circonferenza e area del cerchio\n >> ");
    scanf("%d", selection);
    clrscr();

    switch (selection)
    {
    case 1:
        calcSquare();
        break;
    case 2:
        break;
    case 3:
        calcTriang();
        break;
    case 4:
        calcCircle()
        break;
    
    default:
        break;
    }

	return 0;
}