/*  Diego Massanova - 3AIN 2025/2026
    Esercizi "Ese Operatori e Cicli" Zoli - N.7
    https://docs.google.com/document/d/1FmxrwJKqoey4UKLPMDWbG7ubtd2lRg6Ok15qnMSEGWE/edit?tab=t.0
*/

#include <iostream>
#include <ctime>


enum HouseRooms : unsigned char {
	Cucina = 0b00000001,
	Sala = 0b00000010,
	Balcone = 0b00000100,
	Luci = 0b00001000,
	Ingresso = 0b00010000,
	Letto1 = 0b00100000,
	Letto2 = 0b01000000,
	Bagno = 0b10000000
};

int main(void) {

	srand((unsigned)time(0));
	bool repeat = false;

	do {

		int rn = rand();
	
		for (unsigned char mask = 0b00000001; mask > 0; mask <<= 1) {
			bool status = (mask & rn) > 0;

			std::string room;

			switch (mask) {
				case HouseRooms::Cucina:
					room = "Cucina";
					break;
				case HouseRooms::Sala:
					room = "Sala";
					break;
				case HouseRooms::Balcone:
					room = "Balcone";
					break;
				case HouseRooms::Luci:
					room = "Luci";
					break;
				case HouseRooms::Ingresso:
					room = "Ingresso";
					break;
				case HouseRooms::Letto1:
					room = "Letto 1";
					break;
				case HouseRooms::Letto2:
					room = "Letto 2";
					break;
				case HouseRooms::Bagno:
					room = "Bagno";
					break;
			}

			std::cout << "Status " << room << ": " << ((status) ? "On" : "Off") << std::endl;
		};

		std::cout << std::endl << "Ripetere? [Y/n] \n >> ";
		
		std::string prompt;
		std::cin >> prompt;
		
		// Probabilmente piu' efficente con un loop ma meno pulito.
		repeat = prompt.find("Y") != std::string::npos || prompt.find("y") != std::string::npos;
	} while (repeat);

	return 0;
}