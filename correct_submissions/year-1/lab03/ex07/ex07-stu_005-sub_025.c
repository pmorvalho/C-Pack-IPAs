#include <stdio.h>

#define SUM 0
#define SUB 1

int readNumber(int *exit)
{
	int c, n = 0;

	while((c = getchar()) != ' ')
	{
		if(c == '\n')
		{
			*exit = 1;
			break;
		}
		n *= 10;
		n += c - '0';
	}

	return n;
}

int main()
{
	int c, n0, n1, op, exit = 0;
	n0 = readNumber(&exit);

	while((c = getchar()) != '\n')
	{
		if(c == '+') op = SUM;
		else if(c == '-') op = SUB;
		else if(c == ' ')
		{
			n1 = readNumber(&exit);
			if(op == SUM) n0 += n1;
			else if(op == SUB) n0 -= n1;
			if(exit == 1) break;
		}
	}

	printf("%d\n", n0);

	return 0;
}
