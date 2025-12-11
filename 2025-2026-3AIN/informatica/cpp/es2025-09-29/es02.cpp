/*  Diego Massanova - 3AIN 2025/2026
    Esercizi "Ese Operatori e Cicli" Zoli - N.2
    https://docs.google.com/document/d/1FmxrwJKqoey4UKLPMDWbG7ubtd2lRg6Ok15qnMSEGWE/edit?tab=t.0
*/

#include <iostream>

int main(void) {
	int x;

	bool fail = false;
	do {

		std::cout << "Inserisci un'eta' umana (0 a 120)" << std::endl << " > ";
		std::cin >> x;
		fail = (x < 0 || x > 120);
		if (!fail) continue;
		std::cout << "Errore, eta' impossibile!" << std::endl;
	} while (fail);

	return 0;
}