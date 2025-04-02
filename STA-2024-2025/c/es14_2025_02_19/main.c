#include <stdio.h>

int main() {
    // unoptimized asf lol
    int data[100];
    int odd[100];
    int even[100];

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

    int evenIndex = 0;
    int oddIndex = 0;
    for (; i >= 0; i--) {
        if (data[i] % 2) {
            even[evenIndex] = data[i];
            evenIndex++;
            continue;
        }
        odd[oddIndex] = data[i];
        oddIndex++;
    }

    return 0;
}