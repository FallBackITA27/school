
#include <time.h>
#include <stdlib.h>


void main() {
    int a;
    printf("Inserisci un numero\n >> ");
    scanf("%d", &a);

    int columns = 2;
    
    for(int compareExponent = 1; compareExponent < a; compareExponent = compareExponent*10) columns++;

    srand(time(NULL));

    printf("Ecco 100 numeri casuali tra 0 e %d\n", a);
    for (int i =0;i <4;i++) {
        for (int j=0;j<25;j++){
            char str[100] = "\0";
            sprintf(str, "%d", rand() % a);
            
            // clean code
            strncat(str, "                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    ", columns - strlen(str));
            printf("%s", str);
        }
        printf("\n");
    }
}