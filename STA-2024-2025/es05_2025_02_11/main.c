#include <stdio.h>
#include <string.h>


int main(int argv, char** argc) {
    char str1[7] = "Ciao, ";  
    char str2[7] = "mondo!";

    strcat(str1, str2);
    printf("Stringa concatenata: %s\n", str1);

	return 0;
}
