
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define PASSLEN 40

void main() {
    char password[PASSLEN];
    char consonants[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

    printf("Inserisci la tua password\n >> ");
    scanf("%s", password);
    
    for (int i = 0; i < PASSLEN; i++) 
        for (int j = 0; j < sizeof(consonants); j++) 
            if (consonants[j] == password[i]) {
                password[i] = 42;
                break;
            }

    printf("%s", password);
}