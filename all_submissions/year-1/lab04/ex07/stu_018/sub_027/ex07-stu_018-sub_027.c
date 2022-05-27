#include <stdio.h>
#define DIM 100


void apagaCaracter(char s[], char c)
{
	int i;

	for (i=0; i<DIM && s[i] != '\0'; i++)
		if (s[i] != c)
			putchar(s[i]);
	printf("\n");
}

int main()
{
	int i= 0;
	char s[DIM],c;

	while ((c = getchar()) != '\n')
		s[i++] = c;

	s[i] = '\0';
	c = getchar();
	apagaCaracter(s,c);
	return 0;

}
