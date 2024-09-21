#include <iostream>

int main()
{
	std::string current, previous;
	int x = 0;

	while (std::cin >> current)
	{
		if (current == previous)
		{
			std::cout << "You used this: " << previous << " Word before\n";
			x++;
		}
		else if (current == "exit")
		{
			std::cout << "Number of repetition words is: " << x << "\n";
		}
		else
		{
			previous = current;
		}
	}
	system("pause");
}