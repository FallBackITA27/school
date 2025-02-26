#include <stdio.h>
#include <limits.h>

int main() {
    int data[100];

    int i = 0;

    while (1) {
        printf("Inserisci un numero\n>> ");
        scanf("%d", &data[i]);
        fflush(stdin);
        
        if (i == 100) {
            printf("Massimo raggiunto!\n");
            break;
        }

        printf("Vuoi continuare ad inserire?\n\t[S]i\t[N]o\n>> ");
        char out = getchar();
        fflush(stdin);
        if (out == 110 || out == 78) {
            break;
        }

        i++;
    }

    int max = INT_MIN;
    int min = INT_MAX;
    for (; i >= 0; i--) {
        if (data[i] > max) max = data[i];
        if (data[i] < min) min = data[i];
    }
    printf("Il massimo e' %d\nIl minimo e' %d", max, min);

    return 0;
}