/*  Diego Massanova - 3AIN 2025/2026
    Esercizi "Ese Operatori e Cicli" Zoli - N.8
    https://docs.google.com/document/d/1FmxrwJKqoey4UKLPMDWbG7ubtd2lRg6Ok15qnMSEGWE/edit?tab=t.0
*/

#include <iostream>
#include <stdexcept>

int main(void) {

	unsigned int num = 0;
	std::cout << "Inserisci un numero naturale\n >> ";
	std::cin >> num;

	for (unsigned int i = 0; i < num; i++) {
		std::cout << i << ": ";

		if (i % 3 == 0) std::cout << "Fizz";
		if (i % 5 == 0)	std::cout << "Buzz";
		std::cout << std::endl;
	}

	return 0;
}