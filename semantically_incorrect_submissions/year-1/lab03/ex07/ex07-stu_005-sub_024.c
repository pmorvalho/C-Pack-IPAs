#include <stdio.h>

#define SUM 0
#define SUB 1

int readNumber()
{
	int c, n = 0;

	while((c = getchar()) != '\n' && c != ' ')
	{
		n *= 10;
		n += c - '0';
	}

	return n;
}

int main()
{
	int c, n0, n1, op;
	n0 = readNumber();

	while((c = getchar()) != '\n')
	{
		if(c == '+') op = SUM;
		else if(c == '-') op = SUB;
		else if(c == ' ')
		{
			n1 = readNumber();
			if(op == SUM) n0 += n1;
			else if(op == SUB) n0 -= n1;
		}
	}

	printf("%d\n", n0);

	return 0;
}
