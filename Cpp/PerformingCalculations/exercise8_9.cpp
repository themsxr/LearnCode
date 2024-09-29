#include <iostream>
#include <vector>

int main()
{
	int s = 0;
	long long int am = 0;
	std::vector<long long int> am_mem(64);

	for (int i = 0; i < am_mem.size(); i++)
	{
		s += 1;
		if (s == 1)
		{
			am = 1;
		}
		else
		{
			am *= 2;
		}
		am_mem[i] = am;
		std::cout << "S: " << s << " AM: " << am << std::endl;
		if (am >= 1000 && am <= 1999)
		{
			std::cout << "!--!--! --->" << s << std::endl;
		}
		if (am >= 1000000 && am <= 1999999)
		{
			std::cout << "!--!--! --->" << s << std::endl;
		}
		if (am >= 1000000000 && am <= 1999999999)
		{
			std::cout << "!--!--! --->" << s << std::endl;
		}
	}
	system("pause");
}