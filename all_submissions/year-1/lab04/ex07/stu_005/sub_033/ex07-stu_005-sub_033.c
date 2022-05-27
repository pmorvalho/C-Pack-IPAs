#include <stdio.h>

#define LEN_STR 100

int leLinha(char s[])
{
	int i = 0;
	char c;

	while((c = getchar()) != '\n' && c != EOF)
	{
		s[i] = c;
		i++;
	}

	return i;
}

void apagaCaracter(char s[], char c)
{
	int i;
	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == c)
		{
			s[i] = ' ';
		}
	}
}

int main()
{
	char c;
	char s[LEN_STR];
	leLinha(s);
	scanf("%c", &c);

	apagaCaracter(s, c);

	printf("%s\n", s);

	return 0;
}
