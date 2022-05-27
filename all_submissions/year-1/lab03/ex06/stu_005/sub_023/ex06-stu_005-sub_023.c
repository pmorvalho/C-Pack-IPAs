#include <stdio.h>

int div3(int n)
{
	int sum = 0;

	while(n > 0)
	{
		sum += n % 10;
		n /= 10;
	}

	if(sum > 9) return div3(sum);
	else if(sum == 3 || sum == 6 || sum == 9) return 1;
	else return 0;
}

int main()
{
	int c, sum = 0;

	while((c = getchar()) != EOF && c != '\n')
	{
		sum += c - '0';
	}

	if(div3(sum) == 1) printf("yes\n");
	else printf("no\n");

	return 0;
}
