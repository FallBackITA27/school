#include <stdio.h>

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

    int sum = 0;
    for (; i >= 0; i--) sum += data[i];
    printf("La somma e' %d", sum);

    return 0;
}