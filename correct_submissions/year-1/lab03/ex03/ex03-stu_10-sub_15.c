#include <stdio.h>

void cruz(int N)
{
	int col_prim_cruz, col_seg_cruz;
	int linha_n, col_n;

	col_prim_cruz = 1;
	col_seg_cruz = N;

	for (linha_n = 1; linha_n <= N; ++linha_n)
	{
		for(col_n = 1; col_n <= N; ++col_n)
		{
			if ((col_n == col_prim_cruz) || (col_n == col_seg_cruz))
				printf("*");
			else
				printf("-");

			if(col_n != N)
				printf(" ");
		}

		printf("\n");

		
		++col_prim_cruz;
		--col_seg_cruz;

	}


}

int main()
{
	int n;

	scanf("%d", &n);
	cruz(n);

	return 0;
}