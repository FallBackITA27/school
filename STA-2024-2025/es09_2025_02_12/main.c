#include <stdio.h>
#include <string.h>


int main(int argv, char** argc) {
    char str1[255] = "";
    char str1andahalf[255] = "";
    char str2[255] = "";
    
    // Non funziona in modo semplice perché scanf separa con gli spazi gli args.
    printf("Inserisci il tuo nome e il tuo cognome\n >> ");
    scanf("%[^\n]", str1);
    fflush(stdin);

    printf("Inserisci il tuo nome e il tuo cognome ancora\n >> ");
    gets(str2);

    printf("Stringhe:\n- %s\n- %s", str1, str2);

	return 0;
}
