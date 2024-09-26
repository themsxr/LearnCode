#include <iostream>

int main()
{
	int i = 0, n = 0;
	char x = 'a';

	while (i<100)
	{
		n = x + i;
		x += i;
		std::cout << x << "\t" << n << "\n";
		++i;
	}
	system("pause");
}