

#include <stdio.h>
#include <stdbool.h>

void filter_line() 
{
	int c;

	bool reading_number = false;
	bool reading_zero = false;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n')
		{
			if (reading_zero) 
			{
				putchar('0');
			}

			putchar(c);
			reading_number = false;
			reading_zero = false;
		}
		else if (c == '0')
		{
			if (reading_number) 
				putchar('0');
			else
				reading_zero = true;
		}
		else 
		{
			reading_number = true;
			reading_zero = false;
			putchar(c);
		}
	}
}

int main() 
{
	filter_line();

	return 0;
}
