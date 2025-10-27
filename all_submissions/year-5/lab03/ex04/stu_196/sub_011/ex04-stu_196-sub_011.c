

#include <stdio.h>
#include <stdbool.h>

void filter_line() 
{
	int c;

	bool readingnumber = false;
	bool space = false;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n')
		{
			if (!readingnumber) 
			{
				putchar('0');
				putchar(' ');
			}

			space = readingnumber;
			readingnumber = false;
		}
		else if (c == '0')
		{
			if (readingnumber) 
				putchar('0');
		}
		else 
		{
			readingnumber = true;
			putchar(c);
		}

		if ((c == ' ' || c == '\n') && space) {
			space = false;
			putchar(' ');
		}
	}

	putchar('\n');
}

int main() 
{
	filter_line();

	return 0;
}
