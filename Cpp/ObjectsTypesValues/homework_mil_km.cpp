#include <iostream>

double funKmMil(double k)
{
	k /= 1.609;
	return k;
}

double funMilKm(double m)
{
	m *= 1.609;
	return m;
}

int main()
{
	int option = 0;
	double usr_input = 0;
	bool correct = false;

	std::cout << "What do you want to convert?\nKm to Miles - [1]\nMiles to Km - [2]\n";

	do
	{
		std::cout << "\n$---: ";
		std::cin >> option;
		if (option < 1 || option > 2)
		{
			std::cout << "Wrong option! Try again.";
			option = 0;
		}
	} while (option == 0);

	std::cout << "Type what distance you want to convert:\n";
	do
	{
		std::cout << "\n$---: ";
		std::cin >> usr_input;
		if (usr_input < 0.1)
		{
			std::cout << "This distance is too small to be converted. Try again.";
		}
		if (usr_input > 9999999)
		{
			std::cout << "This distance is too big to be converted. Try again.";
		}
		else
		{
			correct = true;
		}
	} while (correct == false);

	if (option == 1)
	{
		double sum = funKmMil(usr_input);
		std::cout << "Km: " << usr_input << " is: " << sum << "Miles.\n";
	}
	else
	{
		double sum = funMilKm(usr_input);
		std::cout << "Miles: " << usr_input << " is: " << sum << "Km.\n";
	}
	system("pause");
}