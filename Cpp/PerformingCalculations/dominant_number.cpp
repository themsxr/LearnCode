#include <iostream>
#include <vector>

int main()
{
	int rem = 0, res = 0, res_ch = 0;
	std::vector<int> nums = { 1, 2, 2, 4, 2, 1, 8, 5, 5, 1, 2, 3, 3, 3, 1, 2, 2 };

	for (int i = 0; i < nums.size(); i++)
	{
		res_ch = 0;
		for (int z = 0; z < nums.size(); z++)
		{
			if (nums[z] == nums[i])
			{
				res_ch++;
				if (res_ch > res)
				{
					res = res_ch;
					rem = nums[i];
				}
			}
		}
	}
	std::cout << std::endl << "Dominant number is: " << rem << " and was used in array " << res << " times." << std::endl;
	system("pause");
}