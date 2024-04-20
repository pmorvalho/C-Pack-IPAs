#include <stdio.h>

int main()
{
	int n1, n2, n3, tmp;

	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);

	if(n2 > n3)
	{
		tmp = n3;
		n3 = n2;
		n2 = tmp;
	}
	if(n1 > n2)
	{
		tmp = n2;
		n2 = n1;
		n1 = tmp;
	}
	if(n2 > n3)
	{
		tmp = n3;
		n3 = n2;
		n2 = tmp;
	}

	printf("%d %d %d\n", n1, n2, n3);

	return 0;
}


