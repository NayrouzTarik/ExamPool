#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	while(av[1][i] != '\0')
	{
		if(i % 2 == 0)
		{
			write (1, &av[1][i], 1);
		}
		i++;
	}
	return 0;
}