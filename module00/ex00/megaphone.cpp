#include <string>
#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int		i = 1;
	int		j;
	std::string	s;

	if (ac > 1)
	{
		for (int i = 1; av[i]; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				s = toupper(av[i][j]);
				std::cout << s;
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
