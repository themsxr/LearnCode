#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::string usr_input;
	std::vector<std::string> names = { "zero", "one","two","three","four","five","six","seven","eight","nine" };
	std::vector<int> numbers = { 0,1,2,3,4,5,6,7,8,9 };

	std::cin >> usr_input;
	for (int i = 0; i < names.size(); i++)
	{
		if (usr_input == names[i])
		{
			std::cout << numbers[i];
		}
	}
	int num = std::stoi(usr_input);
	std::cout << names[num];
	system("pause");
}