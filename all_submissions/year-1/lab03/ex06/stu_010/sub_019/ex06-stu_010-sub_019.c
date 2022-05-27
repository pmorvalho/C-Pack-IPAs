#include <stdio.h>

int main()
{
	int c;
	long soma = 0;

	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
			soma = soma + (c - '0');
	}

	if (soma % 9 == 0)
		printf("yes\n");

	else
		printf("no\n");

	return 0;
}