#include <stdio.h>
#include <string.h>


int main(int argv, char** argc) {
    char str1[255] = "";  
    char str2[255] = "";
    
	printf("Questo programma copia una stringa data in input.\n-- Massanova\n\n");

    printf("Inserisci la stringa\n >> ");
    gets(str2);

    strcpy(str1, str2);
    
    printf("Stringa copiata: %s\n", str2);

	return 0;
}
