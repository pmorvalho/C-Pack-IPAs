#include <stdio.h>

#define MAX 80

int main()
{
	char s[MAX];
	int i, maior_pos;
	scanf("%s", s);

	
	for (i = 0; s[i] != '\0' && i < MAX; ++i)
		maior_pos = i;

	for(i = 0; maior_pos > i; maior_pos--, i++)
	{
		if (s[i] != s[maior_pos])
		{
			printf("no\n");
			return 0;
		}
	}
	printf("yes\n");

	return 0;
}