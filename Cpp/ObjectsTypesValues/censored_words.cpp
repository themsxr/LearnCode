#include <iostream>
#include <vector>

int main()
{
	std::vector<std::string> censored_words = { "grey", "white", "black", "purple", "pink", "red" };
	std::string censored_word = "censored.";
	std::string usr_input;
	
	do
	{
		for (int i = 0; i < censored_words.size(); i++)
		{
			if (usr_input == censored_words[i])
			{
				system("cls");
				std::cout << censored_word << std::endl;
			}
			else if (i == censored_words.size())
			{
				std::cout << usr_input << std::endl;
			}
		}
	} while (std::cin >> usr_input);
	system("pause");
}