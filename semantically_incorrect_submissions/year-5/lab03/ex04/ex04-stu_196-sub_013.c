

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
				space = false;
			}
			else
			{
				space = true;
			}

			readingnumber = false;
		}
		else if (c == '0' && readingnumber)
		{
			putchar('0');
		}
		else if (c != '0')
		{
			if (space) {
				space = false;
				putchar(' ');
			}
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
