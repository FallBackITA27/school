#include <stdio.h>
#include "../endFunction.h"

int main(int argv, char** argc) {
    int n, offset, character_start;
    char input;
	bool is_allowed;
	const int UPPERCASE_A = 65;
	const int UPPERCASE_Z = 90;
	const int LOWERCASE_A = 97;
	const int LOWERCASE_Z = 122;
	const int MAX = 58;
	const char CHARS[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	
    printf("Inserisci il numero di valori\n > ");
    scanf("%d", &n);
	
	for (int i = 0; i < n; i++ ) {
		fflush(stdin);
		offset = -1;
    	printf("\nInserisci un carattere\n > ");
		scanf("%c", &input);

		for (int i = 0; i < 53; ++i) if (CHARS[i] == input) {
			is_allowed = true;
			character_start = i;
		}
		
		if (!is_allowed) {
			printf("Il carattere deve essere una lettere latina non accentata maiuscola o minuscola.\n");
			n++; // retry se non c'è un carattere.
			continue;
		}
		
		do {
    		printf("\nInserisci un offset\n > ");
			scanf("%d", &offset);
		} while (offset < 0);
		
		printf("Con un offset di %d, il carattere che cerchi e' %c\n", offset, CHARS[(character_start + offset) % 53]);
	}

    return end();
}
