#include <string>
#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int     i = 1;
	int     j;
	char	s;

	if (ac > 1)
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				s = toupper(av[i][j]);
				std::cout << s;
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
