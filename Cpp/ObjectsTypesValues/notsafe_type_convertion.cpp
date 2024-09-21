#include <iostream>

int main()
{
	double d = 0;
	while (std::cin >> d) { // Powtarza poni¿sze instrukcje dopóty,
		// dopóki s¹ wpisywane liczby
		int i = d; // Próba wciœniêcia liczby typu double do typu int
		char c = i; // Próba wciœniêcia liczby typu int do typu char
		int i2 = c; // Pobranie wartoœci ca³kowitoliczbowej odpowiadaj¹cej znakowi
		std::cout << "d==" << d // Oryginalna liczba typu double
			<< " i==" << i // Po konwersji na typ int
			<< " i2==" << i2 // Wartoœæ int typu char
			<< " char(" << c << ")\n"; // Typ char
	}
}