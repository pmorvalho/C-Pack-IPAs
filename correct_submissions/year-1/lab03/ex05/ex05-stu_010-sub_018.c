#include <stdio.h>

# define SIM 1
# define NAO 0

int main()
{
	int c, backlash, dentro_mens;

	backlash = NAO;
	dentro_mens = NAO;

	while((c = getchar()) != EOF)
	{
		if (dentro_mens == SIM)
		{
			
			if (backlash == SIM)
			{
				putchar(c);
				backlash = NAO;
			}

			
			else if (c == '\\')
				backlash = SIM;

			else 
				{
					if (c == '"') 
					{
						putchar('\n');
						dentro_mens = NAO;
					}
					else 
						putchar(c);
				}
		}

		else
		{
			if (c == '"') 
				dentro_mens = SIM;
		}			
	}
	return 0;
}