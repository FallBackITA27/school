#include <cstring>
#include <iostream>

// "abbcccddddeeeeeffffffggggggg" -> "a1b2c3d4e5f6g7"
char* rle(char* const str) {
	int len = strlen(str); // Lunghezza stringa iniziale
	if (len==0) return str;
	len++; // Includi nullterm

	char* lastChar = str;

	for (char* pc = lastChar+1; *(pc-1) != '\0'; pc++)
		if (*pc != *lastChar) {
			len -= pc-lastChar-2; // 2 n char aggiunti

			std::memmove(lastChar+2, pc, len);
			*(lastChar+1) = pc-lastChar+'0';

			lastChar+=2;
			pc=lastChar+1;
		}

	return str;
}

int main() {
	char testStr[100+1] = "abbcccddddeeeeeffffffggggggg";
	std::cout << rle(testStr) << std::endl;
}

