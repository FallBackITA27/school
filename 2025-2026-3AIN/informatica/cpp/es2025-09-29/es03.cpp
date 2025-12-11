/*  Diego Massanova - 3AIN 2025/2026
    Esercizi "Ese Operatori e Cicli" Zoli - N.3
    https://docs.google.com/document/d/1FmxrwJKqoey4UKLPMDWbG7ubtd2lRg6Ok15qnMSEGWE/edit?tab=t.0
*/

#include <iostream>

int main(void) {
	int x;

	bool fail = false;
	do {
		std::cout << "Inserisci una temperatura pericolosa per l'uomo (-50 a 50)" << std::endl << " > ";
		std::cin >> x;
		fail = (x < -50 || x > 50);
		if (!fail) continue;
		std::cout << "Errore, temperatura fuori range!" << std::endl;
	} while (fail);

	return 0;
}