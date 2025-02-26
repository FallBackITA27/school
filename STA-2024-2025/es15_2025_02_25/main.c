#include <stdio.h>

int main() {
    int i = 0;
    printf("Inserisci un numero\n>> ");
    scanf("%d", &i);
    fflush(stdin);

    int isB = i < 0; 
    if (isB) i = -i;   

    for (; i > 0; i--) {
        if (isB) {
            printf("B");
        } else {
            printf("A");
        }
    }

    printf("\n");

    return 0;
}