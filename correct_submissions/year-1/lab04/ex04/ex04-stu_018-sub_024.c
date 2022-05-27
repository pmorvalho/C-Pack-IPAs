#include <stdio.h>

#define DIM 80
#define SIM 1
#define NAO 0

int main()
{
	int i=0,fim, palindromo= SIM;
	char vec[DIM];

	scanf("%s",vec);

	while (vec[i] !='\0')
		i++;
	fim = i;

	for (i = 0; i<fim ; i++)
	{
		if (vec[i] != vec[fim-i-1])
			palindromo = NAO;
	}

	if (palindromo == SIM)
		printf("yes\n");

	else
		printf("no\n");

	return 0;
}
