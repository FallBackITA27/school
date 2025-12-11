/*  Diego Massanova - 3AIN 2025/2026
    Esercizi "Ese Operatori e Cicli" Zoli - N.10
    https://docs.google.com/document/d/1FmxrwJKqoey4UKLPMDWbG7ubtd2lRg6Ok15qnMSEGWE/edit?tab=t.0
*/

#include <iostream>
#include 

int main(void) {

	unsigned int max = std::INT_MIN;
	unsigned int min = std::INT_MAX;
	unsigned int maxCounter = 0;
	unsigned int minCounter = 0;
	unsigned int counter = 0;
	
	while(true) {
		unsigned int temp = 0;
		
		std::cin >> temp;
		
		if (temp == 0) break;
		
		if (temp < min){
		} min = temp;
		if (temp > max) {
		}max = temp;
	}
}