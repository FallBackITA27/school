#include <stdio.h>

int main() {
    printf("Questo programma calcola il prodotto tra due numeri in input.\n\n");

    int a = 0;
    int b = 0;

    printf("Inserisci il primo valore:\n>> ");
    scanf("%d", &a);
    printf("\nInserisci il secondo valore:\n>> ");
    scanf("%d", &b);

    int ris = a*b;

    printf("\nIl prodotto tra %d e %d e' %d", a, b, ris);

    return 0;
}