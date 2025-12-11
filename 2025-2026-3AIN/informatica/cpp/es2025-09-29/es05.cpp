/*  Diego Massanova - 3AIN 2025/2026
    Esercizi "Ese Operatori e Cicli" Zoli - N.5
    https://docs.google.com/document/d/1FmxrwJKqoey4UKLPMDWbG7ubtd2lRg6Ok15qnMSEGWE/edit?tab=t.0
*/

#include <iostream>
#include <bitset>

int main(void) {
	int i;
	bool fail;

	std::cout << "Punto A." << std::endl;

	do {

		std::cout << "Inserisci quanti numeri sommare" << std::endl << " > ";
		std::cin >> i;
		fail = i  < 0;
		if (!fail) continue;
		std::cout << "Impossibile sommare n numeri dove n e' negativo" << std::endl;
	} while (fail);

	int x = 0;
	for (; i > 0; i--) {
		int temp;
		std::cout << "Inserisci un numero" << std::endl << " > ";
		std::cin >> temp;
		x += temp;
	}

	std::cout << "La somma dei numeri e' " << x << std::endl;

	std::cout << "Punto B." << std::endl;

	x = 0;

	do {
		std::cout << "Inserisci un numero, o 0 per interrompere la somma" << std::endl << " > ";
		std::cin >> i;

		x += i;
	} while (i);

	std::cout << "La somma dei numeri e' " << x << std::endl;

	std::cout << "Punto C." << std::endl;

	x = 0;

	do {
		std::cout << "Inserisci un numero, o 1 per interrompere la moltiplicazione" << std::endl << " > ";
		std::cin >> i;

		x *= i;
	} while (i!=1);

	std::cout << "Il prodotto dei numeri e' " << x << std::endl;
	
	std::cout << "Punto D." << std::endl;

	x = 1;

	do {
		std::cout << "Inserisci un numero, o 0 per interrompere la conta" << std::endl << " > ";
		std::cin >> i;

		x += (i % 2);
	} while (i);

	std::cout << "Il numero di numeri dispari e' " << x << std::endl;

	std::cout << "Punto E." << std::endl;

	x = 0;
	unsigned short f;

	std::cout << "Inserisci un numero naturale" << std::endl << " > ";
	std::cin >> f;
	
	std::cout << "Il numero inserito e' " << f << std::endl;
	std::cout << "Ha dimensione " << sizeof(f) << std::endl;
	std::cout << "Ed in binario e' scritto " << std::bitset<sizeof(f)*8>(f) << std::endl;



	return 0;
}