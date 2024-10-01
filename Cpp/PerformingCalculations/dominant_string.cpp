#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int res = 0, res_ch = 0;
	std::string rem;
	std::vector<std::string> names = { "one","two","two","four","three","seven","two","one","one","three","two","eight","two" };

	for (int i = 0; i < names.size(); i++)
	{
		res_ch = 0;
		for (int z = 0; z < names.size(); z++)
		{
			if (names[z] == names[i])
			{
				res_ch++;
				if (res_ch > res)
				{
					res = res_ch;
					rem = names[i];
				}
			}
		}
	}
	std::sort(names.begin(), names.end());
	std::cout << std::endl << "Shortest string was: " << names[12] << std::endl << "Longest string was: " << names[0] << std::endl << "Dominant string is: " << rem << " and was used: " << res << " times." << std::endl;
	system("pause");
}