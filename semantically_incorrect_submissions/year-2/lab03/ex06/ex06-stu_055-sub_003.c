#include <stdio.h>

int main()
{
	char c;
	int sum = 0;
	while((c = getchar()) >= '0' && c <= '9')
		sum += (c - '0');
	printf((sum % 9 == 0) ? "yes" : "no");
	return 0;
}
