/*  Diego Massanova - 3AIN 2025/2026
    Esercizi "Ese Operatori e Cicli" Zoli - N.6
    https://docs.google.com/document/d/1FmxrwJKqoey4UKLPMDWbG7ubtd2lRg6Ok15qnMSEGWE/edit?tab=t.0
*/

#include <iostream>

int main(void) {
	int x;

	std::cout << "Inserisci un qualsiasi intero" << std::endl << " > ";
	std::cin >> x;
	
	std::cout << "Il numero diviso 2 e' uguale a " << (x >> 1) << std::endl;

	return 0;
}