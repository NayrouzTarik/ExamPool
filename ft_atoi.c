#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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