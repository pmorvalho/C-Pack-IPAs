#include <stdio.h>
#include <string.h>

#define MAX 80

int lelinha(char s[]);

int main()
{
	char linha[MAX];

	lelinha(linha);

	printf("%s\n", linha);

	return 0;
}

int lelinha(char s[])
{
	int c, i;
	for (i = 0; i < MAX - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
		s[i] = c;

	s[i] = '\0';

	return i;
}