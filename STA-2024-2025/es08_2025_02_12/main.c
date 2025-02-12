#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argv, char** argc) {
    char str1[255] = "";  
    char str2[255] = "";
    
    printf("Dammi un nome\n >> ");
    gets(str1);

    printf("Dammi un altro nome\n >> ");
    gets(str2);

    for (int i = 0; i < strlen(str1); i++) {
        tolower(str1[i]);
    } 
    for (int i = 0; i < strlen(str1); i++) {
        tolower(str2[i]);
    } 

    printf("I due nomi sono ");
    if (strcmp(str1, str2)==0) {
        printf("uguali");
    } else {
        printf("diversi");
    }

	return 0;
}
