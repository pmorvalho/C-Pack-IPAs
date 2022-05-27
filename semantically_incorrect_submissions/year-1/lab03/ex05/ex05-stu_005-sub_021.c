#include <stdio.h>

int main()
{
	int c, message = 0, escape = 0;

	while((c = getchar()) != EOF)
	{
		if(escape == 0)
		{
			if(c == '\\') escape = 1;
			else if(c == '"') message ^= 1;
			else putchar(c);
		}
		else
		{
			putchar(c);
			escape = 0;
		}
	}

	return 0;
}
