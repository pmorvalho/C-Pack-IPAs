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

void maiusculas (char s[])
{
	int i;

	for ( i=0; i<DIM && s[i]!= '\0'; i++)

		if (( 'a' <= s[i]) && (s[i] <= 'z'))

			s[i] = 'A' +  (s[i] - 'a');
}

int main()
{
	char s[DIM];

	leLinha(s);
	maiusculas(s);
	printf("%s\n",s);

	return 0;
} 
