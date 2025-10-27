

#include <stdio.h>

#define MAX 100

int maior(char s1[], char s2[])
{
	int i = 0;

	while (i < MAX-1 && s1[i] != '\0')
	{
		if (s1[i] > s2[i])
			return 1;
		else if (s2[i] > s1[i])
			return 0;

		i++;
	}

	return 0;
}

int main() 
{
	char s1[MAX], s2[MAX];

	scanf("%s%s", s1, s2);

	puts(maior(s1,s2) == 1 ? s1 : s2);

	return 0;
}
