#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int min = 50, max = 100;
	std::vector<int> numbers(max);

	for (int i = 0; i < max; i++)
	{
		if (i==0)
		{
			numbers[i] = min;
		}
		else if(i != 0)
		{
			numbers[i] = numbers[i-1] + 1;
		}
	}
	system("pause");
}