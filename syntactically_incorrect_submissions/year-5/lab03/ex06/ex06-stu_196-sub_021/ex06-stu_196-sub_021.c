

#include <stdio.h>
#include <stdbool.h>


#define MAXLINE 10000


bool line_divisible_n(char s[], int lim, int n) 
{
	int c, i = 0, sum = 0, v;

	while (i < lim-1 && (c = getchar()) != EOF) 
	{
		v = c - '0';
		if (v > 0) {
			sum += v;
		}
	}

	return sum % n == 0;
}

int main() 
{
	char s[MAXLINE];

	bool is_divisible = line_divisible_n(s, MAXLINE, 9);

	printf("%s", is_divisible ? "yes" : "no");

	return 0;
}
