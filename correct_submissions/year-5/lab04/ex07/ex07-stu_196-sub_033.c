

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

void apagaCaracter(char s[], char c)
{
	int i = 0, j = 0;

	while (i < MAX-1 && s[i] != '\0')
	{
		if (s[i] != c)
		{
			s[j] = s[i];
			j++;
		}
		i++;
	}

	s[j] = '\0';
}

int main() 
{
	char s[MAX];
	char c;

	leLinha(s);

	c = getchar();

	apagaCaracter(s, c);

	printf("%s\n", s);

	return 0;
}
