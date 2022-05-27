#include <stdio.h>
#define MAX 80

void maiusculas(char s[]);
int lelinha(char s[]);

int main()
{
	char linha[MAX];

	lelinha(linha);
	maiusculas(linha);

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

void maiusculas(char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = 'A' + (s[i] -'a');
	}
}