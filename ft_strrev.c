#include <unistd.h>
#include<stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;	
	}
	return i;
}

char *ft_strrev(char *str)
{
	int s = 0;
	int e = ft_strlen(str) - 1;
	int temp;
	while (s < e)
	{
		temp = str[s];
		str[s] = str[e];
		str[e] = temp;
		s++;
		e--;
	}
	return 0;	
}

int main()
{
	char st[] = "abc";
	ft_strrev(st);
	printf("%s", st);
}
	