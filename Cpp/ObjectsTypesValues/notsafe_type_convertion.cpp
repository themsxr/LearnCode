#include <iostream>

int main()
{
	double d = 0;
	while (std::cin >> d) { // Powtarza poni�sze instrukcje dop�ty,
		// dop�ki s� wpisywane liczby
		int i = d; // Pr�ba wci�ni�cia liczby typu double do typu int
		char c = i; // Pr�ba wci�ni�cia liczby typu int do typu char
		int i2 = c; // Pobranie warto�ci ca�kowitoliczbowej odpowiadaj�cej znakowi
		std::cout << "d==" << d // Oryginalna liczba typu double
			<< " i==" << i // Po konwersji na typ int
			<< " i2==" << i2 // Warto�� int typu char
			<< " char(" << c << ")\n"; // Typ char
	}
}