#include <stdio.h>

int main()
{
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	if (x>y && x>z)
	{
		printf("%d\n", x);
	}
	else if (y>x && y>z)
	{
		printf("%d\n", y);
	}
	else
	{
		printf("%d\n", z);
	}
	return 0;
}