/*  Diego Massanova - 3AIN 2025/2026
    Esercizi "Ese Operatori e Cicli" Zoli - N.4
    https://docs.google.com/document/d/1FmxrwJKqoey4UKLPMDWbG7ubtd2lRg6Ok15qnMSEGWE/edit?tab=t.0
*/

#include <iostream>

int main(void) {
	unsigned int x;

	std::cout << "Inserisci un qualsiasi intero nullo o positivo" << std::endl << " > ";
	std::cin >> x;

	unsigned int i = 1;
	for (; x > 1; x /= 10) i++;

	std::cout << "Il numero e' composto da " << i << " cifre." << std::endl;

	return 0;
}