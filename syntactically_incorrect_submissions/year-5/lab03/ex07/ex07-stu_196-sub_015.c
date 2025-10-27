

#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 10000

int calculate_line() 
{
	int i = 0;
	int num;
	int modifier = 1;
		
		

	int total = 0;

	bool readnumber = true;

	char operator, c;

	while (true) 
	{
		if (readnumber)
		{
			scanf("%d", &num);

			total += num * modifier;	

			readnumber = false;

			if ((c = getchar()) == '\n') 
				return total;
		} 
		else 
		{
			scanf("%c%c", &operator, &c);

			if (operator == '+') 
				modifier = 1;
			else if (operator == '-')
				modifier = -1;

			readnumber = true;
		}
	}

	return total;
}

int main() 
{
	int total = calculate_line();

	printf("%d\n", total);

	return 0;
}
