#include <stdio.h>

int main()
{
	char c, n;
	int isWord = 0;

	while((c = getchar()) != EOF)
	{
		if(isWord == 1)
		{
			if(c == ' ' || c == '\n') isWord = 0;
			putchar(c);
		}
		else if(c != ' ' && c != '0')
		{
			isWord = 1;
			putchar(c);
		}
		else if(c == '0')
		{
			if((n = getchar()) != EOF)
			{
				if(n == ' ')
				{
					isWord = 0;
					putchar(c);
					putchar(n);
				}
				else if(n != '0')
				{
					isWord = 1;
					putchar(n);
				}
			}
		}
	}

	return 0;
}
