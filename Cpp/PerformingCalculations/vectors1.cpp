#include <iostream>;
#include <vector>;
#include <algorithm>

int main()
{
	std::vector<int> l = { 1, 2, 3, 4, 5 };
	std::cout << l[2] << std::endl;

	for (int i = 0; i < l.size(); i++)
	{
		std::cout << l[i] << std::endl;
	}
	
	std::cout << "--------------size----------" << std::endl;
	std::cout << l.size() << std::endl;
	l.push_back(6);
	std::cout << l[5] << std::endl;

	std::vector<int> v = { 5, 7, 9, 4, 6, 8 };
	for (int x : v)
		std::cout << x << '\n';

	double usr_input;
	std::vector<double> list;
	std::cout << "----------------------------" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> usr_input;
		list.push_back(usr_input);
	}
	std::cout << "\n---------------------------\n";
	for (int i = 0; i < list.size(); i++)
	{
		std::cout << list[i] << "\t";
	}
	std::cout << "\n----------------\n" << "\n----------------\n" << "\n----------------\n" << std::endl;

	//Sort vector
	std::sort(list.begin(), list.end());
	for (int i = 0; i < list.size(); i++)
	{
		std::cout << std::endl << list[i] << std::endl;
	}
	system("pause");
}