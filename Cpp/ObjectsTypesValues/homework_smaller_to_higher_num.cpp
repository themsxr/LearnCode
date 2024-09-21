#include <iostream>

int main()
{
	int x1 = 0, x2 = 0, x3 = 0, n1 = 0, n2 = 0, n3 = 0;

	std::cout << "Type 3 numbers.\n";

	for (int z = 0; z <= 3; z++)
	{
		if (z<3)
		{
			std::cout << "\n$---: ";
		}
		
		if (z==0)
		{
			std::cin >> x1;
		}
		else if (z==1)
		{
			std::cin >> x2;
		}
		else if(z==2)
		{
			std::cin >> x3;
		}
		if (x1 < x2 && x3)
		{
			n3 = x1;
		}
		else if ((x1 < x2 && x1 > x3) || (x1 > x2 && x1 < x3))
		{
			n2 = x1;
		}
		else
		{
			n1 = x1;
		}

		if (x2 < x1 && x3)
		{
			n3 = x2;
		}
		else if ((x2 < x1 && x2 > x3) || (x2 > x1 && x2 < x3))
		{
			n2 = x2;
		}
		else
		{
			n1 = x2;
		}

		if (x3 < x1 && x2)
		{
			n3 = x3;
		}
		else if ((x3 < x1 && x3 > x2) || (x3 > x1 && x3 < x2))
		{
			n2 = x3;
		}
		else
		{
			n1 = x3;
		}
	}
	std::cout << n1 << ", " << n2 << ", " << n3 << "\n";
	system("pause");
}