/*  Diego Massanova - 3AIN 2025/2026
    Esercizi "Ese Operatori e Cicli" Zoli - N.1
    https://docs.google.com/document/d/1FmxrwJKqoey4UKLPMDWbG7ubtd2lRg6Ok15qnMSEGWE/edit?tab=t.0
*/

#include <iostream>

int main(void) {
	int x;

	std::cout << "Inserisci un numero" << std::endl << " > ";
	std::cin >> x;

	if (x < 0) x = -x;

	std::cout << "Il valore assoluto del numero e' " << x << std::endl;

	return 0;
}