
#include <stdio.h>
#include <stdlib.h>

void maiusculas(char s[])
{
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
}

int leLinha(char s[])
{
	int i = 0;
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	maiusculas(s);
	return i;
}

int main() {
	char s[100];
	int n = leLinha(s);
	printf("%s\n", s);
	return 0;
}