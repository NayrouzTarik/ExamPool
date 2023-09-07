#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int res = 0;
	int sign = 1;

	while (*str == 32 || (*str >= 9 && *str <= 13))
	str++;
	if (*str == '-' || *str == '+'){
		if(*str == '-')
	 sign *= -1;
	 str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return res * sign;
}

int main (int ac, char **av)
{
	if(ac == 4){
	int i = ft_atoi(av[1]);
	int j = ft_atoi(av[3]);
	int result = 0;
	if(av[2][0] == '*')
		result = i * j;
	else if(av[2][0] == '-')
		result = i - j;
	else if(av[2][0] == '+')
		result = i + j;
	else if(av[2][0] == '/')
		result = i / j;
	else if(av[2][0] == '%')
		result = i % j;
	printf("%d\n", result);
	}
	if(ac == 1)
	write(1, "\n", 1);
}