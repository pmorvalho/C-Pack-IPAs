

#include <stdio.h>
#include <stdbool.h>

void filter_line() 
{
	int c;

	bool readingnumber = false;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n')
		{
			if (!readingnumber) 
				putchar('0');

			readingnumber = false;
			putchar(' ');
		}
		else if (c == '0' && readingnumber)
		{
			putchar('0');
		}
		else if (c != '0')
		{
			readingnumber = true;
			putchar(c);
		}
	}

	putchar('\n');
}

int main() 
{
	filter_line();

	return 0;
}
