#include <stdio.h>

#define DIM 100

int main()
{
	char s1[DIM], s2[DIM];
	int i;

	scanf("%s%s",s1,s2);
	for ( i = 0; s1[i] != '\0' && s1[i] == s2[i]; i++);

	if (s1[i] <= s2[i])
		printf("%s\n", s2);

	else
		printf("%s\n", s1);

	return 0;
}

