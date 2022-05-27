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

void maiusculas(char s[])
{
	int i;
	for(i = 0; s[i] != '\0'; i++)
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i] += 'A' - 'a';
}

int main()
{
	char s[LEN_STR];
	leLinha(s);
	maiusculas(s);

	printf("%s\n", s);

	return 0;
}
