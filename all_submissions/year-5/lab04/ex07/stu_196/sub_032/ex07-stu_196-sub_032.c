

#include <stdio.h>
#include <stdbool.h>

#define MAX 80

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
	char temp_s[MAX];
	char c;

	scanf("%s%s", s, temp_s);

	c = temp_s[0];

	apagaCaracter(s, c);

	printf("%s\n", s);

	return 0;
}
