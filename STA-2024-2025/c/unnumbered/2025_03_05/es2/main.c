
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


void main() {
    int arrLen;
    printf("Inserisci la lunghezza dell'array\n >> ");
    scanf("%d", &arrLen);

    int *arr = malloc(arrLen);

    int maxVal;
    printf("Inserisci un valore massimo\n >> ");
    scanf("%d", &maxVal);

    int minVal;
    printf("Inserisci un valore minimo\n >> ");
    scanf("%d", &minVal);

    int diffVal = maxVal - minVal;

    srand(time(NULL));

    int i;
    for (i = 0; i < arrLen; i++) {
        arr[i] = (rand() % diffVal) + minVal;
    }

    int firstValCounter = 0;
    printf("Ecco %d numeri casuali tra %d e %d\n", arrLen, minVal, maxVal);
    for (i = 0; i < arrLen; i++) {
        printf("%d", arr[i]);
        if (arr[0] == arr[i]) {
            firstValCounter++;
            printf(" [-]");
        }
        printf("\n");
    }

    printf("Il primo valore e' %d ed appare %d volta/e", arr[0], firstValCounter);

}