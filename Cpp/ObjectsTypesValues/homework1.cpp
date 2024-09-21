#include <iostream>

int main()
{
	std::string first_name;
	std::string friend_name;
	std::string xyz;
	int age = 0;
	char sex;

	std::cout << "Name: ";
	std::cin >> first_name;
	std::cout << "\nHi " << first_name << "\nHow is it going?\n";
	std::cout << "Your friend name: ";
	std::cin >> friend_name;
	std::cout << "\nDid you see " << friend_name << " ? \n";
	std::cout << "What\'s friend sex? (Type m - for male or f - for female): ";

	for (int s=0;s<1;)
	{
		std::cin >> sex;
		if (sex == 'm')
		{
			std::cout << "Can you ask him to call me, please?\n";
			s++;
		}
		else if (sex == 'f')
		{
			std::cout << "Can you ask her to call me, please?\n";
			s++;
		}
		else
		{
			std::cout << "Please type correct option!\n";
		}
	}
	std::cout << "How old is your friend?: ";

	for (int s=0;s<1;)
	{
		std::cin >> age;
		if (age < 0 || age > 111)
		{
			std::cout << "Are you kidding me? Try again!\n";
		}
		else
		{
			s++;
		}
	}
	std::cout << "\nI heard you had a birthday and you're now " << age << "years old.\n";

	if (age == 12)
	{
		std::cout << "In next year you'll be " << age++ << "!\n";
	}
	else if (age == 17)
	{
		std::cout << "In next year you'll be able to vote!\n";
	}
	else if (age > 70)
	{
		std::cout << "I wish you a pleasant time in retirement.\n";
	}
	std::cout << "Greetings\n\n";
	std::cin >> xyz;
	std::cout << xyz;
	system("pause");
}