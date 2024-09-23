#include <iostream>

int main()
{
	int usr_input;
	double p = 0;
	char option1, option2;
	
	std::cout << "What\'s your currency you want to use to exchange? (EUR - 1, USD - 2, PLN - 3, GBP - 4, JPY - 5\n$---: ";
	std::cin >> option1;
	
	switch (option1)
	{
	case '1':
		std::cout << "Your currency is EUR, now choose second currency you want to exchange your current currency (USD - 1, PLN - 2, GBP - 3, JPY - 4)\n$---: ";
		std::cin >> option2;
		switch (option2)
		{
		case '1':
			p = 1.11;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " EUR to USD is: " << usr_input * p << " USD\n";
			break;
		case '2':
			p = 4.28;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " EUR to PLN is: " << usr_input * p << " PLN\n";
			break;
		case '3':
			p = 0.84;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " EUR to GBP is: " << usr_input * p << " GBP\n";
			break;
		case '4':
			p = 159.29;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " EUR to JPY is: " << usr_input * p << " JPY\n";
			break;
		default:
			std::cout << "\n\nWrong option.\n";
			break;
		}
		break;
	case '2':
		std::cout << "Your currency is USD, now choose second currency you want to exchange your current currency (EUR - 1, PLN - 2, GBP - 3, JPY - 4)\n$---: ";
		std::cin >> option2;
		switch (option2)
		{
		case '1':
			p = 0.90;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " USD to EUR is: " << usr_input * p << " EUR\n";
			break;
		case '2':
			p = 3.85;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " USD to PLN is: " << usr_input * p << " PLN\n";
			break;
		case '3':
			p = 0.75;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " USD to GBP is: " << usr_input * p << " GBP\n";
			break;
		case '4':
			p = 143.41;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " USD to JPY is: " << usr_input * p << " JPY\n";
			break;
		default:
			std::cout << "\n\nWrong option.\n";
			break;
		}
		break;
	case '3':
		std::cout << "Your currency is PLN, now choose second currency you want to exchange your current currency (USD - 1, EUR - 2, GBP - 3, JPY - 4)\n$---: ";
		std::cin >> option2;
		switch (option2)
		{
		case '1':
			p = 0.26;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " PLN to USD is: " << usr_input * p << " USD\n";
			break;
		case '2':
			p = 0.23;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " PLN to EUR is: " << usr_input * p << " EUR\n";
			break;
		case '3':
			p = 0.20;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " PLN to GBP is: " << usr_input * p << " GBP\n";
			break;
		case '4':
			p = 37.27;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " PLN to JPY is: " << usr_input * p << " JPY\n";
			break;
		default:
			std::cout << "\n\nWrong option.\n";
			break;
		}
		break;
	case '4':
		std::cout << "Your currency is GBP, now choose second currency you want to exchange your current currency (USD - 1, EUR - 2, PLN - 3, JPY - 4)\n$---: ";
		std::cin >> option2;
		switch (option2)
		{
		case '1':
			p = 1.33;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " GBP to USD is: " << usr_input * p << " USD\n";
			break;
		case '2':
			p = 1.20;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " GBP to EUR is: " << usr_input * p << " EUR\n";
			break;
		case '3':
			p = 5.12;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " GBP to PLN is: " << usr_input * p << " PLN\n";
			break;
		case '4':
			p = 190.68;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " GBP to JPY is: " << usr_input * p << " JPY\n";
			break;
		default:
			std::cout << "\n\nWrong option.\n";
			break;
		}
		break;
	case '5':
		std::cout << "Your currency is JPY, now choose second currency you want to exchange your current currency (USD - 1, PLN - 2, GBP - 3, EUR - 4)\n$---: ";
		std::cin >> option2;
		switch (option2)
		{
		case '1':
			p = 0.0070;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " JPY to USD is: " << usr_input * p << " USD\n";
			break;
		case '2':
			p = 0.0063;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " JPY to EUR is: " << usr_input * p << " EUR\n";
			break;
		case '3':
			p = 0.0052;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " JPY to GBP is: " << usr_input * p << " GBP\n";
			break;
		case '4':
			p = 0.027;
			std::cout << "\nAmout: ";
			std::cin >> usr_input;
			std::cout << usr_input << " JPY to PLN is: " << usr_input * p << " PLN\n";
			break;
		default:
			std::cout << "\n\nWrong option.\n";
			break;
		}
		break;
	default:
		std::cout << "Wrong option.";
		break;
	}
	system("pause");
}