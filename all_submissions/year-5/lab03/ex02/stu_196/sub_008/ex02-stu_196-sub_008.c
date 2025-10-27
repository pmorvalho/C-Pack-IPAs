

#include <stdio.h>

void piramide(int n) 
{
	int num_spaces;
	char spaces[1000];

	for (int i = 1; i<=n; i++) 
	{
		num_spaces = (n-i) * 2;

		for (int k = 0; k<num_spaces; k++) 
			spaces[k] = ' ';

		spaces[num_spaces] = '\0';
		
		printf("%s", spaces);


		if (i == 1)
		{
			printf("1\n");
			continue;
		}


		
		for (int j = 1; j <= i; j++) 
		{
			printf("%d ", j);
		}

		
		for (int j = i-1; j > 0; j--) 
		{
			if (j == 1)
				printf("%d\n", j);
			else
				printf("%d ", j);
		}
	}
}

int main() 
{
	int n;

	scanf("%d", &n);

	piramide(n);

	return 0;
}
