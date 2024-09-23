#include <iostream>

int square(int x)
{
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		sum += x;
	}
	return sum;
}

int main()
{
	int usr_input;
	std::cin >> usr_input;
	std::cout << square(usr_input);
	system("pause");
}