#include <iostream>
#include <vector>

int checkPrime(int x)
{
	int a = 0, res = 0;
	bool chk = false;
	std::vector<int> nums(x);
	for (int i = 0; i <= x; i++)
	{
		nums[i] = i + 1;
	}
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i]>1)
		{
			for (int z = 2; z < nums.size(); z++)
			{
				if (nums[i]*z==x)
				{
					chk = true;
				}
			}
		}
	}
	if (chk==true)
	{
		res = 1;
		return res;
	}
	else if (chk==false)
	{
		res = 0;
		return res;
	}
}

int main()
{
	int min = 1, max = 100;
	std::cin >> max;
	system("cls");
	std::vector<int> primes = {};
	for (int i = 1; i <= max; i++)
	{
		if (checkPrime(i) == 0)
		{
			primes.push_back(i);
		}
	}

	for (int x:primes )
	{
		std::cout << x << std::endl;
	}
	system("pause");
}