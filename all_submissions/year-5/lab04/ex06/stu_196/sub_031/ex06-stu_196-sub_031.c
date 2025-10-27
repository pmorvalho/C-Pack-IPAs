

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

void maiusculas(char s[])
{
	int i = 0;

	while (i < MAX-1 && s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
}

int main() 
{
	char s[MAX];

	leLinha(s);
	maiusculas(s);

	printf("%s\n",s);
	
	return 0;
}
