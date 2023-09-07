#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void putnbr(int nb)
{
	long nbr = nb;
	if(nbr < 0)
	{
	ft_putchar('-');
	nbr *= -1;
	}
	if (nbr >= 0 && nbr <= 9)
	{
		ft_putchar(nbr + 48);
	}
	if (nbr > 9)
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
}

int main()
{
	putnbr(-2147483647);
}