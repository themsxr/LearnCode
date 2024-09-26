#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int checku = 0;
	double n_max = 0, n_min = 0, n_rem1 = 0, n_rem2 = 0;
	bool check_opt = false;
	char n_jm;
	std::vector<double> nums = {0, 0};
	std::vector<std::string> nums_jm = { "", "" };
	for (double usr_input; std::cin >> usr_input;)
	{
		++checku;
		if (checku > 2)
		{
			checku = 1;
		}

		if (checku == 1)
		{
			nums[0] = usr_input;
			n_rem1 = nums[0];
			check_opt = false;
			while (check_opt == false)
			{
				std::cout << "cm - 1, m - 2, inch - 3, feet - 4" << std::endl;
				std::cin >> n_jm;
				switch (n_jm)
				{
				case '1':
					nums_jm[0] = "cm";
					check_opt = true;
					break;
				case '2':
					nums_jm[0] = "m";
					check_opt = true;
					break;
				case '3':
					nums_jm[0] = "inch";
					check_opt = true;
					break;
				case '4':
					nums_jm[0] = "ft";
					check_opt = true;
					break;
				default:
					std::cout << "Wrong option, try again.";
					break;
				}
			}
		}
		else if (checku == 2)
		{
			nums[1] = usr_input;
			n_rem2 = nums[1];
			check_opt = false;
			while (check_opt == false)
			{
				std::cout << "cm - 1, m - 2, inch - 3, feet - 4" << std::endl;
				std::cin >> n_jm;
				switch (n_jm)
				{
				case '1':
					nums_jm[1] = "cm";
					check_opt = true;
					break;
				case '2':
					nums_jm[1] = "m";
					check_opt = true;
					break;
				case '3':
					nums_jm[1] = "inch";
					check_opt = true;
					break;
				case '4':
					nums_jm[1] = "ft";
					check_opt = true;
					break;
				default:
					std::cout << "Wrong option, try again.";
					break;
				}
			}
		}

		std::sort(nums.begin(), nums.end());
		if (n_rem1 != nums[0])
		{
			std::string a = nums_jm[0], b = nums_jm[1];
			nums_jm[0] = b;
			nums_jm[1] = a;
		}
		if (nums[1] > n_max)
		{
			std::cout << "This number is the smallest one from all you entered." << std::endl;
			n_max = nums[1];
		}
		if (nums[0] < n_min)
		{
			std::cout << "This number is the biggest one from all you entered." << std::endl;
			n_min = nums[0];
		}
	}
	std::sort(nums.begin(), nums.end());
	
	if (nums[0] == nums[1])
	{
		std::cout << "The numbers are equal." << std::endl;
	}
	else
	{
		std::cout << "Smaller: " << nums[0] << " Higher: " << nums[1];
	}

	if (nums[1]-nums[0] == 1)
	{
		std::cout << "The numbers are close to be equal." << std::endl;
	}

	double cm_to_m = 0.01, inch_to_m = 0.0254, ft_to_m = 0.3048, sum1 = 0, sum2 = 0;
	if (nums_jm[0] == "cm")
	{
		sum1 = nums[0] * cm_to_m;
	}
	else if (nums_jm[0] == "inch")
	{
		sum1 = nums[0] * inch_to_m;
	}
	else if (nums_jm[0] == "ft")
	{
		sum1 = nums[0] * ft_to_m;
	}
	else
	{
		std::cout << "Something went wrong." << std::endl;
	}

	if (nums_jm[1] == "cm")
	{
		sum2 = nums[1] * cm_to_m;
	}
	else if (nums_jm[1] == "inch")
	{
		sum2 = nums[1] * inch_to_m;
	}
	else if (nums_jm[1] == "ft")
	{
		sum2 = nums[1] * ft_to_m;
	}
	else
	{
		std::cout << "Something went wrong." << std::endl;
	}
	std::cout << nums[0] << nums_jm[0] << " to m: " << sum1 << "m" << std::endl;
	std::cout << nums[1] << nums_jm[1] << " to m: " << sum2 << "m" << std::endl;

	std::vector<double>res_sum = { sum1,sum2 };
	std::sort(res_sum.begin(), res_sum.end());
	std::cout << res_sum[0] << "m" << "\t" << res_sum[1] << "m" << std::endl;
	system("pause");
}