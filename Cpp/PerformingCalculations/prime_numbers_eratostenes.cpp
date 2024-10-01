#include <iostream>
#include <vector>

int main()
{
	int n = 2, max = 100;
	std::vector<int> prime_nums = {};
	std::cin >> max;
	while (n<max)
	{
		prime_nums.push_back(n + 1);
		n += 2;
	}

	for (int x : prime_nums)
	{
		std::cout << std::endl << x;
	}
	system("pause");
}