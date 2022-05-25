#include <stdio.h>

void piramide(int N)
{ 
	
 	int i, n_linha, dig, n_espacos = 2*N;

 	for (n_linha = 1; n_linha <= N; ++n_linha)
 	{
 		n_espacos = n_espacos - 2;

 		for (i=0; i < n_espacos; ++i)
 			printf(" ");

 		
 		for (dig=1; dig < n_linha; ++dig)
 			printf("%d ", dig);

 		
 		for (; dig>1; --dig)
 			printf("%d ", dig);

 		printf("1\n");

 	}

}


int main()
{
	int n;

	scanf("%d", &n);
	piramide(n);
	return 0;
}