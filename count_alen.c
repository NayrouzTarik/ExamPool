#include <stdio.h>

int count_alen(char *str)
{
	int i = 0;
		while (str[i])
		{
			if(str[i] == 'a')
			break;
			i++;
		}
		return i;
}

int main()
{
	char str[] = "abbcajnadsjnads";
	printf("%d", count_alen(str));
}