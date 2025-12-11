/*  Diego Massanova - 3AIN 2025/2026
    Esercizio 1 Zoli - Numeri in basi diverse
    https://classroom.google.com/c/NzgwNTkwMTcwMTc3/a/ODE0NTAzODM1MDY5/details
*/

#include <iostream>
#include <iomanip>

int main() {
	/* Punto 1 */
	int aDec = 42, aHex = 0x2A, aOct = 052, aBin = 0b00101010;

	/* Punto 2 */
	std::cout
	        << "Valore: " << aDec << std::endl
	        << "Valore dichiarato come hex: " << aHex << std::endl
	        << "Valore dichiarato come oct: " << aOct << std::endl
	        << "Valore dichiarato come bin: " << aBin << std::endl
	        << std::endl
	        /* Punto 3 */
	        << "Valore rapp. hex: 0x" << std::hex << aDec << std::endl
	        << "Valore rapp. oct: 0" << std::oct << aDec << std::endl
	        // << "Valore rapp. bin: 0b" << ??? << a << std::endl
	        << std::dec;
	return 0;
}