#include <stdio.h>

void ptrhello(char **str)
{
	*str = "Hello World";
}

int main()
{
	char *str= "fhgfgh";
	ptrhello(&str);
	printf("%s\n", str);
}