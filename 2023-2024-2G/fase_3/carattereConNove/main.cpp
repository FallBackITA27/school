#include <stdio.h>
#include "../endFunction.h"

int main(int argv, char** argc) {
    int n;
    char input;
	int state;
	const int ISNT_ALLOWED = 0;
	const int IS_UPPERCASE = 1;
	const int IS_LOWERCASE = 2;
	const int NINE_CODE = 57;

    printf("Inserisci il numero di valori\n > ");
    scanf("%d", &n);
	
	for (int i = 0; i < n; i++ ) {
		// reset state
		fflush(stdin);
		state = ISNT_ALLOWED;
		
    	printf("\nInserisci un carattere\n > ");
		scanf("%c", &input);
		
		for (int j = 65; j <= 90; j++) if (j == (int)input) state = IS_UPPERCASE;
		for (int j = 97; j <= 122; j++) if (j == (int)input) state = IS_LOWERCASE;
		if (state == ISNT_ALLOWED) {
			printf("Il carattere deve essere una lettere latina non accentata maiuscola o minuscola.\n");
			continue;
		}
		if (state == IS_LOWERCASE) {
			printf("Il carattere e' minuscolo.\nLo stesso carattere maiuscolo sarebbe: %c\n", (int)input - 32);
		} else if (state == IS_UPPERCASE) {
			printf("Il carattere e' maiuscolo.\nLo stesso carattere minuscolo sarebbe: %c\n", (int)input + 32);
		}
		int difference = (int)input - NINE_CODE;
		printf("Per trasformare il carattere nel carattere '9', bisognerebbe sottrarre %d al character code.\n", difference);
	}

    return end();
}
