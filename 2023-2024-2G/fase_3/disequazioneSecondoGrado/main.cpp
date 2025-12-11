#include <stdio.h>
#include <stdlib.h> // Redundant?
#include <math.h>
#include "../endFunction.h"

int main() {
	int a, b, c;
	
	printf("Inserisci a, b e c nella equazione di secondo grado `a(x^2) + bx + c` per risolverla\na> ");
	scanf("%d", &a);
	printf("\nb> ");
	scanf("%d", &b);
	printf("\nc> ");
	scanf("%d", &c);
	
	if (a == 0) {
		printf("\nNon e' di secondo grado!\nx = %d = %d/%d", (c/b), c, b);
		return end(); // volevo usare un goto ma insomma, non funge
	}
	
	signed delta = (b * b) - (4 * a * c);
	
	if (delta < 0) {
		printf("Il delta e' negativo! (%d); Non sono ammesse soluzioni reali", delta);
		return end();
	} else if (delta == 0) {
		printf("Il delta e' uguale a zero! (0); Le soluzioni sono coincidenti\n");
		printf("x = %d", -b / (a * 2));
		return end();
	}
	
	signed x1 = (-b + sqrt(delta)) / (a * 2);
	signed x2 = (-b - sqrt(delta)) / (a * 2);

	printf("\nx1 = %d\nx2 = %d", x1, x2);
	
	return end();
}
