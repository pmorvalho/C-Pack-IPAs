#include <stdio.h>
#define DIM 80

int leLinha (char s[])
{
	char c;
	int i = 0;

	while ((c = getchar()) != '\n' && c != EOF)

		s[i++] = c;
	s[i] = '\0';
	return i;
}

int main()
{
	char s[DIM];

	leLinha(s);
	printf("%s\n",s);
	return 0;
}


