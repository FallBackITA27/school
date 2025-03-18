
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#ifdef _WIN32
#include <conio.h>
#else
#define clrscr() printf("\e[1;1H\e[2J")
#endif


int main(){
    int sc;
    while (1) {
        clrscr();
        printf("MENU' DELLE FUNZIONALITA'\n");
        printf("1. stampa due numeri casuali\n");
        printf("2. calcola l'area e la circonferenza di un cerchio dato il raggio\n");
        printf("3. calcolo affinità di coppia dati i nomi\n");
        printf("4. ESCI DAL PROGRAMMA\n");
        printf("SCELTA:\n");
        scanf("%d",&sc);
        switch (sc) {
        case 1:
            srand(time(NULL));
            printf("%d\n", rand());
            printf("%d\n", rand());
            break;
        case 2:
            float PI = 3.141592; // const
            float radius;
            printf("Inserisci il raggio del cerchio\n>> ");
            scanf("%f", &radius);
            float circumference = 2*radius*PI;
            float area = radius*radius*PI;
            printf("\nLa circonferenza e': %f\nL'area e': %f", circumference, area);
            break;
        case 3:
            // 3. calcolo affinità di coppia dati i nomi
            break;
        case 4:
            goto exit;
        default:
            printf("VALORE ERRATO\n");
        }
        if (sc == 4) break;

        printf("Premi enter per continuare\n");  
        getchar();
    }
    exit:
    return 0;
}