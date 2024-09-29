#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int askn = 0, number = 0;
	double max = 0, min = 0;
	char answer;
	bool checkA = false, checkB = false;
	std::cout << "Type number to guess: ";
	std::cin >> number;
	std::cout << "Is your number higher than 50?" << std::endl;
	std::cin >> answer;
	if (answer == 'y')
	{
		min = 50;
		max = 100;
	}
	else if (answer == 'n')
	{
		min = 1;
		max = 50;
	}
	std::vector<int> numbers(max);
	for (int i = 0; i < max; i++)
	{
		if (i == 0)
		{
			numbers[i] = min;
		}
		else if (i != 0)
		{
			numbers[i] = numbers[i - 1] + 1;
		}
	}

	while (checkA==false)
	{
		if (numbers.size()>=5)
		{
			std::cout << numbers.size();
			std::cout << "Is your number lower than " << numbers[numbers.size() / 2] << "?" << std::endl;
			std::cin >> answer;
			if (answer == 'y')
			{
				max = (numbers[numbers.size() / 2]) - min;
				numbers.resize(max);
			}
			else if (answer == 'n')
			{
				min = numbers[numbers.size() / 2];
				max -= min;
				numbers.resize(max);
			}

			for (int i = 0; i < max; i++)
			{
				if (i == 0)
				{
					numbers[i] = min;
				}
				else if (i != 0)
				{
					numbers[i] = numbers[i - 1] + 1;
				}
			}
			std::sort(numbers.begin(), numbers.end());
		}

		if (numbers.size() >= 5)
		{
			std::cout << numbers.size();
			std::cout << "Is your number higher than " << numbers[numbers.size() / 2] << "?" << std::endl;
			std::cin >> answer;
			if (answer == 'y')
			{
				min = numbers[numbers.size() / 2];
				max -= min;
				numbers.resize(max);
			}
			else if (answer == 'n')
			{
				max = (numbers[numbers.size() / 2]) - min;
				numbers.resize(max);
			}

			for (int i = 0; i < max; i++)
			{
				if (i == 0)
				{
					numbers[i] = min;
				}
				else if (i != 0)
				{
					numbers[i] = numbers[i - 1] + 1;
				}
			}
			std::sort(numbers.begin(), numbers.end());
		}

		if (numbers.size()<5)
		{
			for (int i : numbers)
			{
				std::cout << i << "\t";
			}
		}
	}
	system("pause");
}