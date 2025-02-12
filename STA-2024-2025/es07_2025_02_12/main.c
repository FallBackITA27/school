#include <stdio.h>
#include <string.h>


int main(int argv, char** argc) {
    char str1[255] = "";  
    char str2[255] = "";
    char str3[255] = "";
    
    printf("Inserisci il tuo nome\n >> ");
    gets(str1);

    printf("Inserisci il tuo cognome\n >> ");
    gets(str2);

    printf("Inserisci il tuo codice fiscale\n >> ");
    gets(str3);

    printf("Nome: %s (%d)\nCognome: %s (%d)\nCodice Fiscale: %s (%d)\n", str1, strlen(str1), str2, strlen(str2), str3, strlen(str3));

	return 0;
}
