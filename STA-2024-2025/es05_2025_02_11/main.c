#include <stdio.h>
#include <string.h>


int main(int argv, char** argc) {
    char str1[7] = "Ciao, ";  
    char str2[7] = "mondo!";


	char finalStr[14] = strcat(str1, str2);
   //....cocatenare.....


    printf("Stringa concatenata: %s\n", finalStr);

	return 0;
}
