#include <stdio.h>

int main()
{
	int num1, cont=0, num, maior;
	
	scanf("%d", &num1);
	maior = num1;
	while (cont < 2)
	{
		
		scanf("%d", &num);
		if (num >= maior)
		{
			maior = num;
		}
		cont++;
	}
	printf("%d\n", maior);
	return 0;
}

