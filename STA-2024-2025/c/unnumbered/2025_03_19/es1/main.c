
#include <stdio.h>
#include <time.h>

int main(){
    int age;
    printf("Inserisci la tua eta'\n");
    scanf("%d",&age);
    if (age < 0) {
        printf("eta' invalida\n");
        return 0;
    }
    
    printf("Il costo del biglietto del cinema e' ");
    switch (age) {
        case 0 ... 3:
            printf("0");
            break;
        case 4 ... 12:
            printf("5");
            break;
        case 13 ... 17:
            printf("8");
            break;
        case 18 ... 65:
            printf("12");
            break;
        default:
            printf("6");
    }

    printf(" euro\n");

    return 0;
}