#include <stdio.h>

#define INFERIOR 1
#define PASSO 1


int main()
{
	int div;
	int n;
	int count;

	scanf("%d", &n);
	
	for (div = INFERIOR; div <= n; div += PASSO)
	{
		if (n%div==0) {
			count++;		
		}
	}
	printf("%d\n", count);
	return 0;	
}
