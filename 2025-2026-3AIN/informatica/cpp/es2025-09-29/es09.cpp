/*  Diego Massanova - 3AIN 2025/2026
    Esercizi "Ese Operatori e Cicli" Zoli - N.9
    https://docs.google.com/document/d/1FmxrwJKqoey4UKLPMDWbG7ubtd2lRg6Ok15qnMSEGWE/edit?tab=t.0
*/

#include <iostream>

int main(void) {

	unsigned int max = 0;
	unsigned int num = 0;
	std::cout << "Inserisci un numero naturale\n >> ";
	std::cin >> max;
	std::cout << "Inserisci un altro numero naturale\n >> ";
	std::cin >> num;
	
	if (max < num) {
		std::cout << "Tutti e " << max << " i numeri sono minori di " << num << std::endl;
	} else if (max == num) {
		std::cout << "Ci sono " << max-1 << " numeri minori di " << num << " e 1 numero uguale" << std::endl;
	} else {
		unsigned int moreThan = max-num;
		std::cout << "Ci sono " << max-1-moreThan << " numeri minori di " << num << ", 1 numero uguale e " << moreThan << " numeri maggiori" << std::endl;
	}

	return 0;
}