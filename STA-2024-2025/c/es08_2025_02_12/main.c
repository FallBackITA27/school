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

    printf("I due nomi hanno lunghezze ");
    if (strcmp(str1, str2)==0) {
        printf("uguali\n");
    } else {
        printf("diversi\n");
    }

	return 0;
}
