#include <iostream>

int funa(double a, double b, double c)
{
	c += a + b;
	return c;
}
int funb(double a, double b, double c)
{
	c += a - b;
	return c;
}
int func(double a, double b, double c)
{
	c += a * b;
	return c;
}
int fund(double a, double b, double c)
{
	c += a / b;
	if (c==0)
	{
		std::cout << "Error." << std::endl;
		return 0;
	}
	else
	{
		return c;
	}
}

int main()
{
	double x1 = 0, x2 = 0, sum = 0;
	char z = 0;
	bool check = false, chk = true, zchk = true;

	do
	{
		zchk = true;
		if (chk == true)
		{
			std::cout << std::endl << "Type number: ";
			std::cin >> x1;
		}
		while (zchk == true)
		{
			std::cout << std::endl << "+ - * / = e" << std::endl;
			std::cin >> z;
			if (z == '=')
			{
				std::cout << sum << std::endl;
				chk = true;
				zchk = false;
				sum = 0;
			}
			else if (z == '+' || z == '-' || z == '*' || z == '/')
			{
				std::cout << std::endl << "Type number: ";
				std::cin >> x2;
				if (z == '+')
				{
					sum = funa(x1, x2, sum);
				}
				else if (z == '-')
				{
					sum = funb(x1, x2, sum);
				}
				else if (z == '*')
				{
					sum = func(x1, x2, sum);
				}
				else if (z == '/')
				{
					sum = fund(x1, x2, sum);
				}
				zchk = false;
				chk = false;
			}
			else if (z == 'e')
			{
				check = true;
			}
			else
			{
				std::cout << "Error, try again." << std::endl;
			}
		}
	} while (check==false);
}