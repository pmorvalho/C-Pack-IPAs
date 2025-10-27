

#include <stdio.h>
#include <stdbool.h>

#define MAX 80


int leLinha(char s[])
{
	char c;
	int i = 0;

	while (i < MAX-1 && (c = getchar()) != EOF && c != '\n')
	{
		s[i] = c;
		i++;
	}

	s[i] = '\0';

	return i;
}

int main() 
{
	char s[MAX];

	int length = leLinha(s);

	for (int i = 0; i<length; i++)
	{
		putchar(s[i]);
	}

	putchar('\n');

	return 0;
}
