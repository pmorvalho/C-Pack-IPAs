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

int main()
{
	char s[LEN_STR];
	leLinha(s);

	printf("%s\n", s);

	return 0;
}
