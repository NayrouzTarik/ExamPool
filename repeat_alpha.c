#include <unistd.h>

int letterindex(char c)
{
	int repeat;
	if (c >= 'a' && c <= 'z')
	repeat = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
	repeat = c - 'A' + 1;
	else
	repeat = 1;
	return repeat;
}

int main(int ac, char **av)
{
	int repeat = 0;
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			int repeat = letterindex(av[1][i]);
			while (repeat > 0)
			{
				write (1, &av[1][i], 1);
				repeat--;
			}
			i++;	
		}
	}
	write (1, "\n", 1);
	return 0;
}