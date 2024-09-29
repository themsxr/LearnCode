#include <iostream>

int main()
{
	int usr_choose = 0, comp_choose = 0;
	bool ch = true;
	
	do
	{
		std::cout << "1 - ROCK, 2 - PAPPER, 3 - SCISSORS" << std::endl;
		std::cin >> usr_choose;
		if (usr_choose == 1 || usr_choose == 2 || usr_choose == 3)
		{
			comp_choose = std::rand() % 3 + 1;
			if (comp_choose == 1 && usr_choose == 2)
			{
				std::cout << "Computer wins!" << std::endl;
			}
			else if (usr_choose==1&&comp_choose==2)
			{
				std::cout << "User wins!" << std::endl;
			}
			else if (comp_choose==2&&usr_choose==3)
			{
				std::cout << "User wins!" << std::endl;
			}
			else if (usr_choose==2&&comp_choose==3)
			{
				std::cout << "Computer wins!" << std::endl;
			}
			else if (usr_choose==1&&comp_choose==3)
			{
				std::cout << "User wins!" << std::endl;
			}
			else if (comp_choose==1&&usr_choose==3)
			{
				std::cout << "Computer wins!" << std::endl;
			}
			else if (usr_choose==comp_choose)
			{
				std::cout << "Tie." << std::endl;
			}
		}
		else
		{
			std::cout << "Wrong option, try again." << std::endl;
		}
	} while (ch == true);
	system("pause");
}