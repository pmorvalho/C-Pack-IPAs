#include <stdio.h>
#include <string.h>

#define LEN_STR 100

int main()
{
	int i, len, p = 1;
	char s[LEN_STR];

	scanf("%s", s);
	len = strlen(s);

	for(i = 0; i < len; i++)
		if(s[i] != s[len - i - 1])
			p = 0;

	if(p == 1)
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}
