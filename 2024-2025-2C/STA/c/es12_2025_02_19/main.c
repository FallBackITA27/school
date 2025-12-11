#include <stdio.h>
#include <limits.h>

int main() {
    int i = 0;

    printf("Inserisci un numero\n>> ");
    scanf("%d", &i);
    fflush(stdin);

    printf("Il fattoriale di %d ", i);
    
    int res = 0;
    i = res;
    i--;
    for (; i >= 0; i--) res = res*i;

    printf("e' %d.", res);

    return 0;
}