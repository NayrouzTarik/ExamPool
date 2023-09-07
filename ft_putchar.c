#include <unistd.h>

void ft_putchar(char c)
{ 
	write(1, &c, 1);
}

int main()
{
	int i = 0;
	char c[] = "adil";
	while (c[i])
		ft_putchar(c[i++]);
}