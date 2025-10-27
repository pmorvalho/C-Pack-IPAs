

#include <stdio.h>
#include <stdbool.h>


#define MAXLINE 10000


bool line_divisible_n(int lim, int n) 
{
	int c, i = 0, sum = 0, v;

	while (i < lim-1 && (c = getchar()) != EOF) 
	{
		v = c - '0';
		sum += v * (v >= 0 && v <= 9);
	}

	return sum % n == 0;
}

int main() 
{
	bool is_divisible = line_divisible_n(MAXLINE, 9);

	printf("%s\n", is_divisible ? "yes" : "no");

	return 0;
}
